//
//  ENCommonUtils.h
//  evernote-sdk-ios
//
//  Created by Eric Cheng on 9/29/14.
//  Copyright (c) 2014 Evernote Corporation. All rights reserved.
//


#if TARGET_OS_IOS || TARGET_OS_WATCH || TARGET_OS_TV
@import UIKit;
#elif defined(__MAC_OS_X_VERSION_MIN_REQUIRED)
@import AppKit;
#endif

@interface ENCommonUtils : NSObject

BOOL IsIOS8(void);
BOOL IsEvernoteInstalled(void);

@end
