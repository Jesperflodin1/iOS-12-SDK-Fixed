//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarCellularItem.h>

@class _UIStatusBarDualCellularSignalView, _UIStatusBarMultilineStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarCellularCondensedItem : _UIStatusBarCellularItem
{
    _UIStatusBarDualCellularSignalView *_dualSignalView;
    _UIStatusBarMultilineStringView *_dualNameView;
}

+ (id)dualNameDisplayIdentifier;
+ (id)dualSignalStrengthDisplayIdentifier;
@property(retain, nonatomic) _UIStatusBarMultilineStringView *dualNameView; // @synthesize dualNameView=_dualNameView;
@property(retain, nonatomic) _UIStatusBarDualCellularSignalView *dualSignalView; // @synthesize dualSignalView=_dualSignalView;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)arg1;
- (id)entryForDisplayItemWithIdentifier:(id)arg1;
- (id)_singleCellularEntryMatching:(CDUnknownBlockType)arg1;
- (id)_fontForEntry:(id)arg1 styleAttributes:(id)arg2 baselineOffset:(double *)arg3;
- (void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)dependentEntryKeys;

@end
