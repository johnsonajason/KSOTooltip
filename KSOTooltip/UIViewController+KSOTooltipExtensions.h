//
//  UIViewController+KSOTooltipExtensions.h
//  KSOTooltip
//
//  Created by William Towe on 9/16/17.
//  Copyright © 2017 Kosoku Interactive, LLC. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
//
//  1. Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
//
//  2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (KSOTooltipExtensions)

/**
 Presents a tooltip with *text* animated from the *sourceView*.
 
 @param text The tooltip text
 @param sourceView The source view from which to display the tooltip
 */
- (void)KSO_presentTooltipViewControllerAnimatedWithText:(NSString *)text sourceView:(UIView *)sourceView;
/**
 Presents a tooltip with *text* animated from the *barButtonItem*.
 
 @param text The tooltip text
 @param barButtonItem The bar button item from which to display the tooltip
 */
- (void)KSO_presentTooltipViewControllerAnimatedWithText:(NSString *)text barButtonItem:(UIBarButtonItem *)barButtonItem;

/**
 Presents a tooltip with *attributedText* animated from the *sourceView*.
 
 @param attributedText The tooltip attributed text
 @param sourceView The source view from which to display the tooltip
 */
- (void)KSO_presentTooltipViewControllerAnimatedWithAttributedText:(NSAttributedString *)attributedText sourceView:(UIView *)sourceView;
/**
 Presents a tooltip with *attributedText* animated from the *barButtonItem*.
 
 @param attributedText The tooltip attributed text
 @param barButtonItem The bar button item from which to display the tooltip
 */
- (void)KSO_presentTooltipViewControllerAnimatedWithAttributedText:(NSAttributedString *)attributedText barButtonItem:(UIBarButtonItem *)barButtonItem;

/**
 Presents a tooltip with *text* from *sourceRect* relative to *sourceView* optionally *animated* and invokes *completion* when after the tooltip is presented.
 
 @param text The tooltip text
 @param sourceView The source view from which to present the tooltip
 @param sourceRect The source rect from which to present the tooltip
 @param animated Whether to animate the presentation
 @param completion The block to invoke after the presentation completes
 */
- (void)KSO_presentTooltipViewControllerWithText:(NSString *)text sourceView:(UIView *)sourceView sourceRect:(CGRect)sourceRect animated:(BOOL)animated completion:(nullable dispatch_block_t)completion;
/**
 Presents a tooltip with *text* from *barButtonItem* optionally *animated* and invokes *completion* when after the tooltip is presented.
 
 @param text The tooltip text
 @param barButtonItem The bar button item from which to present the tooltip
 @param animated Whether to animate the presentation
 @param completion The block to invoke after the presentation completes
 */
- (void)KSO_presentTooltipViewControllerWithText:(NSString *)text barButtonItem:(UIBarButtonItem *)barButtonItem animated:(BOOL)animated completion:(nullable dispatch_block_t)completion;

/**
 Presents a tooltip with *attributedText* from *sourceRect* relative to *sourceView* optionally *animated* and invokes *completion* when after the tooltip is presented.
 
 @param attributedText The tooltip attributed text
 @param sourceView The source view from which to present the tooltip
 @param sourceRect The source rect from which to present the tooltip
 @param animated Whether to animate the presentation
 @param completion The block to invoke after the presentation completes
 */
- (void)KSO_presentTooltipViewControllerWithAttributedText:(NSAttributedString *)attributedText sourceView:(UIView *)sourceView sourceRect:(CGRect)sourceRect animated:(BOOL)animated completion:(nullable dispatch_block_t)completion;
/**
 Presents a tooltip with *attributedText* from *barButtonItem* optionally *animated* and invokes *completion* when after the tooltip is presented.
 
 @param attributedText The tooltip attributed text
 @param barButtonItem The bar button item from which to present the tooltip
 @param animated Whether to animate the presentation
 @param completion The block to invoke after the presentation completes
 */
- (void)KSO_presentTooltipViewControllerWithAttributedText:(NSAttributedString *)attributedText barButtonItem:(UIBarButtonItem *)barButtonItem animated:(BOOL)animated completion:(nullable dispatch_block_t)completion;

@end

NS_ASSUME_NONNULL_END
