//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NSArray, NTKColoringLabel, UIColor, UILabel;

@interface NTKRichComplicationRectangularDailyGraphView : NTKRichComplicationRectangularBaseView
{
    NTKColoringLabel *_titleLabel;
    UILabel *_dailyHighLabel;
    UILabel *_dailyLowLabel;
    UIColor *_noDataTextColor;
    UIColor *_graphLabelAndGridColor;
    NSArray *_timeMarkerLabels;
    struct CGRect _cachedBounds;
    struct CGRect _graphRect;
}

+ (struct CGSize)graphSize;
+ (id)dailyFormattedNoData;
@property(readonly, nonatomic) NSArray *timeMarkerLabels; // @synthesize timeMarkerLabels=_timeMarkerLabels;
@property(readonly, nonatomic) UIColor *graphLabelAndGridColor; // @synthesize graphLabelAndGridColor=_graphLabelAndGridColor;
@property(readonly, nonatomic) UIColor *noDataTextColor; // @synthesize noDataTextColor=_noDataTextColor;
@property(nonatomic) struct CGRect graphRect; // @synthesize graphRect=_graphRect;
@property(nonatomic) struct CGRect cachedBounds; // @synthesize cachedBounds=_cachedBounds;
@property(readonly, nonatomic) UILabel *dailyLowLabel; // @synthesize dailyLowLabel=_dailyLowLabel;
@property(readonly, nonatomic) UILabel *dailyHighLabel; // @synthesize dailyHighLabel=_dailyHighLabel;
@property(readonly, nonatomic) NTKColoringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
@property(readonly, nonatomic) double timeMarkerPadding;
- (struct CGRect)drawableGraphRect;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_updateTimeMarkerLabelsForDates:(id)arg1 timezone:(id)arg2;
- (double)_lineStrokeWidthGivenRect:(struct CGRect)arg1;
- (void)_drawVerticalHourLines:(struct CGContext *)arg1 rect:(struct CGRect)arg2 bottomLabelPadding:(double)arg3;
- (id)_datesForGraphInTimezone:(id)arg1;
- (double)_calculateGraphXBasedOnRect:(struct CGRect)arg1 constants:(CDStruct_05cddbcc)arg2;
- (void)_addSubviews;
- (void)_addConstraints;
- (void)resetToNoDataState:(id)arg1;
- (void)loadWithMetadata:(id)arg1;
- (void)drawGraph:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;

@end

