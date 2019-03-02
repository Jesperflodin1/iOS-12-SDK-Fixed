/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDHealthDataCollector <NSObject>
@property (assign) BOOL disabled; 
@optional
-(BOOL)shouldCollectForObserverState:(id)arg1;

@required
-(void)updateHistoricalDataForcedUpdate:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2;
-(void)updateCollectionInterval:(double)arg1 forType:(id)arg2;
-(void)collectionStoppedForType:(id)arg1;
-(void)updateHistoricalData;
-(void)updateHistoricalDataWithCompletion:(/*^block*/id)arg1;
-(id)dataCollectorDiagnosticDescription;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1;

@end
