//
//  ENOAuthWindowController.h
//  EvernoteSDK
//
//  Created by Dirk Holtwick on 02.04.13.
//  Copyright (c) 2013 n/a. All rights reserved.
//

#if TARGET_OS_MAC && !TARGET_OS_IPHONE

#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>

@protocol ENOAuthViewControllerDelegate <NSObject>
- (void)oauthViewControllerDidCancel:(id)sender;
- (void)oauthViewControllerDidSwitchProfile:(id)sender;
- (void)oauthViewController:(id)sender didFailWithError:(NSError *)error;
- (void)oauthViewController:(id)sender receivedOAuthCallbackURL:(NSURL *)url;
@end

@interface ENOAuthWindowController : NSWindowController

@property (weak) IBOutlet NSProgressIndicator *activityIndicator;
@property (weak) IBOutlet WebView *webView;

@property (nonatomic, weak) id<ENOAuthViewControllerDelegate> delegate;

- (id)initWithAuthorizationURL:(NSURL *)authorizationURL
           oauthCallbackPrefix:(NSString *)oauthCallbackPrefix
                   profileName:(NSString *)currentProfileName
                allowSwitching:(BOOL)isSwitchingAllowed
                      delegate:(id<ENOAuthViewControllerDelegate>)delegate;
- (void)updateUIForNewProfile:(NSString*)newProfile withAuthorizationURL:(NSURL*)authURL;

- (void)presentSheetForWindow:(NSWindow *)window;

@end

#endif
