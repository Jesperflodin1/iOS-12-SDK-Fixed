//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIButton, UIImage, UIImageView, UILabel, _UIBackdropView;

@interface PXEducationalTipViewController : UIViewController
{
    _UIBackdropView *_backdropView;
    UIImageView *_imageView;
    UILabel *_messageLabel;
    UIButton *_dismissButton;
    UIImage *_image;
    NSString *_message;
    NSString *_dismissButtonTitle;
    CDUnknownBlockType _dismissHandler;
}

@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
@property(copy, nonatomic) NSString *dismissButtonTitle; // @synthesize dismissButtonTitle=_dismissButtonTitle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)_handleDismissButton:(id)arg1;
- (void)_invalidateContent;
- (void)setTitle:(id)arg1;
- (void)viewDidLoad;

@end
