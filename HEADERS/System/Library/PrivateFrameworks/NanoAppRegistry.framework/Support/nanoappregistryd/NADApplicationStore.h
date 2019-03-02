//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NADEntityStore, NSFileManager, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface NADApplicationStore : NSObject
{
    NSMutableDictionary *_storeMetadata;
    NSMutableDictionary *_parentBundleIDToWatchAppMap;
    NSMutableDictionary *_bundleIDToApplicationMap;
    unsigned long long _stateHandle;
    NSURL *_applicationDirectory;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileManager *_fileManager;
    NADEntityStore *_applicationStore;
}

+ (id)defaultURL;
+ (id)legacyDefaultURL;
+ (id)defaultStore;
@property(readonly, nonatomic) NADEntityStore *applicationStore; // @synthesize applicationStore=_applicationStore;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSURL *applicationDirectory; // @synthesize applicationDirectory=_applicationDirectory;
- (void).cxx_destruct;
- (struct os_state_data_s *)stateDataWithHints:(struct os_state_hints_s *)arg1;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (id)beginTransaction;
- (void)_writeStoreMetadata;
- (id)_storeMetadataURL;
- (id)description;
- (id)sequenceNumber;
- (void)setSequenceNumber:(id)arg1 UUID:(id)arg2;
- (id)UUID;
- (id)_allApplicationsIncludingHidden:(_Bool)arg1;
- (void)_removeApplicationFromCache:(id)arg1;
- (void)_removeApplicationWithBundleIdentifier:(id)arg1;
- (id)watchAppIDsForParentBundleID:(id)arg1;
- (void)_insertApplicationIntoCache:(id)arg1;
- (void)_insertApplication:(id)arg1;
- (void)_resetStores;
- (void)_loadEntitiesFromDisk;
- (void)getAllApplications:(out id *)arg1 UUID:(out id *)arg2 sequenceNumber:(out id *)arg3 includeHidden:(_Bool)arg4;
- (id)allApplicationsIncludingHidden:(_Bool)arg1;
- (id)_applicationBundleIdentifiersForParentApplicationBundleIdentifier:(id)arg1;
- (void)removeApplicationsWithParentApplicationBundleIdentifier:(id)arg1;
- (void)removeApplicationWithBundleIdentifier:(id)arg1;
- (void)insertApplication:(id)arg1;
- (void)removeAllEntities;
- (id)initWithURL:(id)arg1;
- (id)init;

@end
