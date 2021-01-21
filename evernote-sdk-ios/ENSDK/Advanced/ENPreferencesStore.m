/*
 * Copyright (c) 2014 by Evernote Corporation, All rights reserved.
 *
 * Use of the source code and binary libraries included in this package
 * is permitted under the following terms:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#import "ENPreferencesStore.h"
#import "ENSDKPrivate.h"

static NSString * ENPreferencesStoreFilename = @"com.evernote.evernote-sdk-ios.plist";

@interface ENPreferencesStore ()
@property (nonatomic, strong) NSString * pathname;
@property (nonatomic, strong) NSMutableDictionary * store;
@end

@implementation ENPreferencesStore
#if TARGET_OS_IPHONE || TARGET_OS_WATCH || TARGET_OS_TV
+ (NSString *)pathnameForStoreFilename:(NSString *)filename
{
	NSArray * paths = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
	return [[paths[0] stringByAppendingPathComponent:@"Preferences"] stringByAppendingPathComponent:filename];
}

#elif TARGET_OS_MAC && !TARGET_OS_IPHONE

+ (NSString *)pathnameForStoreFilename:(NSString *)filename
{
	static NSString *path = nil;
	if(path == nil)
	{
		path = [[NSFileManager informantDocumentsDirectory] stringByAppendingPathComponent: @"Evernote"];
		NSFileManager *fileMng = [NSFileManager defaultManager];
		if([fileMng fileExistsAtPath: path] == NO)
		{
			NSError *error = nil;
			if([fileMng createDirectoryAtPath:path withIntermediateDirectories:YES attributes:nil error: &error] == NO)
			{
				[PILog error:[NSString stringWithFormat:@"Error created Evernote store file path: %@", [error description]]];
			}
		}
		
		path = [path stringByAppendingPathComponent:filename];
	}
	
	return path;
}

//Apple's standard migration gets the file from the general preferences folder into this folder (which is the Library/Containers folder for the helper).  However, we need to get this file into the Group Containers folder so main app + helper can play with it.  That happens in migratePrefsToSandboxIfNecessary.  This method just gives us the path to the interim place where Apple moves it.
+ (NSString *)_legacyInterimPathnameForStoreFilename:(NSString *)filename
{
	NSArray * paths = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
	NSString *prefPath = [[paths[0] stringByAppendingPathComponent:@"Preferences"] stringByAppendingPathComponent:filename];
//	DDLogVerbose(@"Evernote: _legacyInterimPathnameForStoreFilename:  %@", prefPath);
	return prefPath;
}
#endif  //elif TARGET_OS_MAC && !TARGET_OS_IPHONE



//In 1.0.2, we Sandboxed the helper.  We have the custom Sandbox migration process handling the migration of the evernote login prefs to the app sandbox, but now we need to move it to the Group Container where it can be used by main app + helper.
//I couldn't find a way with the custom sandbox migration to migrate straight into the Group Container, so we rely on this as part 2 of a 2 step process
#if TARGET_NAME_InformantHelper
+ (void)migratePrefsToSandboxIfNecessary
{
	NSString *legacyEvernotePath = [self _legacyInterimPathnameForStoreFilename: ENPreferencesStoreFilename];
	NSString *newPath = [self pathnameForStoreFilename: ENPreferencesStoreFilename];
	NSFileManager *fileMng = [NSFileManager defaultManager];
	if([fileMng fileExistsAtPath:legacyEvernotePath] && ![fileMng fileExistsAtPath: newPath])
	{
		//if we get here, that means the user was using Informant 1.0 (non-MAS), set up an Evernote sync account, and now they are launching 1.0.2+ for the first time.
		__autoreleasing NSError *error = nil;
		if([fileMng moveItemAtPath:legacyEvernotePath toPath:newPath error:&error])
		{
			[PILog info:@"Evernote migrated to sandbox"];
		} else {
			[PILog error:[NSString stringWithFormat:@"Error migrating Evernote to Sandbox: %@", error]];
		}
	} else {
		BOOL oldFileExists = [fileMng fileExistsAtPath:legacyEvernotePath];
		BOOL newFileExists = [fileMng fileExistsAtPath: newPath];
		[PILog info:[NSString stringWithFormat:@"Evernote migration not necessary (old: %@ / new: %@)", (oldFileExists ? @"YES" : @"NO"), (newFileExists ? @"YES" : @"NO")]];
	}
}
#endif

- (id)initWithStoreFilename:(NSString *)filename
{
    self = [super init];
    if (self) {
        self.pathname = [[self class] pathnameForStoreFilename:filename];
        [self load];
    }
    return self;
}

- (id)initWithURL:(NSURL*)fileURL
{
    self = [super init];
    if (self) {
        self.pathname = [fileURL path];
        [self load];
    }
    return self;
}

- (id)init
{
    [NSException raise:NSInvalidArgumentException format:@"Must call -initWithStoreFilename:"];
    return nil;
}

+(instancetype) preferenceStoreWithSecurityApplicationGroupIdentifier:(NSString*)groupId
{
    NSURL* URL = [[NSFileManager defaultManager] containerURLForSecurityApplicationGroupIdentifier:groupId];
    return [[self alloc] initWithURL:[URL URLByAppendingPathComponent:ENPreferencesStoreFilename]];
}

+(instancetype) defaultPreferenceStore
{
    return [[self alloc] initWithStoreFilename:ENPreferencesStoreFilename];
}

- (id)objectForKey:(NSString *)key
{
    @synchronized(self) {
        return [self.store objectForKey:key];
    }
}

- (void)setObject:(id)object forKey:(NSString *)key
{
    @synchronized(self) {
        if (object) {
            [self.store setObject:object forKey:key];
        } else {
            [self.store removeObjectForKey:key];
        }
    }
    [self save];
}

- (id)decodedObjectForKey:(NSString *)key
{
    NSData * data = nil;
    @synchronized(self) {
        data = [self.store objectForKey:key];
    }
    if (!data || ![data isKindOfClass:[NSData class]]) {
        return nil;
    }
    id object = nil;
    @try {
        object = [NSKeyedUnarchiver unarchiveObjectWithData:data];
			[PILog verbose:[NSString stringWithFormat:@"Evernote: ENPreferenceStore decodedObjectForKey OBJECT: %@", object]];
    } @catch(id e) {
			[PILog error:[NSString stringWithFormat:@"ENPreferencesStore: Error unarchiving object for key %@ : %@", key, e]];
        // DON'T nuke whatever object this is, maybe the called called the wrong
        // getter.
    }
    
    return object;
}

- (void)encodeObject:(id)object forKey:(NSString *)key
{
    NSData * data = nil;
    @try {
        data = [NSKeyedArchiver archivedDataWithRootObject:object];
    } @catch(id e) {
			[PILog error:[NSString stringWithFormat:@"ENPreferencesStore: Error archiving object of root class %@ : %@", [object class], e]];
    }
    if (data) {
        @synchronized(self) {
            [self.store setObject:data forKey:key];
        }
        [self save];
    }
}

- (void)save
{
    NSMutableDictionary * store = nil;
    @synchronized(self) {
        store = self.store;
    }
    NSError * error = nil;
    NSData * data = [NSPropertyListSerialization dataWithPropertyList:store format:NSPropertyListXMLFormat_v1_0 options:0 error:&error];
    if (!data) {
			[PILog error:[NSString stringWithFormat:@"ENPreferencesStore: Error serializing prefs store. %@", error]];
    }
    if (data) {
        if (![data writeToFile:self.pathname options:NSDataWritingAtomic error:&error]) {
					[PILog error:[NSString stringWithFormat:@"ENPreferencesStore: Error writing prefs store. %@", error]];
        }
    }
}

- (void)removeAllItems
{
    @synchronized(self) {
        [self.store removeAllObjects];
    }
    [self save];
}

- (void)load
{
    NSMutableDictionary * prefs = nil;

    NSError * error = nil;
    NSData * data = [NSData dataWithContentsOfFile:self.pathname options:0 error:&error];
    if (data) {
        NSPropertyListFormat format;
        prefs = [NSPropertyListSerialization propertyListWithData:data options:NSPropertyListMutableContainers format:&format error:&error];
        if (!prefs || format != NSPropertyListXMLFormat_v1_0) {
            // File was there but failed to deserialize. That's worth logging.
					[PILog error:[NSString stringWithFormat:@"ENPreferencesStore: Failed to open preferences store at %@: %@", self.pathname, error]];
            prefs = nil;
        }
    }
    if (!prefs) {
        [[NSFileManager defaultManager] removeItemAtPath:self.pathname error:NULL];
        prefs = [[NSMutableDictionary alloc] init];
    }
    @synchronized(self) {
        self.store = prefs;
    }
}
@end
