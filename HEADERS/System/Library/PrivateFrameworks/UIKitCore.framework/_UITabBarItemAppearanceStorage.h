//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, UIColor;

__attribute__((visibility("hidden")))
@interface _UITabBarItemAppearanceStorage : _UIBarItemAppearanceStorage
{
    NSMutableDictionary *_badgeTextAttributesForState;
    UIColor *_badgeColor;
    struct UIOffset _titleOffset;
}

@property(copy, nonatomic) UIColor *badgeColor; // @synthesize badgeColor=_badgeColor;
@property(nonatomic) struct UIOffset titleOffset; // @synthesize titleOffset=_titleOffset;
- (void).cxx_destruct;
- (void)enumerateBadgeTextAttributesWithBlock:(CDUnknownBlockType)arg1;
- (id)badgeTextAttributesForState:(unsigned long long)arg1;
- (void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;

@end
