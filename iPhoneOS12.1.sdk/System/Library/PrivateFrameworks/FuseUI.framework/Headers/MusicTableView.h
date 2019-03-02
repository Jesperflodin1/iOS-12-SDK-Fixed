//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicBasicTableView.h>

@class NSArray;
@protocol MusicTableViewDelegate;

@interface MusicTableView : MusicBasicTableView
{
    long long _highlightedSectionHeaderViewIndex;
    _Bool _isUpdatingSeparatorInsets;
    long long _selectedSectionHeaderViewIndex;
    _Bool _trailingSeparatorInsetFollowsLayoutInsets;
    _Bool _shouldTreatContentOffsetChangesAsDeltas;
}

@property(nonatomic) _Bool shouldTreatContentOffsetChangesAsDeltas; // @synthesize shouldTreatContentOffsetChangesAsDeltas=_shouldTreatContentOffsetChangesAsDeltas;
@property(nonatomic) _Bool trailingSeparatorInsetFollowsLayoutInsets; // @synthesize trailingSeparatorInsetFollowsLayoutInsets=_trailingSeparatorInsetFollowsLayoutInsets;
- (void)_updateChildSeparatorInsets;
- (void)_updateSeparatorInset;
- (long long)_sectionForSelectableHeaderView:(id)arg1;
- (void)_clearHeaderViewSelectionAnimated:(_Bool)arg1;
- (void)_clearHeaderViewHighlightAnimated:(_Bool)arg1;
- (void)_touchesMoved:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3;
- (void)_touchesEnded:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3;
- (void)_touchesCancelled:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3;
- (void)_touchesBegan:(id)arg1 withEvent:(id)arg2 onSelectableHeaderFooterView:(id)arg3;
- (void)selectHeaderForSection:(long long)arg1 animated:(_Bool)arg2;
- (void)deselectHeaderForSection:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, copy, nonatomic) NSArray *visibleHeaderFooterViews;
@property(readonly, nonatomic) long long indexForSelectedSectionHeader;
- (_Bool)_shouldDrawSeparatorAtBottomOfSection:(long long)arg1;
- (void)_rebuildGeometry;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(nonatomic) id <MusicTableViewDelegate> delegate; // @dynamic delegate;

@end
