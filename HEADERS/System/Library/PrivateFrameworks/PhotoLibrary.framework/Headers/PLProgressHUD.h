//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView, UILabel, _UIBackdropView;

@interface PLProgressHUD : UIView
{
    _UIBackdropView *_backdropView;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_label;
    UIImageView *_checkmarkView;
    _Bool _isShowing;
}

- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)done;
- (void)hide;
- (void)showInView:(id)arg1;
- (void)setText:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
