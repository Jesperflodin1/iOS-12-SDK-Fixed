//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSSStyle.h>

#import <TSReading/TSWPColumnMetrics-Protocol.h>

@class TSWPPadding;

@interface TSWPColumnStyle : TSSStyle <TSWPColumnMetrics>
{
}

+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)propertiesAllowingNSNull;
+ (id)properties;
@property(readonly, nonatomic) _Bool columnsAreLeftToRight;
@property(readonly, nonatomic) _Bool shrinkTextToFit;
@property(readonly, nonatomic) _Bool alwaysStartsNewTarget;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) unsigned long long columnCount;
- (_Bool)equalWidth;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
@property(readonly, nonatomic) struct CGSize adjustedInsets;

// Remaining properties
@property(readonly, nonatomic) double textScaleFactor;

@end
