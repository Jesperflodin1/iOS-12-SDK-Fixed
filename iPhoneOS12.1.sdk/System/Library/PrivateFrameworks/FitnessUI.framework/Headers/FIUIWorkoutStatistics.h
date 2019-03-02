//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKQuantity, NSArray, NSDate;

@interface FIUIWorkoutStatistics : NSObject
{
    NSArray *_workouts;
    long long _numberOfWalkRunWorkouts;
    long long _numberOfCyclingWorkouts;
    _Bool _isAllOutdoorCycling;
    _Bool _isAllRunning;
    double _totalWorkoutDuration;
    double _averageWorkoutDuration;
    HKQuantity *_totalActiveEnergyBurn;
    HKQuantity *_averageActiveEnergyBurn;
    HKQuantity *_totalWalkRunDistance;
    HKQuantity *_averageWalkRunDistance;
    double _totalWalkRunDuration;
    HKQuantity *_totalCyclingDistance;
    HKQuantity *_averageCyclingDistance;
    double _totalCyclingDuration;
    NSDate *_startOfMonth;
}

+ (id)_monthFormatter;
@property(readonly, nonatomic) NSDate *startOfMonth; // @synthesize startOfMonth=_startOfMonth;
@property(readonly, nonatomic) double totalCyclingDuration; // @synthesize totalCyclingDuration=_totalCyclingDuration;
@property(readonly, nonatomic) HKQuantity *averageCyclingDistance; // @synthesize averageCyclingDistance=_averageCyclingDistance;
@property(readonly, nonatomic) HKQuantity *totalCyclingDistance; // @synthesize totalCyclingDistance=_totalCyclingDistance;
@property(readonly, nonatomic) double totalWalkRunDuration; // @synthesize totalWalkRunDuration=_totalWalkRunDuration;
@property(readonly, nonatomic) HKQuantity *averageWalkRunDistance; // @synthesize averageWalkRunDistance=_averageWalkRunDistance;
@property(readonly, nonatomic) HKQuantity *totalWalkRunDistance; // @synthesize totalWalkRunDistance=_totalWalkRunDistance;
@property(readonly, nonatomic) HKQuantity *averageActiveEnergyBurn; // @synthesize averageActiveEnergyBurn=_averageActiveEnergyBurn;
@property(readonly, nonatomic) HKQuantity *totalActiveEnergyBurn; // @synthesize totalActiveEnergyBurn=_totalActiveEnergyBurn;
@property(readonly, nonatomic) double averageWorkoutDuration; // @synthesize averageWorkoutDuration=_averageWorkoutDuration;
@property(readonly, nonatomic) double totalWorkoutDuration; // @synthesize totalWorkoutDuration=_totalWorkoutDuration;
- (void).cxx_destruct;
- (void)_calculateAverages;
- (void)_calculateStats;
@property(readonly, nonatomic) unsigned long long workoutCount;
- (id)init;
- (id)initWithWorkouts:(id)arg1;
- (id)formattedWorkoutCount;
- (id)simpleWorkoutCount;
- (id)_formattedCyclingDistance:(id)arg1 formattingManager:(id)arg2;
- (id)formattedAverageCyclingDistanceWithFormattingManager:(id)arg1;
- (id)formattedTotalCyclingDistanceWithFormattingManager:(id)arg1;
- (id)_formattedWalkRunDistance:(id)arg1 formattingManager:(id)arg2;
- (id)formattedAverageWalkRunDistanceWithFormattingManager:(id)arg1;
- (id)formattedTotalWalkRunDistanceWithFormattingManager:(id)arg1;
- (id)_formattedEnergyBurn:(id)arg1 formattingManager:(id)arg2;
- (id)formattedAverageActiveEnergyBurnWithFormattingManager:(id)arg1;
- (id)formattedTotalActiveEnergyBurnWithFormattingManager:(id)arg1;
- (id)_formattedDuration:(double)arg1 formattingManager:(id)arg2;
- (id)formattedAverageWorkoutDurationWithFormattingManager:(id)arg1;
- (id)formattedTotalWorkoutDurationWithFormattingManager:(id)arg1;
- (id)formattedSpeedWithFormattingManager:(id)arg1;
- (id)formattedPaceWithFormattingManager:(id)arg1;
- (id)formattedCyclingDistanceWithFormattingManager:(id)arg1;
- (id)formattedWalkRunDistanceWithFormattingManager:(id)arg1;
- (id)formattedActiveEnergyBurnWithFormattingManager:(id)arg1;
- (id)formattedWorkoutDurationWithFormattingManager:(id)arg1;
- (id)formattedMonth;

@end
