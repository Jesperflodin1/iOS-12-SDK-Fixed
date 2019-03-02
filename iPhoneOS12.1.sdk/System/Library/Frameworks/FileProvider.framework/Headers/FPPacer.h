/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:25:30 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface FPPacer : NSObject {

	double _lastFireTime;
	double _minFireInterval;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_source> _timer;
	Ai _sourceResumed;
	/*^block*/id _eventBlock;

}

@property (nonatomic,copy) id eventBlock;              //@synthesize eventBlock=_eventBlock - In the implementation block
-(void)_scheduleNextFire;
-(double)_computeNextTime;
-(id)initWithName:(id)arg1 queue:(id)arg2 minFireInterval:(double)arg3 ;
-(void)_fire;
-(void)setEventBlock:(id)arg1 ;
-(id)eventBlock;
-(void)dealloc;
-(void)resume;
-(void)signal;
-(void)suspend;
@end
