//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/PDSlideBase.h>

@class OADColorMap, OADThemeOverrides;

__attribute__((visibility("hidden")))
@interface PDSlideChild : PDSlideBase
{
    _Bool mShowMasterPlaceholderAnimations;
    _Bool mShowMasterShapes;
    OADThemeOverrides *mThemeOverrides;
    OADColorMap *mColorMapOverride;
}

- (id)description;
- (id)drawingTheme;
- (void)doneWithContent;
- (id)defaultTextListStyle;
- (id)styleMatrix;
- (id)colorMap;
- (id)fontScheme;
- (id)colorScheme;
- (void)setColorMapOverride:(id)arg1;
- (id)colorMapOverride;
- (id)themeOverrides;
- (void)setShowMasterShapes:(_Bool)arg1;
- (_Bool)showMasterShapes;
- (void)setShowMasterPlaceholderAnimations:(_Bool)arg1;
- (_Bool)showMasterPlaceholderAnimations;
- (void)dealloc;
- (id)init;

@end

