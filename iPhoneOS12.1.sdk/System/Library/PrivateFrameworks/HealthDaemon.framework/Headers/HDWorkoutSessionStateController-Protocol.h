//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSDate, NSError, NSString, _HKWorkoutEvent;
@protocol HDWorkoutDataAccumulator;

@protocol HDWorkoutSessionStateController
@property(readonly, nonatomic) id <HDWorkoutDataAccumulator> workoutDataAccumulator;
- (_Bool)storeSessionControllerState:(NSData *)arg1 forRecoveryIdentifier:(NSString *)arg2 error:(id *)arg3;
- (void)generateError:(NSError *)arg1;
- (void)generateEvent:(_HKWorkoutEvent *)arg1;
- (void)finishAggregationWithDate:(NSDate *)arg1;
- (void)finish;
- (void)endHeartRateRecovery;
- (void)autoResumeWithDate:(NSDate *)arg1;
- (void)autoPauseWithDate:(NSDate *)arg1;
- (_Bool)resumeWithError:(id *)arg1;
- (_Bool)pauseWithError:(id *)arg1;
- (_Bool)endWithError:(id *)arg1;
- (_Bool)stopActivityWithDate:(NSDate *)arg1 error:(id *)arg2;
- (_Bool)startActivityWithDate:(NSDate *)arg1 error:(id *)arg2;
- (_Bool)prepareWithError:(id *)arg1;
@end
