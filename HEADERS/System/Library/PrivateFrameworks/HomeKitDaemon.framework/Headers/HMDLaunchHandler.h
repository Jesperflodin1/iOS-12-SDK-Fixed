//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMDLaunchHandler : HMFObject
{
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSMutableSet *_registeredRelaunchClients;
}

+ (int)_setJetsamPriorityUsingCommand:(int)arg1;
+ (_Bool)_removeFileAtPath:(id)arg1 error:(id *)arg2;
+ (_Bool)_fileExistsAtPath:(id)arg1;
+ (_Bool)_writeDictionary:(id)arg1 toFileURL:(id)arg2 error:(id *)arg3;
+ (id)relaunchPlistPath;
+ (id)sharedHandler;
@property(readonly, nonatomic) NSMutableSet *registeredRelaunchClients; // @synthesize registeredRelaunchClients=_registeredRelaunchClients;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
- (void).cxx_destruct;
- (void)_setJetsamPriorityElevated:(_Bool)arg1;
- (void)_updateOrRemoveRelaunchPlist;
- (void)deregisterForRelaunch:(id)arg1;
- (void)registerForRelaunch:(id)arg1;
- (void)removePersistentRelaunchRegistrationsIfNecessary;
- (id)init;

@end
