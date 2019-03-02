/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:46 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol UIPageControllerDelegate;
@class NSMutableArray, UIView, UIScrollView, UIPageControl, UIViewController;

@interface UIPageController : UIViewController {

	NSMutableArray* _viewControllers;
	UIView* _wrapperViews[3];
	int _notificationState[3];
	UIScrollView* _scrollView;
	UIPageControl* _pageControl;
	id<UIPageControllerDelegate> _delegate;
	int _pageSpacing;
	long long _visibleIndex;
	long long _pageCount;
	struct {
		unsigned delegateViewControllerAtIndex : 1;
		unsigned delegateWillBeginPaging : 1;
		unsigned delegateDidEndPaging : 1;
		unsigned displaysPageControl : 1;
		unsigned wraps : 1;
	}  _pageControllerFlags;

}

@property (assign,nonatomic) id<UIPageControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double pageSpacing; 
@property (assign,nonatomic) BOOL displaysPageControl; 
@property (nonatomic,retain,readonly) UIViewController * visibleViewController; 
@property (assign,nonatomic) long long pageCount; 
@property (assign,nonatomic) long long visibleIndex; 
@property (assign,nonatomic) BOOL wraps; 
-(void)dealloc;
-(void)setDelegate:(id<UIPageControllerDelegate>)arg1 ;
-(id<UIPageControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(BOOL)_isSupportedInterfaceOrientation:(long long)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_getRotationContentSettings:(SCD_Struct_UI27*)arg1 ;
-(id)_scrollView;
-(BOOL)_allowsAutorotation;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(BOOL)_shouldUseOnePartRotation;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 ;
-(void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(UIViewController *)visibleViewController;
-(void)viewDidUnload;
-(void)_scrollView:(id)arg1 boundsDidChangeToSize:(CGSize)arg2 ;
-(void)_scrollViewDidScroll:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_scrollViewWillBeginPaging;
-(void)_scrollViewDidEndPaging;
-(long long)visibleIndex;
-(long long)pageCount;
-(CGRect)_scrollViewFrame;
-(void)_createPageControl;
-(BOOL)_isViewControllerBeingUnloaded:(id)arg1 atIndex:(long long)arg2 ;
-(void)_adjustScrollViewContentInsets;
-(void)_replaceViewControllerAtIndex:(long long)arg1 withViewController:(id)arg2 ;
-(id)_visibleViewController;
-(void)_setPreviousViewController:(id)arg1 ;
-(void)_setVisibleViewController:(id)arg1 ;
-(void)_notifyVisibleViewController:(int)arg1 animated:(BOOL)arg2 ;
-(void)_setNextViewController:(id)arg1 ;
-(id)_loadPreviousViewController;
-(id)_loadVisibleViewControllerAndNotify:(BOOL)arg1 ;
-(id)_loadNextViewController;
-(id)_previousViewController;
-(id)_nextViewController;
-(void)_notifyViewController:(id)arg1 ofState:(int)arg2 previousState:(int)arg3 animated:(BOOL)arg4 ;
-(int)_previousViewControllerNotificationState;
-(int)_visibleViewControllerNotificationState;
-(int)_nextViewControllerNotificationState;
-(void)_notifyPreviousViewController:(int)arg1 animated:(BOOL)arg2 ;
-(void)_notifyNextViewController:(int)arg1 animated:(BOOL)arg2 ;
-(BOOL)_hasPreviousViewController;
-(BOOL)_hasNextViewController;
-(void)_setNextViewControllerNotificationState:(int)arg1 ;
-(void)_setVisibleViewControllerNotificationState:(int)arg1 ;
-(void)_setPreviousViewControllerNotificationState:(int)arg1 ;
-(void)setVisibleIndex:(long long)arg1 preservingLoadedViewControllers:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setVisibleIndex:(long long)arg1 ;
-(void)reloadViewControllerAtIndex:(long long)arg1 ;
-(BOOL)_needToLoadPrevious;
-(BOOL)_needToLoadNext;
-(void)setVisibleIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_pageChanged:(id)arg1 ;
-(BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(long long)arg1 ;
-(void)setPageSpacing:(double)arg1 ;
-(double)pageSpacing;
-(BOOL)_needToLoadVisible;
-(BOOL)_hasVisibleViewController;
-(void)setPageCount:(long long)arg1 ;
-(BOOL)wraps;
-(void)setWraps:(BOOL)arg1 ;
-(BOOL)displaysPageControl;
-(void)setDisplaysPageControl:(BOOL)arg1 ;
-(long long)indexOfViewController:(id)arg1 ;
-(id)_pageControllerScrollView;
@end
