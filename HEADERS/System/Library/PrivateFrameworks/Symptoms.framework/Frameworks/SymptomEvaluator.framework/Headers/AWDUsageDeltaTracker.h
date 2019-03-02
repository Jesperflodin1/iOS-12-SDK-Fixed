/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:07 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AWDUsageDeltaTracker : NSObject {

	int netType;
	int rootCause;
	unsigned long long startValue;
	unsigned long long lastValue;
	unsigned long long flowCount;

}
-(id)initForNetworkType:(int)arg1 rootCause:(int)arg2 startValue:(unsigned long long)arg3 ;
-(void)recordUsageValue:(unsigned long long)arg1 ;
-(void)recordFlowCount:(unsigned long long)arg1 ;
-(void)dealloc;
@end
