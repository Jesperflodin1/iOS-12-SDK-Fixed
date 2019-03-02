/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface iOSPMR : NSObject {

	BOOL gPMR_ENABLED;

}
+(id)sharedInstance;
-(unsigned long long)returnStartTime_Nanoseconds;
-(double)returnDelta_Milliseconds:(unsigned long long)arg1 ;
-(id)stopTimerAndReportPMR:(unsigned long long)arg1 logFilename:(id)arg2 pmrKey:(id)arg3 comment:(id)arg4 ;
-(unsigned long long)returnDelta_Nanoseconds:(unsigned long long)arg1 ;
-(double)convertNanoSecondsToSeconds:(unsigned long long)arg1 ;
-(void)writePMRInfoToFile:(id)arg1 pmrString:(id)arg2 ;
-(void)addDelta:(unsigned long long)arg1 toArray:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end
