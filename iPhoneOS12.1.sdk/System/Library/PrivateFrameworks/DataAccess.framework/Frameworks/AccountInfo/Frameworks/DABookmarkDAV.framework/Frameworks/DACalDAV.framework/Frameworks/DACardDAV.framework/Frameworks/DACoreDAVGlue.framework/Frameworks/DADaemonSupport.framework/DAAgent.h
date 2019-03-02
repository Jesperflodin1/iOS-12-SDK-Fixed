//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DAAccount, DATrustHandler;

@interface DAAgent : NSObject
{
    _Bool _isMonitoring;
    _Bool _syncWhenReachable;
    _Bool _isWaitingForPassword;
    DAAccount *_account;
    double _lastRetryTimeout;
    CDUnknownBlockType _networkReachableBlock;
}

@property(nonatomic) _Bool isWaitingForPassword; // @synthesize isWaitingForPassword=_isWaitingForPassword;
@property(copy, nonatomic) CDUnknownBlockType networkReachableBlock; // @synthesize networkReachableBlock=_networkReachableBlock;
@property(nonatomic) _Bool syncWhenReachable; // @synthesize syncWhenReachable=_syncWhenReachable;
@property(nonatomic) double lastRetryTimeout; // @synthesize lastRetryTimeout=_lastRetryTimeout;
@property(retain, nonatomic) DAAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool isMonitoring; // @synthesize isMonitoring=_isMonitoring;
- (void).cxx_destruct;
- (id)getDAAccount;
- (void)processMeetingRequestDatas:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)syncFolderIDs:(id)arg1 forDataclasses:(long long)arg2 isUserRequested:(_Bool)arg3;
- (void)refreshFolderListRequireChangedFolders:(_Bool)arg1 isUserRequested:(_Bool)arg2;
- (void)shutdown;
- (void)requestAgentStopMonitoringWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startMonitoring;
- (void)stopObservingReachability;
- (void)observeReachabilityWithBlock:(CDUnknownBlockType)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (id)stateString;
@property(readonly, nonatomic) DATrustHandler *trustHandler;
- (id)initWithAccount:(id)arg1;
- (void)saveXpcActivity:(id)arg1;
- (int)preferredToDoDaysToSync;
- (int)preferredEventDaysToSync;

@end
