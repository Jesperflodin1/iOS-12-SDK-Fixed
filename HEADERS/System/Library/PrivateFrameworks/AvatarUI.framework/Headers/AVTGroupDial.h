//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AvatarUI/UICollectionViewDataSource-Protocol.h>
#import <AvatarUI/UICollectionViewDelegate-Protocol.h>
#import <AvatarUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class AVTCenteringCollectionViewDelegate, AVTGroupDialMaskingView, AVTUIEnvironment, NSArray, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol AVTGroupDialDelegate;

@interface AVTGroupDial : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    _Bool _isMoving;
    _Bool _hasFinalizedSelection;
    id <AVTGroupDialDelegate> _delegate;
    AVTUIEnvironment *_environment;
    NSArray *_groupTitles;
    NSArray *_cachedGroupTitleSizes;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    AVTCenteringCollectionViewDelegate *_centeringCollectionViewDelegate;
    unsigned long long _currentScrollDirection;
    long long _currentSelectedItemIndex;
    AVTGroupDialMaskingView *_maskingView;
    NSIndexPath *_shimmeringItemIndexPath;
}

+ (_Bool)shouldScrollGivenTitleSizes:(id)arg1 fittingWidth:(double)arg2;
+ (double)estimatedContentWidthForTitleSizes:(id)arg1;
@property(nonatomic) NSIndexPath *shimmeringItemIndexPath; // @synthesize shimmeringItemIndexPath=_shimmeringItemIndexPath;
@property(retain, nonatomic) AVTGroupDialMaskingView *maskingView; // @synthesize maskingView=_maskingView;
@property(nonatomic) _Bool hasFinalizedSelection; // @synthesize hasFinalizedSelection=_hasFinalizedSelection;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(nonatomic) long long currentSelectedItemIndex; // @synthesize currentSelectedItemIndex=_currentSelectedItemIndex;
@property(nonatomic) unsigned long long currentScrollDirection; // @synthesize currentScrollDirection=_currentScrollDirection;
@property(readonly, nonatomic) AVTCenteringCollectionViewDelegate *centeringCollectionViewDelegate; // @synthesize centeringCollectionViewDelegate=_centeringCollectionViewDelegate;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) NSArray *cachedGroupTitleSizes; // @synthesize cachedGroupTitleSizes=_cachedGroupTitleSizes;
@property(readonly, nonatomic) NSArray *groupTitles; // @synthesize groupTitles=_groupTitles;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic) __weak id <AVTGroupDialDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateForEndingScroll;
- (void)updateSelectedState:(_Bool)arg1 forItemAtIndexPath:(id)arg2 animated:(_Bool)arg3;
- (void)selectItemAtIndex:(long long)arg1 updateScrollPosition:(_Bool)arg2 animated:(_Bool)arg3;
- (struct CGSize)cellSizeForItemAtIndex:(long long)arg1;
- (void)reloadData;
- (void)stopDiscoverability;
- (void)startDiscoverability;
@property(nonatomic) long long selectedGroupIndex;
- (void)setSelectedGroupIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setContentPadding:(double)arg1;
- (void)setupDial;
- (void)cacheTitleSizes;
- (void)setupMasking;
- (id)initWithGroupTitles:(id)arg1 environment:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
