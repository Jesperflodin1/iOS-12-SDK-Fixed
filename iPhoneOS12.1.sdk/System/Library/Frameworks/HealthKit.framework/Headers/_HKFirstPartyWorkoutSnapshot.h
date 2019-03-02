/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:28 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray;

@interface _HKFirstPartyWorkoutSnapshot : NSObject <NSSecureCoding> {

	long long _state;
	unsigned long long _activityType;
	NSDate* _startDate;
	NSArray* _workoutEvents;

}

@property (nonatomic,readonly) long long state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned long long activityType;              //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSArray * workoutEvents;                      //@synthesize workoutEvents=_workoutEvents - In the implementation block
+(id)firstPartyWorkoutSnapshotWithCurrentWorkoutSnapshot:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_initWithState:(long long)arg1 activityType:(unsigned long long)arg2 startDate:(id)arg3 workoutEvents:(id)arg4 ;
-(NSDate *)startDate;
-(NSArray *)workoutEvents;
-(double)durationForDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(long long)state;
-(unsigned long long)activityType;
@end
