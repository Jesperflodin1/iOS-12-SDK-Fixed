/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:25 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTimebaseObserver.h>

@interface AVPeriodicTimebaseObserver : AVTimebaseObserver {

	SCD_Struct_AV5 _intervalRequested;
	SCD_Struct_AV5 _lastIntervalUsed;
	SCD_Struct_AV5 _lastPeriodicFireTime;
	SCD_Struct_AV5 _lastNonperiodicFireTime;
	SCD_Struct_AV5 _lastStopTime;
	unsigned _sequenceNum;
	/*^block*/id _block;

}
-(id)initWithTimebase:(OpaqueCMTimebaseRef)arg1 interval:(SCD_Struct_AV5)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_effectiveRateChanged;
-(void)_resetNextFireTime;
-(void)_handleTimeDiscontinuity;
-(void)_fireBlockForTime:(SCD_Struct_AV5)arg1 ;
-(void)dealloc;
@end
