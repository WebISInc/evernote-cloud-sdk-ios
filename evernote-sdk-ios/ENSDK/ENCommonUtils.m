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
	
#if TARGET_OS_IPHONE
	if([[UIDevice currentDevice].systemVersion floatValue] >= 8.0) {
		return YES;
	}else {
		return NO;
	}
#elif TARGET_OS_MAC && !TARGET_OS_IPHONE
	return YES;
#endif
}

BOOL IsEvernoteInstalled() {
#if TARGET_OS_IPHONE
	return [[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"en://"]];
#elif TARGET_OS_MAC && !TARGET_OS_IPHONE
	NSString *path = [[NSWorkspace sharedWorkspace] absolutePathForAppBundleWithIdentifier:@"com.evernote.Evernote"];
	return path != nil;
#endif
}

@end
