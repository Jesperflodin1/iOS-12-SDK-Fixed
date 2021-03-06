//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CKContainer, CKDatabase, CPLCloudKitOperationsTracker, NSError;

@protocol CPLCloudKitTaskController
@property(readonly, nonatomic) _Bool canBoostBackgroundOperations;
@property(readonly, nonatomic) _Bool canBoostOperations;
@property(readonly, nonatomic, getter=isForeground) _Bool foreground;
@property(readonly, nonatomic, getter=isNetworkConnected) _Bool networkConnected;
@property(readonly, nonatomic) CPLCloudKitOperationsTracker *operationTracker;
@property(readonly, nonatomic) CKContainer *container;
@property(readonly, nonatomic) CKDatabase *sharedDatabase;
@property(readonly, nonatomic) CKDatabase *database;
- (void)processTaskErrorIfNeeded:(NSError *)arg1;
@end

