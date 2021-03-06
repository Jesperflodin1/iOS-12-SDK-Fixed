/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLTimer;


@protocol CLTimerScheduler
@property (assign,nonatomic,__weak) CLTimer * timer; 
@required
-(void)reflectNextFireTime:(double)arg1 fireInterval:(double)arg2;
-(void)setTimer:(id)arg1;
-(CLTimer *)timer;

@end

