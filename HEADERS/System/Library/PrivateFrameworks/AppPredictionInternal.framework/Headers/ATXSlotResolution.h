/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class _ATXDataStore;

@interface ATXSlotResolution : NSObject {

	_ATXDataStore* _dataStore;

}
+(BOOL)isNotLaunchedWithinShortTimeSpan:(id)arg1 ;
+(double)exponentialDecay:(double)arg1 withHalflife:(double)arg2 ;
+(id)yearMonthDayComponentsForDate:(id)arg1 ;
+(void)setSlotResolutionPredictionItemForTopUpcomingMediaActionContainer:(id)arg1 appActionPredictionItem:(const ATXPredictionItem*)arg2 appActionLogProbability:(double)arg3 ;
+(void)setSlotLogProbabilityForCandidateActionPredictions:(id)arg1 ;
+(id)sharedInstance;
-(id)initWithDataStore:(id)arg1 ;
-(id)fastStatisticsOnSlotsForBundleId:(id)arg1 actionType:(id)arg2 currentDate:(id)arg3 previousLocationUUID:(id)arg4 currentLocationUUID:(id)arg5 currentMotionType:(long long)arg6 ;
-(id)statisticsOnSlotsForBundleId:(id)arg1 actionType:(id)arg2 currentDate:(id)arg3 previousLocationUUID:(id)arg4 currentLocationUUID:(id)arg5 currentMotionType:(long long)arg6 ;
-(id)updateStatisticsWithFeedbackForBundleId:(id)arg1 actionType:(id)arg2 statistics:(id)arg3 ;
-(id)updateStatisticsWithHigherLevelFeaturesForStatistics:(id)arg1 ;
-(id)statisticsForActionKey:(id)arg1 ;
-(id)statisticsForActionKey:(id)arg1 currentDate:(id)arg2 previousLocationUUID:(id)arg3 currentLocationUUID:(id)arg4 currentMotionType:(long long)arg5 ;
-(id)actionPredictionsForStatistics:(id)arg1 ;
-(id)actionPredictionsForStatistics:(id)arg1 appActionPredictionItem:(const ATXPredictionItem*)arg2 appActionLogProbability:(double)arg3 scoreLogger:(id)arg4 ;
-(id)init;
@end

