/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:13 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMSwimTrackerInternal;

@interface CMSwimTracker : NSObject {

	CMSwimTrackerInternal* _internal;

}

@property (nonatomic,readonly) CMSwimTrackerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(unsigned long long)maxSwimDataEntries;
+(BOOL)isAvailable;
-(CMSwimTrackerInternal *)_internal;
-(void)stopUpdates;
-(void)startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)querySwimUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
@end

