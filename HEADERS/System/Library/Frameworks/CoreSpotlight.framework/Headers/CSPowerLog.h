/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:25:15 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDate;

@interface CSPowerLog : NSObject {

	NSMutableDictionary* _operationsByBundleID;
	NSDate* _lastFlushDate;
	unsigned long long _cachedCount;

}

@property (nonatomic,retain) NSMutableDictionary * operationsByBundleID;              //@synthesize operationsByBundleID=_operationsByBundleID - In the implementation block
@property (nonatomic,retain) NSDate * lastFlushDate;                                  //@synthesize lastFlushDate=_lastFlushDate - In the implementation block
@property (assign,nonatomic) unsigned long long cachedCount;                          //@synthesize cachedCount=_cachedCount - In the implementation block
+(id)keyNameForOperation:(long long)arg1 ;
+(id)sharedInstance;
-(void)logWithBundleID:(id)arg1 indexOperation:(long long)arg2 itemCount:(unsigned long long)arg3 ;
-(void)setOperationsByBundleID:(NSMutableDictionary *)arg1 ;
-(void)setLastFlushDate:(NSDate *)arg1 ;
-(NSDate *)lastFlushDate;
-(void)flushToPowerLog;
-(void)_addToDictionary:(long long)arg1 bundleID:(id)arg2 itemCount:(unsigned long long)arg3 ;
-(NSMutableDictionary *)operationsByBundleID;
-(unsigned long long)cachedCount;
-(void)setCachedCount:(unsigned long long)arg1 ;
-(id)init;
@end
