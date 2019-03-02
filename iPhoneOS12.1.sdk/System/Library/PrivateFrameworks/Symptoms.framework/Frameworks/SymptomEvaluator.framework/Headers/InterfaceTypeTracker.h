/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:08 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol flowDispositionObserver;
@class NSArray, NSMutableDictionary, TrackerPolicy, NetworkAnalyticsStateRelay, NSDate;

@interface InterfaceTypeTracker : NSObject {

	NSArray* _alwaysNote;
	NSArray* _neverNote;
	NSArray* _daemonCheck;
	NSMutableDictionary* _trackerCache;
	long long _interfaceType;
	id<flowDispositionObserver> _observer;
	TrackerPolicy* _defaultPolicy;
	NetworkAnalyticsStateRelay* _stateRelay;
	NSDate* _madePrimaryDate;

}

@property (retain) NSArray * alwaysNote;                                 //@synthesize alwaysNote=_alwaysNote - In the implementation block
@property (retain) NSArray * neverNote;                                  //@synthesize neverNote=_neverNote - In the implementation block
@property (retain) NSArray * daemonCheck;                                //@synthesize daemonCheck=_daemonCheck - In the implementation block
@property (retain) NSMutableDictionary * trackerCache;                   //@synthesize trackerCache=_trackerCache - In the implementation block
@property (assign) long long interfaceType;                              //@synthesize interfaceType=_interfaceType - In the implementation block
@property (retain) id<flowDispositionObserver> observer;                 //@synthesize observer=_observer - In the implementation block
@property (retain) TrackerPolicy * defaultPolicy;                        //@synthesize defaultPolicy=_defaultPolicy - In the implementation block
@property (retain) NetworkAnalyticsStateRelay * stateRelay;              //@synthesize stateRelay=_stateRelay - In the implementation block
@property (retain) NSDate * madePrimaryDate;                             //@synthesize madePrimaryDate=_madePrimaryDate - In the implementation block
-(void)setInterfaceType:(long long)arg1 ;
-(long long)interfaceType;
-(void)_dumpState;
-(NSDate *)madePrimaryDate;
-(void)noteFlow:(id)arg1 withDelegatee:(id)arg2 ;
-(void)noteFlow:(id)arg1 withOwner:(id)arg2 isADaemon:(BOOL)arg3 ;
-(void)setMadePrimaryDate:(NSDate *)arg1 ;
-(void)configurePolicies:(id)arg1 ;
-(NSMutableDictionary *)trackerCache;
-(void)_trackerCachePrune;
-(void)removeLinkages:(id)arg1 ;
-(id)initWithInterfaceType:(long long)arg1 ;
-(id)infoDir;
-(void)getNetworkActivity:(/*^block*/id)arg1 ;
-(NSArray *)alwaysNote;
-(void)setAlwaysNote:(NSArray *)arg1 ;
-(NSArray *)neverNote;
-(void)setNeverNote:(NSArray *)arg1 ;
-(NSArray *)daemonCheck;
-(void)setDaemonCheck:(NSArray *)arg1 ;
-(void)setTrackerCache:(NSMutableDictionary *)arg1 ;
-(TrackerPolicy *)defaultPolicy;
-(void)setDefaultPolicy:(TrackerPolicy *)arg1 ;
-(NetworkAnalyticsStateRelay *)stateRelay;
-(void)setStateRelay:(NetworkAnalyticsStateRelay *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setObserver:(id<flowDispositionObserver>)arg1 ;
-(id<flowDispositionObserver>)observer;
@end
