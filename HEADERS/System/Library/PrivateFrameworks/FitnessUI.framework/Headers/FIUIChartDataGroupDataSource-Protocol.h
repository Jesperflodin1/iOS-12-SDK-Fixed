//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FitnessUI/NSObject-Protocol.h>

@class FIUIChartDataGroup, NSArray;
@protocol FIUIChartPoint;

@protocol FIUIChartDataGroupDataSource <NSObject>
- (id <FIUIChartPoint>)dataGroup:(FIUIChartDataGroup *)arg1 pointForSetAtIndex:(unsigned long long)arg2 pointIndex:(unsigned long long)arg3;
- (unsigned long long)dataGroup:(FIUIChartDataGroup *)arg1 numberOfPointsInSetAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfDataSetsInGroup:(FIUIChartDataGroup *)arg1;

@optional
- (NSArray *)dataGroup:(FIUIChartDataGroup *)arg1 labelsForSetAtIndex:(unsigned long long)arg2;
- (NSArray *)dataGroup:(FIUIChartDataGroup *)arg1 dataPointsForSetAtIndex:(unsigned long long)arg2;
@end
