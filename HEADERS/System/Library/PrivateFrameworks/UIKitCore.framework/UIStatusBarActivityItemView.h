//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface UIStatusBarActivityItemView : UIStatusBarItemView
{
    UIActivityIndicatorView *_activityIndicator;
    UIActivityIndicatorView *_accessibilityHUDIndicator;
    _Bool _slowActivity;
    _Bool _syncActivity;
}

- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (double)shadowPadding;
- (double)updateContentsAndWidth;
- (void)setVisible:(_Bool)arg1;
- (void)_stopAnimating;
- (void)_startAnimating;
- (long long)_activityIndicatorStyle;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end
