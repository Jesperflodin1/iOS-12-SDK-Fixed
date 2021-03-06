/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_ATXInspectionInterface.h>

@class NSXPCConnection;

@interface _ATXInspectionClient : NSObject <_ATXInspectionInterface> {

	NSXPCConnection* _xpcConnection;

}
-(void)appHistoryClear:(/*^block*/id)arg1 ;
-(void)appHistoryClearAppIntent:(/*^block*/id)arg1 ;
-(void)appHistoryAddLaunch:(id)arg1 launchReason:(id)arg2 date:(id)arg3 timeZone:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)appHistoryUpdateActionPredictionPipelineWithAction:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)appHistoryActionWithUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)appHistoryAddNSUALaunch:(id)arg1 requiredString:(id)arg2 itemIdentifier:(id)arg3 date:(id)arg4 timeZone:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)appHistoryAddAppIntentLaunch:(id)arg1 intent:(id)arg2 source:(id)arg3 date:(id)arg4 timeZone:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)appIntentHistoryMockIntentLaunch:(id)arg1 source:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)appIntentHistoryDonateINIntent:(id)arg1 intentType:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 timeZone:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)appHistoryStartDeltaRecording:(/*^block*/id)arg1 ;
-(void)appHistoryStopDeltaRecording:(/*^block*/id)arg1 ;
-(void)appInstallHistoryClear:(/*^block*/id)arg1 ;
-(void)appInstallHistorySet:(id)arg1 date:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)appInstallHistoryStartDeltaRecording:(/*^block*/id)arg1 ;
-(void)appInstallHistoryStopDeltaRecording:(/*^block*/id)arg1 ;
-(void)feedbackClear:(/*^block*/id)arg1 ;
-(void)feedbackLaunched:(id)arg1 rejected:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)predictItemsAndReturnInputsAndSubscoresForConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIds:(id)arg3 candidateActiontypes:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)predictItemsAndReturnMetaDataAndInputsAndSubScoresWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)predictItemsAndReturnStageScoresWithCandidateBundleIdentifiers:(id)arg1 candidateActiontypes:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getParseTreeForConsumerSubType:(unsigned char)arg1 reply:(/*^block*/id)arg2 ;
-(void)predictAppsAndReturnInputsAndSubscores:(/*^block*/id)arg1 ;
-(void)getPredictionModelDetails:(/*^block*/id)arg1 ;
-(void)getABGroups:(/*^block*/id)arg1 ;
-(void)benchmarkAppPredictionForConsumerSubType:(unsigned char)arg1 ntimes:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)benchmarkAppPrediction:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)getActionLogs:(/*^block*/id)arg1 ;
-(void)retrainActionHistograms:(/*^block*/id)arg1 ;
-(void)retrainActionSlotDatabase:(/*^block*/id)arg1 ;
-(void)resetActionPredictions:(/*^block*/id)arg1 ;
-(void)getAppFeedbackData:(/*^block*/id)arg1 ;
-(void)getNotificationLogs:(/*^block*/id)arg1 ;
-(void)getNotificationsSuggestionResponses:(/*^block*/id)arg1 ;
-(void)resetNotificationsSuggestionResponses:(/*^block*/id)arg1 ;
-(void)resetNotificationsHistory:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

