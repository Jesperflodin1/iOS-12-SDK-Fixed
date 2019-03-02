//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACXPairedSyncAppInstallerDelegate-Protocol.h"
#import "PSYInitialSyncStateObserverDelegate-Protocol.h"
#import "PSYSyncCoordinatorDelegate-Protocol.h"

@class ACXPairedSyncAppInstaller, NSString, PSYInitialSyncStateObserver, PSYSyncCoordinator;

@interface ACXPairedSyncDelegate : NSObject <PSYSyncCoordinatorDelegate, PSYInitialSyncStateObserverDelegate, ACXPairedSyncAppInstallerDelegate>
{
    PSYSyncCoordinator *_coordinator;
    PSYInitialSyncStateObserver *_stateObserver;
    ACXPairedSyncAppInstaller *_appInstaller;
}

+ (id)sharedSyncDelegate;
@property(readonly) ACXPairedSyncAppInstaller *appInstaller; // @synthesize appInstaller=_appInstaller;
@property(readonly) PSYInitialSyncStateObserver *stateObserver; // @synthesize stateObserver=_stateObserver;
@property(readonly) PSYSyncCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (void)installCompleteForSyncSession:(id)arg1;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)supportsMigrationSync;
- (void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2;
- (_Bool)syncingIsRestrictedForPairingID:(id)arg1;
- (void)startSystemAppInstallerWithSyncSession:(id)arg1 forConnection:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
