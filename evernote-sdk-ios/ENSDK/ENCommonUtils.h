//
//  ENCommonUtils.h
//  evernote-sdk-ios
//
//  Created by Eric Cheng on 9/29/14.
//  Copyright (c) 2014 Evernote Corporation. All rights reserved.
//


#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#elif TARGET_OS_MAC && !TARGET_OS_IPHONE
#import <AppKit/AppKit.h>
#endif

@interface ENCommonUtils : NSObject

BOOL IsIOS8(void);
BOOL IsEvernoteInstalled(void);

@end
