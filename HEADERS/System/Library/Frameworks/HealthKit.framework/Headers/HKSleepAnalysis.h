/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface HKSleepAnalysis : NSObject {

	BOOL _containsAsleepSamples;
	NSArray* _sleepDays;
	long long _consistencyCount;
	double _averageEfficiency;
	double _averageTimeInBed;
	double _averageTimeAsleep;
	long long _averageNumberOfInterruptions;

}

@property (nonatomic,copy,readonly) NSArray * sleepDays;                            //@synthesize sleepDays=_sleepDays - In the implementation block
@property (nonatomic,readonly) BOOL containsAsleepSamples;                          //@synthesize containsAsleepSamples=_containsAsleepSamples - In the implementation block
@property (nonatomic,readonly) long long consistencyCount;                          //@synthesize consistencyCount=_consistencyCount - In the implementation block
@property (nonatomic,readonly) double averageEfficiency;                            //@synthesize averageEfficiency=_averageEfficiency - In the implementation block
@property (nonatomic,readonly) double averageTimeInBed;                             //@synthesize averageTimeInBed=_averageTimeInBed - In the implementation block
@property (nonatomic,readonly) double averageTimeAsleep;                            //@synthesize averageTimeAsleep=_averageTimeAsleep - In the implementation block
@property (nonatomic,readonly) long long averageNumberOfInterruptions;              //@synthesize averageNumberOfInterruptions=_averageNumberOfInterruptions - In the implementation block
+(id)emptyAnalysis;
-(id)initWithSleepDays:(id)arg1 containsAsleepSamples:(BOOL)arg2 consistencyCount:(long long)arg3 averageEfficiency:(double)arg4 averageTimeInBed:(double)arg5 averageTimeAlseep:(double)arg6 averageNumberOfInterruptions:(long long)arg7 ;
-(NSArray *)sleepDays;
-(BOOL)containsAsleepSamples;
-(long long)consistencyCount;
-(double)averageEfficiency;
-(double)averageTimeInBed;
-(double)averageTimeAsleep;
-(long long)averageNumberOfInterruptions;
@end

