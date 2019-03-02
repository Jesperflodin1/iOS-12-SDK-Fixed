//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXMemoriesFeedViewControllerHelperDelegate-Protocol.h>
#import <PhotosUICore/PXMemoriesOnboardingViewControllerDelegate-Protocol.h>
#import <PhotosUICore/PXMemoriesUITileSourceDelegate-Protocol.h>
#import <PhotosUICore/PXReusableObjectPoolDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>
#import <PhotosUICore/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUICore/PXTilingControllerZoomAnimationCoordinatorDelegate-Protocol.h>
#import <PhotosUICore/PXUIViewControllerZoomTransitionEndPoint-Protocol.h>
#import <PhotosUICore/PXUserInterfaceFeatureViewController-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUICore/UIPopoverPresentationControllerDelegate-Protocol.h>
#import <PhotosUICore/UIViewControllerPreviewingDelegate-Protocol.h>

@class NSString, PXBasicUIViewTileAnimator, PXMemoriesFeedDataSourceManager, PXMemoriesFeedViewControllerHelper, PXMemoriesOnboardingUIViewController, PXMemoriesUITileSource, PXPhotoAnalysisStatusController, PXSectionedDataSource, PXTouchingUIGestureRecognizer, PXUIScrollViewController, PXUITapGestureRecognizer, UIBarButtonItem, UILongPressGestureRecognizer, UIScrollView, _UIContentUnavailableView;
@protocol UIViewControllerPreviewing;

@interface PXMemoriesFeedUIViewController : UIViewController <PXReusableObjectPoolDelegate, PXChangeObserver, UIGestureRecognizerDelegate, PXActionPerformerDelegate, PXScrollViewControllerObserver, PXUIViewControllerZoomTransitionEndPoint, PXTilingControllerZoomAnimationCoordinatorDelegate, PXSectionedDataSourceManagerObserver, UIViewControllerPreviewingDelegate, UIPopoverPresentationControllerDelegate, PXMemoriesFeedViewControllerHelperDelegate, PXMemoriesOnboardingViewControllerDelegate, PXMemoriesUITileSourceDelegate, PXUserInterfaceFeatureViewController, PXSettingsKeyObserver>
{
    _Bool _isInitialized;
    struct {
        _Bool navigationItem;
        _Bool contentUnavailablePlaceholder;
    } _needsUpdateFlags;
    _Bool _hasAppeared;
    PXUIScrollViewController *__scrollViewController;
    PXBasicUIViewTileAnimator *__tileAnimator;
    UIBarButtonItem *__refreshBarButtonItem;
    PXMemoriesFeedViewControllerHelper *__helper;
    unsigned long long __memoriesStyle;
    PXPhotoAnalysisStatusController *__graphStatusController;
    PXMemoriesOnboardingUIViewController *__onboardingViewController;
    _UIContentUnavailableView *__contentUnavailableView;
    PXMemoriesUITileSource *__tileSource;
    PXUITapGestureRecognizer *__tapRecognizer;
    UILongPressGestureRecognizer *__longPressRecognizer;
    PXTouchingUIGestureRecognizer *__touchRecognizer;
    id <UIViewControllerPreviewing> __previewingContext;
    NSString *_scrollTargetMemoryUUID;
}

