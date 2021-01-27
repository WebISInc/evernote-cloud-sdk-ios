//
//  ENNotebookPickerView.h
//  evernote-sdk-ios
//
//  Created by Eric Cheng on 5/19/14.
//  Copyright (c) 2014 Evernote Corporation. All rights reserved.
//

#import "TargetConditionals.h"
#if TARGET_OS_IPHONE

@import UIKit;
#import "ENNotebookPickerButton.h"

@interface ENNotebookPickerView : UIButton

@property (nonatomic, strong) UILabel *notebookLabel;
@property (nonatomic, strong) ENNotebookPickerButton *notebookPickerButton;

@end

#endif
