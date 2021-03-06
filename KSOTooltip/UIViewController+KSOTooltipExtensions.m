//
//  UIViewController+KSOTooltipExtensions.m
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

#import "UIViewController+KSOTooltipExtensions.h"
#import "KSOTooltipViewController.h"

@implementation UIViewController (KSOTooltipExtensions)

- (void)KSO_presentTooltipViewControllerAnimatedWithText:(NSString *)text sourceView:(UIView *)sourceView; {
    [self KSO_presentTooltipViewControllerWithText:text sourceView:sourceView sourceRect:CGRectZero animated:YES completion:nil];
}
- (void)KSO_presentTooltipViewControllerAnimatedWithText:(NSString *)text barButtonItem:(UIBarButtonItem *)barButtonItem; {
    [self KSO_presentTooltipViewControllerWithText:text barButtonItem:barButtonItem animated:YES completion:nil];
}

- (void)KSO_presentTooltipViewControllerAnimatedWithAttributedText:(NSAttributedString *)attributedText sourceView:(UIView *)sourceView; {
    [self KSO_presentTooltipViewControllerWithAttributedText:attributedText sourceView:sourceView sourceRect:CGRectZero animated:YES completion:nil];
}
- (void)KSO_presentTooltipViewControllerAnimatedWithAttributedText:(NSAttributedString *)attributedText barButtonItem:(UIBarButtonItem *)barButtonItem; {
    [self KSO_presentTooltipViewControllerWithAttributedText:attributedText barButtonItem:barButtonItem animated:YES completion:nil];
}

- (void)KSO_presentTooltipViewControllerWithText:(NSString *)text sourceView:(UIView *)sourceView sourceRect:(CGRect)sourceRect animated:(BOOL)animated completion:(dispatch_block_t)completion {
    KSOTooltipViewController *viewController = [[KSOTooltipViewController alloc] init];
    
    [viewController setText:text];
    [viewController setSourceView:sourceView];
    [viewController setSourceRect:sourceRect];
    
    [self presentViewController:viewController animated:animated completion:completion];
}
- (void)KSO_presentTooltipViewControllerWithText:(NSString *)text barButtonItem:(UIBarButtonItem *)barButtonItem animated:(BOOL)animated completion:(dispatch_block_t)completion {
    KSOTooltipViewController *viewController = [[KSOTooltipViewController alloc] init];
    
    [viewController setText:text];
    [viewController setBarButtonItem:barButtonItem];
    
    [self presentViewController:viewController animated:animated completion:completion];
}

- (void)KSO_presentTooltipViewControllerWithAttributedText:(NSAttributedString *)attributedText sourceView:(UIView *)sourceView sourceRect:(CGRect)sourceRect animated:(BOOL)animated completion:(dispatch_block_t)completion; {
    KSOTooltipViewController *viewController = [[KSOTooltipViewController alloc] init];
    
    [viewController setAttributedText:attributedText];
    [viewController setSourceView:sourceView];
    [viewController setSourceRect:sourceRect];
    
    [self presentViewController:viewController animated:animated completion:completion];
}
- (void)KSO_presentTooltipViewControllerWithAttributedText:(NSAttributedString *)attributedText barButtonItem:(UIBarButtonItem *)barButtonItem animated:(BOOL)animated completion:(dispatch_block_t)completion; {
    KSOTooltipViewController *viewController = [[KSOTooltipViewController alloc] init];
    
    [viewController setAttributedText:attributedText];
    [viewController setBarButtonItem:barButtonItem];
    
    [self presentViewController:viewController animated:animated completion:completion];
}

@end
