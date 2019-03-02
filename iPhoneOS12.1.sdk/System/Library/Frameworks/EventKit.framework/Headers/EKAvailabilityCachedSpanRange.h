/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:28:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface EKAvailabilityCachedSpanRange : NSObject {

	NSMutableArray* _cachedSpans;

}
+(id)_clampDateRangeForSpans:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)_generateCachedSpansFromSpans:(id)arg1 ;
-(id)spans;
-(id)gatherFreshlyCachedSpansBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)injectSpans:(id)arg1 ;
-(BOOL)_rangeCompletelyCoversPeriodBetweenStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_validateCachedSpansIfDebugLoggingIsEnabled;
-(id)init;
-(id)description;
@end
