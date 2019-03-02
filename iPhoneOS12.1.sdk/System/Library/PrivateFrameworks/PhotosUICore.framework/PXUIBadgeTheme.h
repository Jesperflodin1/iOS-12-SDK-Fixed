//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAFilter, UIColor, UIFont;

@interface PXUIBadgeTheme : NSObject
{
    _Bool _usesBackground;
    _Bool _shouldCompositeBackground;
}

@property(nonatomic) _Bool shouldCompositeBackground; // @synthesize shouldCompositeBackground=_shouldCompositeBackground;
@property(nonatomic) _Bool usesBackground; // @synthesize usesBackground=_usesBackground;
@property(readonly, nonatomic) double backgroundAlpha;
@property(readonly, nonatomic) CAFilter *backgroundCompositeFilter;
@property(readonly, nonatomic) double backgroundCornerRadius;
@property(readonly, nonatomic) UIColor *backgroundColor;
- (id)backgroundViewIdentifier;
@property(readonly, nonatomic) Class backgroundViewClass;
- (id)createBackgroundView;
@property(readonly, nonatomic) CAFilter *labelCompositingFilter;
@property(readonly, nonatomic) UIColor *labelTextColor;
@property(readonly, nonatomic) double labelAlpha;
@property(readonly, nonatomic) UIFont *labelFont;
@property(readonly, nonatomic) CAFilter *imageCompositingFilter;
@property(readonly, nonatomic) UIColor *imageTintColor;
@property(readonly, nonatomic) double imageAlpha;

@end
