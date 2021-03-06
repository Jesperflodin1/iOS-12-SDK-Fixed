//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, PLPersistentHistoryChangeDistributor;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface PLChangeNode : NSObject
{
    NSObject<OS_xpc_object> *_hubConnection;
    Class _changeHubClass;
    unsigned char _nodeUUID[16];
    NSString *_nodeUUIDShortString;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_hubConnectionQueue;
    unsigned long long _lastKnownChangeHubEventIndex;
    _Bool _isObservingOrderKeys;
    NSSet *_observedRelationships;
    NSMutableDictionary *_updatedOrderKeyObjectIDs;
    PLPersistentHistoryChangeDistributor *_persistentHistoryChangeDistributor;
}

+ (id)localChangeEventFromChangeHubEvent:(id)arg1;
+ (id)_descriptionForEvent:(id)arg1;
+ (id)_createXPCObjectFromChangedObjectIDs:(id)arg1 redundantDeletes:(id)arg2 uuidsForCloudDeletion:(id)arg3 updatedAttributesByObjectID:(id)arg4 updatedRelationshipsByObjectID:(id)arg5 updatedOrderKeys:(id)arg6 changeSource:(int)arg7 syncChangeMarker:(_Bool)arg8;
+ (id)sharedNode;
- (void)_processDelayedAssetsForAnalysis:(id)arg1 photoLibrary:(id)arg2 transaction:(id)arg3;
- (void)_processDelayedAssetsForFileSystemPersistencyFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)processDelayedAssetsForFileSystemPersistency:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAlbumCountUpdatesFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedAlbumCountUpdates:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedSearchIndexUpdatesFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedSearchIndexUpdates:(id)arg1 transaction:(id)arg2;
- (void)_processDelayedDupeAnalysisFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)processDelayedDupeAnalysisNormalInserts:(id)arg1 cloudInserts:(id)arg2 transaction:(id)arg3;
- (void)_processCloudFeedUpdateDataFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)processDelayedCloudFeedAlbumUpdates:(id)arg1 assetInserts:(id)arg2 assetUpdates:(id)arg3 commentInserts:(id)arg4 invitationRecordUpdates:(id)arg5 deletionEntries:(id)arg6 transaction:(id)arg7;
- (void)processDelayedMomentChangesWithTransaction:(id)arg1;
- (void)_processDeletionsFromChangeHubEvent:(id)arg1 transaction:(id)arg2;
- (void)handleRemoteChangeHubRequest:(id)arg1;
- (void)_initializePersistentHistoryChangeDistributor;
- (void)_initializeChangeHubConnection;
- (id)sendEventToChangeHub:(id)arg1 transaction:(id)arg2;
- (void)sendChangeHubEventForDidSaveObjectIDsNotification:(id)arg1;
- (id)getAndClearUpdatedOrderKeys;
- (void)persistentStoreDidUpdateOrderKeys:(id)arg1;
- (void)printChangeStore;
- (void)disconnectManagedObjectContext:(id)arg1;
- (void)connectManagedObjectContext:(id)arg1;
- (_Bool)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1;
- (void)distributeRemoteChangeHubEvent:(id)arg1 withGroup:(id)arg2 transaction:(id)arg3;
- (void)distributeRemoteContextDidSaveEvent:(id)arg1 withGroup:(id)arg2 transaction:(id)arg3;
- (void)dealloc;
- (id)init;

@end

