//
//  RMSTextField.h
//  RMSTokenView
//
//  Created by Patrick Strawderman on 5/5/14.
//  Copyright (c) 2014 RoleModel Software. All rights reserved.
//

#import "TargetConditionals.h"

#if TARGET_OS_IPHONE

@import UIKit;

@protocol BackspaceDelegate <NSObject>

@optional
- (void)willDeleteBackward:(UITextField*)textField;
- (void)didDeleteBackward:(UITextField*)textField;

@end


@interface RMSTextField : UITextField
@property (nonatomic, weak) id<BackspaceDelegate>backspaceDelegate;
@end


#endif
