//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

@interface MRDAVSystemEndpointController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableOrderedSet *_activeEndpointGroupLeaderUIDs;
    _Bool _cachedHasPersonalDevices;
    long long _systemEndpointBehavior;
}

+ (id)_persistentStoragePath;
@property(nonatomic) long long systemEndpointBehavior; // @synthesize systemEndpointBehavior=_systemEndpointBehavior;
- (void).cxx_destruct;
- (void)_onQueue_orderedListDidChange;
- (void)_postActiveEndpointDidChangeNotification;
- (_Bool)_hasPersonalDeviceForContext:(id)arg1;
- (void)_outputDevicesDidChangeNotification:(id)arg1;
- (void)_originDidUnregisterNotification:(id)arg1;
- (void)clearAllActiveEndpointStatus;
- (void)clearActiveEndpointStatusForGroupLeaderWithUID:(id)arg1;
- (void)updateActiveEndpointStatusForGroupLeaderWithUID:(id)arg1;
@property(readonly, nonatomic) NSArray *activeEndpointGroupLeaderUIDs;
- (void)dealloc;
- (id)init;

@end

