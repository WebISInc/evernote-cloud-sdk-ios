//
//  ENCommonUtils.m
//  evernote-sdk-ios
//
//  Created by Eric Cheng on 9/29/14.
//  Copyright (c) 2014 Evernote Corporation. All rights reserved.
//

#import "ENCommonUtils.h"

@implementation ENCommonUtils

BOOL IsIOS8() {
	
#if TARGET_OS_IOS || TARGET_OS_WATCH || TARGET_OS_TV
	if([[UIDevice currentDevice].systemVersion floatValue] >= 8.0) {
		return YES;
	}else {
		return NO;
	}
#elif defined(__MAC_OS_X_VERSION_MIN_REQUIRED)
	return YES;
#endif
}

BOOL IsEvernoteInstalled() {
#if TARGET_OS_IOS || TARGET_OS_WATCH || TARGET_OS_TV
	return [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"en://"]];
#elif defined(__MAC_OS_X_VERSION_MIN_REQUIRED)
	NSString *path = [[NSWorkspace sharedWorkspace] absolutePathForAppBundleWithIdentifier:@"com.evernote.Evernote"];
	return path != nil;
#endif
}

@end
