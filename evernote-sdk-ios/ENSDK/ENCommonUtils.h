//
//  ENCommonUtils.h
//  evernote-sdk-ios
//
//  Created by Eric Cheng on 9/29/14.
//  Copyright (c) 2014 Evernote Corporation. All rights reserved.
//

#import "TargetConditionals.h"
#if TARGET_OS_IPHONE
@import UIKit;
#elif TARGET_OS_MAC && !TARGET_OS_IPHONE
@import AppKit;
#endif

@interface ENCommonUtils : NSObject

BOOL IsIOS8(void);
BOOL IsEvernoteInstalled(void);

@end
