//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <FuseUI/SKUIDocumentViewController-Protocol.h>
#import <FuseUI/SKUINavigationBarDisplayConfiguring-Protocol.h>

@class NSString, UIViewController;
@protocol MusicClientContextConsuming><SKUINavigationBarDisplayConfiguring;

@interface MusicProductTemplateDocumentViewController : SKUIViewController <SKUIDocumentViewController, SKUINavigationBarDisplayConfiguring>
{
    UIViewController<MusicClientContextConsuming><SKUINavigationBarDisplayConfiguring> *_productViewController;
}

- (void).cxx_destruct;
- (id)navigationBarTitleTextTintColor;
- (id)navigationBarTintColor;
- (long long)navigationBarTintAdjustmentMode;
- (_Bool)prefersNavigationBarBackgroundViewHidden;
- (_Bool)managesNavigationBarContents;
- (void)documentDidUpdate:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)previewMenuItems;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)dealloc;
- (id)initWithTemplateViewElement:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
