//
//  TextViewDelegate.h
//  AESTextEncryption
//
//  Created by Evgenii Neumerzhitckii on 10/11/2013.
//  Copyright (c) 2013 Evgenii Neumerzhitckii. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ViewController.h"

@interface TextViewDelegate : NSObject <UITextViewDelegate>

+ (UIColor*) placeholderColor;
+ (NSString*) text: (NSString*)text;
+ (void) setText:(NSString *) text forTextView:(UITextView *) textView;

- (id) initWithVC: (ViewController*) vc;
- (void)setTextPlaceholder: (UITextView *)textView;

@end
