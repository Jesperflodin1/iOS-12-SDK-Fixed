/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKWorkoutBuilderClientInterface <NSObject>
@required
-(void)clientRemote_didRecoverSeriesBuilders:(id)arg1;
-(void)clientRemote_finishedWorkout:(id)arg1;
-(void)clientRemote_didFailWithError:(id)arg1;
-(void)clientRemote_synchronizeWithCompletion:(/*^block*/id)arg1;
-(void)clientRemote_stateDidChange:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
-(void)clientRemote_didUpdateMetadata:(id)arg1;
-(void)clientRemote_didChangeElapsedTimeBasisWithStartDate:(id)arg1 endDate:(id)arg2;
-(void)clientRemote_didUpdateEvents:(id)arg1;
-(void)clientRemote_didUpdateStatistics:(id)arg1;

@end
