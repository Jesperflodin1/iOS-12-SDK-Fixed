//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FileProvider/FPOperation.h>

@class FPXDomainContext, FPXIndexState, FPXSpotlightIndexer, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPXIndexOneBatchOperation : FPOperation
{
    FPXSpotlightIndexer *_indexer;
    FPXDomainContext *_domainContext;
    FPXIndexState *_indexState;
    _Bool _isInitialIndexing;
    _Bool _hasMoreChanges;
    unsigned long long *_logSection;
    NSObject<OS_dispatch_queue> *_cleanupQueue;
    CDUnknownBlockType _fetchCompletedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType fetchCompletedBlock; // @synthesize fetchCompletedBlock=_fetchCompletedBlock;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)_startIndexing;
- (void)main;
- (void)handleInsertedItems:(id)arg1 deletedItems:(id)arg2 needsMoreWork:(_Bool)arg3 state:(id)arg4 error:(id)arg5;
- (void)_handleInsertedItems:(id)arg1 deletedItems:(id)arg2 needsMoreWork:(_Bool)arg3 state:(id)arg4 error:(id)arg5;
- (void)_indexOneChangesBatchFromChangeToken:(id)arg1;
- (void)_indexOnePageFromPage:(id)arg1;
- (id)observerItemID;
- (id)initWithIndexer:(id)arg1 isInitialIndexing:(_Bool)arg2 queue:(id)arg3;

@end
