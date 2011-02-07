// Copyright 2010-2011 The Omni Group.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <UIKit/UIBarButtonItem.h>
#import <OmniUI/OUIBarButtonItemBackgroundType.h>

@class OUIToolbarButton;

@interface OUIBarButtonItem : UIBarButtonItem

+ (Class)buttonClass;

- initWithBackgroundType:(OUIBarButtonItemBackgroundType)backgroundType image:(UIImage *)image title:(NSString *)title target:(id)target action:(SEL)action;

@property(readonly,nonatomic) OUIToolbarButton *button; // Just returns the custom view, but typed more nicely.

- (void)setNormalBackgroundImage:(UIImage *)image;
- (void)setHighlightedBackgroundImage:(UIImage *)image;

@end