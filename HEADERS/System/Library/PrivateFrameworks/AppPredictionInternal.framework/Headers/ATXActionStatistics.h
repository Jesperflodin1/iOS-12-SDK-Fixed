/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ATXActionStatistics : NSObject {

	NSMutableDictionary* _statisticsForParameters;
	double _totalLaunches;
	double _totalTimeOfDayCount;
	double _totalCoarseTimeOfDayCount;
	double _totalDayOfWeekCount;
	double _totalLocationCount;
	double _totalMotionTypeCount;
	double _totalPrevLocationCount;
	double _totalTimeAndLocationCount;
	double _totalTimeAndDayCount;
	double _totalDayAndLocationCount;
	double _totalTimeAndDayAndLocationCount;
	double _totalPrevLocationAndMotionTypeCount;
	double _totalPrevLocationAndLocationCount;
	double _totalTimeAndPrevLocationCount;
	double _totalDayAndPrevLocationCount;
	double _totalConfirms;
	double _totalRejects;

}
-(void)updateActionStatisticsForSlotResolutionStatistics:(id)arg1 candidateActionPredictions:(id)arg2 ;
-(id)init;
@end
