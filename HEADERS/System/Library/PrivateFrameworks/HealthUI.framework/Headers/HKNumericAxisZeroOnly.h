//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKNumericAxis.h>

@class NSString;

@interface HKNumericAxisZeroOnly : HKNumericAxis
{
    NSString *_zeroLabel;
}

@property(readonly, nonatomic) NSString *zeroLabel; // @synthesize zeroLabel=_zeroLabel;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)initWithZeroLabel:(id)arg1;

@end
