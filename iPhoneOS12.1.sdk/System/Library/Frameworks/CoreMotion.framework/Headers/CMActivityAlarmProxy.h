/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSMutableDictionary, NSObject;

@interface CMActivityAlarmProxy : NSObject {

	id _internal;
	CLConnectionClient* fLocationdConnection;
	int fAlarmCounter;
	NSMutableDictionary* fAlarms;
	NSObject*<OS_dispatch_queue> fReplyQueue;
	BOOL fAlarmAvailable;
	NSObject*<OS_dispatch_source> fWatchdogTimer;

}
+(id)sharedInstance;
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)listenForActivityAlarm:(id)arg1 ;
-(void)stopListeningForActivityAlarm:(id)arg1 ;
-(BOOL)activityAlarmAvailable;
-(id)init;
-(void)dealloc;
@end
