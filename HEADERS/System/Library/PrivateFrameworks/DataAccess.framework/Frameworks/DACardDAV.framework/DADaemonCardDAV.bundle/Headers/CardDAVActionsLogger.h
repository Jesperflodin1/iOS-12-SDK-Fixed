/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:51:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CardDAVActionsLogger : NSObject
+(void)logSummaryForCardDAVActions:(id)arg1 partialResults:(BOOL)arg2 initialSync:(BOOL)arg3 syncPhase:(id)arg4 ;
+(id)os_log_summary;
+(unsigned long long)_kindForAction:(id)arg1 ;
+(id)_nameForActionKind:(unsigned long long)arg1 ;
@end
