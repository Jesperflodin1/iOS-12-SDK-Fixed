//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (MusicLayoutAdditions)
- (void)_music_updateInheritedLayoutInsets;
- (void)_music_layoutInsets_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_music_layoutInsets_didMoveToSuperview;
- (void)music_inheritedLayoutInsetsDidChange;
@property(nonatomic, setter=music_setLayoutInsets:) struct UIEdgeInsets music_layoutInsets;
@property(readonly, nonatomic) struct UIEdgeInsets music_inheritedLayoutInsets;
@end

