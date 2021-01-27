//
//  ENOAuthProtocols.h
//  evernote-sdk-ios
//
//  Created by Stephen Kac on 1/27/21.
//  Copyright © 2021 Evernote Corporation. All rights reserved.
//

#ifndef ENOAuthProtocols_h
#define ENOAuthProtocols_h

#if TARGET_OS_IPHONE
@import UIKit;
typedef UIImage ENImage;
#elif TARGET_OS_MAC && !TARGET_OS_IPHONE
@import AppKit;
typedef NSImage ENImage;
#endif


@protocol ENOAuthController <NSObject>

#if TARGET_OS_IPHONE

#elif TARGET_OS_MAC && !TARGET_OS_IPHONE
- (void)presentSheetForWindow:(NSWindow *_Nonnull)window;
#endif

- (void)updateUIForNewProfile:(NSString *_Nonnull)window withAuthorizationURL:(NSURL *_Nonnull)authorizationURL;

@end

@protocol ENOAuthViewControllerDelegate <NSObject>
- (void)oauthViewControllerDidCancel:(NSObject<ENOAuthController> *_Nonnull)sender;
- (void)oauthViewControllerDidSwitchProfile:(NSObject<ENOAuthController> *_Nonnull)sender;
- (void)oauthViewController:(NSObject<ENOAuthController> *_Nonnull)sender didFailWithError:(NSError *_Nonnull)error;
- (void)oauthViewController:(NSObject<ENOAuthController> *_Nonnull)sender receivedOAuthCallbackURL:(NSURL *_Nonnull)url;
@end

#if TARGET_OS_IPHONE


typedef UIViewController<ENOAuthController> *_Nonnull(^AuthViewBlock) (NSURL *_Nonnull authURL,
                                                                       NSString *_Nonnull oauthCallbackPrefix,
                                                                       NSString *_Nonnull currentProfileName,
                                                                       BOOL isSwitchingAllowed,
                                                                       NSObject<ENOAuthViewControllerDelegate> *_Nullable delegate);

#elif TARGET_OS_MAC && !TARGET_OS_IPHONE


typedef NSWindowController<ENOAuthController> *_Nonnull(^AuthViewBlock) (NSURL *_Nonnull authURL,
                                                                         NSString *_Nonnull oauthCallbackPrefix,
                                                                         NSString *_Nonnull currentProfileName,
                                                                         BOOL isSwitchingAllowed,
                                                                         NSObject<ENOAuthViewControllerDelegate> *_Nullable delegate);
#endif


#endif /* ENOAuthProtocols_h */
