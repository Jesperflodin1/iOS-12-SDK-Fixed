//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IXAppInstallObserverDelegate-Protocol.h"

@class IXAppInstallObserver, JobAgentSupervisor, NSMutableSet, NSString;

@interface LaunchServicesObserver : NSObject <IXAppInstallObserverDelegate>
{
    JobAgentSupervisor *_supervisor;
    IXAppInstallObserver *_ixObserver;
    NSMutableSet *_systemAppRequests;
}

- (void).cxx_destruct;
- (void)_parseRegistrationNotification:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_parseProgressNotification:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_handleUninstalledEventNotification:(id)arg1;
- (void)_handleAppMayBeUninstalledNotification:(id)arg1;
- (void)_handleInstalledEventNotification:(id)arg1;
- (void)_handleCancelEventNotification:(id)arg1;
- (void)_enumerateJobsForBundleIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_copyBundleIDsFromXPCArray:(id)arg1;
- (_Bool)_applicationInstallsDidPrioritize:(id)arg1 hasCoordinator:(_Bool)arg2;
- (void)_applicationInstallsDidCancel:(id)arg1;
- (void)_applicationInstallsDidResume:(id)arg1;
- (void)_applicationInstallsDidPause:(id)arg1;
- (void)coordinatorShouldResume:(id)arg1;
- (void)coordinatorShouldPause:(id)arg1;
- (void)shouldPrioritizeAppWithBundleID:(id)arg1;
- (void)coordinatorShouldPrioritize:(id)arg1;
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;
- (id)initWithJobSupervisor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

