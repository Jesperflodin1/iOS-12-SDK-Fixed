/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:35:39 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIScrollView, SKUIProductPageHeaderViewController;


@protocol SKUIProductPageChildViewController <NSObject>
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController; 
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewControllerDelegate> delegate; 
@required
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<SKUIProductPageChildViewControllerDelegate>)delegate;
-(UIScrollView *)scrollView;

@end
