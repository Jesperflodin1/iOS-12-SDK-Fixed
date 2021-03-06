//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineChangePipe : CPLEngineStorage <CPLAbstractObject>
{
}

- (id)allChangeBatches;
- (id)popAllChangeBatchesWithError:(id *)arg1;
- (_Bool)compactChangeBatchesWithError:(id *)arg1;
- (_Bool)deleteAllChangesWithScopeFilter:(id)arg1 error:(id *)arg2;
- (_Bool)deleteAllChangeBatchesWithError:(id *)arg1;
- (_Bool)hasSomeChangeWithScopeFilter:(id)arg1;
- (_Bool)hasSomeChangeInScopesWithIdentifiers:(id)arg1;
- (_Bool)hasSomeChangeWithScopedIdentifier:(id)arg1;
- (_Bool)popNextBatchWithError:(id *)arg1;
- (id)nextBatch;
- (_Bool)popChangeBatch:(id *)arg1 error:(id *)arg2;
- (_Bool)appendChangeBatch:(id)arg1 error:(id *)arg2;
- (_Bool)hasQueuedBatches;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) unsigned long long countOfQueuedBatches;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (unsigned long long)scopeType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

