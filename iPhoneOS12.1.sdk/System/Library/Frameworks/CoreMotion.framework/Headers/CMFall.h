/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CMFall : NSObject
+(BOOL)areStatsAvailable;
-(BOOL)setStatsEnabled:(BOOL)arg1 ;
-(unsigned long long)setDataCollectionConfiguration:(unsigned long long)arg1 ;
-(id)fallConfig;
-(id)sendStatsDataToUrl:(id)arg1 ;
-(void)sendStatsDataToUrl:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)simulateEvent:(unsigned long long)arg1 ;
@end
