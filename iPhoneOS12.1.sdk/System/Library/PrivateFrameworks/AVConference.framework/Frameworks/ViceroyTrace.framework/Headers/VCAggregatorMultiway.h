/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:36:13 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViceroyTrace/VCAggregator.h>
#import <libobjc.A.dylib/SegmentStatsDelegate.h>

@class NSString, UplinkSegment, DownlinkSegment, NSMutableDictionary;

@interface VCAggregatorMultiway : VCAggregator <SegmentStatsDelegate> {

	NSString* _currentUplinkSegmentKey;
	UplinkSegment* _currentUplinkSegment;
	NSString* _currentDownlinkSegmentKey;
	DownlinkSegment* _currentDownlinkSegment;
	NSMutableDictionary* _calls;
	NSMutableDictionary* _internalErrors;
	unsigned _participantCounter;
	double _lastParticipantNumberChangeTime;
	double _numberOfParticipantsDuration[40];
	double _totalParticipantMeasuredTime;
	unsigned _numberOfUplinkSegments;
	unsigned _numberOfDownlinkSegments;
	unsigned _sessionTotalDurationTicks;
	unsigned _sessionAggregatedDurationTicks;
	unsigned _sessionUplinkTargetBitrateSwitchCount;
	unsigned long long _sessionUplinkBWEstimationSum;
	unsigned _sessionUplinkBWEstimationCounter;
	unsigned long long _sessionDownlinkBWEstimationSum;
	unsigned _sessionDownlinkBWEstimationCounter;
	unsigned long long _sessionUplinkTargetBitrateSum;
	unsigned _sessionUplinkTargetBitrateCounter;
	unsigned long long _sessionDownlinkTargetBitrateSum;
	unsigned _sessionDownlinkTargetBitrateCounter;
	unsigned long long _sessionUplinkActualBitrateSum;
	unsigned _sessionUplinkActualBitrateCounter;
	unsigned long long _sessionDownlinkActualBitrateSum;
	unsigned _sessionDownlinkActualBitrateCounter;
	unsigned long long _sessionDownlinkRoundTripTimeSum;
	unsigned _sessionDownlinkRoundTripTimeCounter;
	unsigned long long _sessionDownlinkTotalPacketsReceivedSum;
	unsigned long long _sessionDownlinkTotalLostSum;
	unsigned long long _sessionUplinkTotalPacketsSentSum;
	unsigned long long _sessionUplinkTotalLostSum;
	unsigned _sessionEndReason;
	unsigned _sessionDetailedEndReason;
	unsigned _lastReportedDownlinkPacketsReceived;
	unsigned _lastReportedDownlinkBytesReceived;
	unsigned _lastReportedUplinkPacketsReceived;
	unsigned _lastReportedUplinkPacketsSent;
	unsigned _lastReportedUplinkBytesSent;
	double _sessionCreatedTime;
	BOOL _isFullsizeUI;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)RTPeriod;
-(int)initialSettledBitrate;
-(int)adaptiveLearningState;
-(void)updateSegment:(id)arg1 TBR:(int)arg2 ISBTR:(int)arg3 SATXBR:(int)arg4 SARBR:(int)arg5 BWE:(int)arg6 ;
-(void)saveCallSegmentHistory;
-(id)aggregatedSegmentReport:(int)arg1 ;
-(id)aggregatedSegmentQRReport;
-(void)flushCurrentSegment;
-(void)initAdaptiveLearningWithParameters:(id)arg1 ;
-(id)aggregatedCallReports;
-(id)aggregatedSessionReport;
-(void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 ;
-(unsigned)significantVideoStallCount;
-(unsigned)audioErasureCount;
-(double)audioErasureTotalTime;
-(void)processDownlinkRateChange:(id)arg1 ;
-(double)significantVideoStallTotalTime;
-(double)timeWeightedNumberOfParticipants;
-(id)aggregatedUplinkSegmentReport;
-(id)aggregatedDownlinkSegmentReport;
-(void)processNumberOfParticipants:(unsigned)arg1 ;
-(id)interfaceTypeIndicator;
-(void)flushCurrentUplinkSegment;
-(void)resetUplinkSegment;
-(BOOL)currentUISize;
-(void)flushCurrentDownlinkSegment;
-(void)resetDownlinkSegment;
-(void)processVideoDegraded:(BOOL)arg1 participantID:(id)arg2 ;
-(void)processUplinkTargetBitrate:(unsigned)arg1 ;
-(void)processUplinkActualBitrate:(unsigned)arg1 ;
-(void)processUplinkBWEstimation:(unsigned)arg1 ;
-(void)processDownlinkRoundTripTime:(unsigned)arg1 ;
-(void)processDownlinkBWEstimation:(unsigned)arg1 ;
-(void)processDownlinkTargetBitrate:(unsigned)arg1 ;
-(void)processDownlinkActualBitrate:(unsigned)arg1 ;
-(void)processActualBitrateChange:(id)arg1 ;
-(void)startDownlinkSegment;
-(BOOL)isWhitelistedEvent:(unsigned short)arg1 ;
-(void)startUplinkSegment;
-(void)addNewCall:(id)arg1 ;
-(void)finalizeCall:(id)arg1 ;
-(void)audioEnabled:(id)arg1 ;
-(void)videoEnabled:(id)arg1 ;
-(void)processRTEvent:(id)arg1 ;
-(void)processVideoStreamSwitch:(id)arg1 ;
-(void)processAudioStreamSwitch:(id)arg1 ;
-(void)processParticipantTimingInfo:(id)arg1 ;
-(void)processSessionInit;
-(void)processSessionStart;
-(void)processInternalErrorDetectedWithCode:(id)arg1 ;
-(void)processUISizeEventForParticipant:(id)arg1 isFullSize:(BOOL)arg2 ;
-(int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2 ;
-(BOOL)isVideoDegraded;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
@end