+ (void)_setCurrentFeedViewController:(id)arg1;
@property(retain, nonatomic, setter=setScrollTargetMemoryUUID:) NSString *scrollTargetMemoryUUID; // @synthesize scrollTargetMemoryUUID=_scrollTargetMemoryUUID;
@property(retain, nonatomic, setter=_setPreviewingContext:) id <UIViewControllerPreviewing> _previewingContext; // @synthesize _previewingContext=__previewingContext;
@property(readonly, nonatomic) PXTouchingUIGestureRecognizer *_touchRecognizer; // @synthesize _touchRecognizer=__touchRecognizer;
@property(retain, nonatomic, setter=_setLongPressRecognizer:) UILongPressGestureRecognizer *_longPressRecognizer; // @synthesize _longPressRecognizer=__longPressRecognizer;
@property(readonly, nonatomic) PXUITapGestureRecognizer *_tapRecognizer; // @synthesize _tapRecognizer=__tapRecognizer;
@property(readonly, nonatomic) PXMemoriesUITileSource *_tileSource; // @synthesize _tileSource=__tileSource;
@property(retain, nonatomic, setter=_setContentUnavailableView:) _UIContentUnavailableView *_contentUnavailableView; // @synthesize _contentUnavailableView=__contentUnavailableView;
@property(retain, nonatomic, setter=_setOnboardingViewController:) PXMemoriesOnboardingUIViewController *_onboardingViewController; // @synthesize _onboardingViewController=__onboardingViewController;
@property(readonly, nonatomic) PXPhotoAnalysisStatusController *_graphStatusController; // @synthesize _graphStatusController=__graphStatusController;
@property(readonly, nonatomic) unsigned long long _memoriesStyle; // @synthesize _memoriesStyle=__memoriesStyle;
@property(readonly, nonatomic) PXMemoriesFeedViewControllerHelper *_helper; // @synthesize _helper=__helper;
@property(readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // @synthesize _tileAnimator=__tileAnimator;
@property(readonly, nonatomic) PXUIScrollViewController *_scrollViewController; // @synthesize _scrollViewController=__scrollViewController;
- (void).cxx_destruct;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)ppt_navigateToMemoryWithReference:(id)arg1 animated:(_Bool)arg2;
- (void)ppt_revealMemoryWithReference:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) PXSectionedDataSource *ppt_memoriesDataSource;
- (void)ppt_navigateToLatestMemoryAnimated:(_Bool)arg1;
@property(readonly, nonatomic) UIScrollView *ppt_scrollView;
- (_Bool)pu_handleSecondTabTap;
- (void)playMiroMovieWithMemoryUUID:(id)arg1;
@property(readonly, nonatomic) long long userInterfaceFeature;
- (id)memoriesTileSource:(id)arg1 memoryToPreheatForIndexPath:(struct PXSimpleIndexPath)arg2;
- (id)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(id)arg1;
- (_Bool)memoriesFeedViewControllerHelperFeedIsVisible:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)prepareForInteractiveTransition:(id)arg1;
- (id)zoomAnimationCoordinatorForZoomTransition:(id)arg1;
- (id)regionOfInterestForTransition:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (_Bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (void)memoriesOnboardingViewControllerDidTapContinueButton:(id)arg1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerWillLayoutSubviews:(id)arg1;
- (void)_updateContentUnavailablePlaceholderIfNeeded;
- (void)_invalidateContentUnavailablePlaceholder;
- (void)_updateNavigationItemIfNeeded;
- (void)_invalidateNavigationItem;
- (void)_handleSpecChange;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_updateIfNeeded;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)prepareForPopoverPresentation:(id)arg1;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (struct PXSimpleIndexPath)_memoryIndexPathForViewController:(id)arg1;
- (void)_startRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)_refreshBarButtonItemAction:(id)arg1;
- (id)_sourceViewForMemoryActionsController;
- (void)_presentActionsForMemoryReference:(id)arg1;
@property(readonly, nonatomic) UIBarButtonItem *_refreshBarButtonItem; // @synthesize _refreshBarButtonItem=__refreshBarButtonItem;
- (void)_handleTouch:(id)arg1;
- (void)_handleScrollViewLongPress:(id)arg1;
- (id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg1;
- (id)_photosDetailsContextForMemoryObjectReference:(id)arg1;
- (void)_navigateToMemoryAtSectionObjectReference:(id)arg1;
- (void)_handleScrollViewTap:(id)arg1;
- (void)revealMostRecentMemoryAnimated:(_Bool)arg1;
- (id)showDetailsForMemoryWithLocalIdentifier:(id)arg1;
- (id)_showMemoryDetailsForContext:(id)arg1 animated:(_Bool)arg2;
- (void)_updateBarAppearance;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_preloadFontSpecs;
- (void)_updatePreviewing;
- (void)_updateLongPressGestureRecognizer;
- (void)_updateScrollViewControllerContentInset;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
@property(readonly, nonatomic) PXMemoriesFeedDataSourceManager *dataSourceManager;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)_suppressionContexts;
- (_Bool)_appAllowsSupressionOfAlerts;
- (void)dealloc;
- (id)init;
- (id)initWithMemoriesStyle:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool keepsSourceRegionOfInterestContent;
@property(readonly) Class superclass;

@end
