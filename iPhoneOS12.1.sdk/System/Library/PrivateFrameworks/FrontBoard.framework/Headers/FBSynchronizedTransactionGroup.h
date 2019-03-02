//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

#import <FrontBoard/FBSynchronizedTransaction-Protocol.h>
#import <FrontBoard/FBSynchronizedTransactionDelegate-Protocol.h>

@class NSMutableSet, NSString;
@protocol FBSynchronizedTransactionDelegate, FBSynchronizedTransactionGroupDelegate;

@interface FBSynchronizedTransactionGroup : FBTransaction <FBSynchronizedTransaction, FBSynchronizedTransactionDelegate>
{
    _Bool _commitAllowed;
    _Bool _readyForCommit;
    _Bool _didCommit;
    NSMutableSet *_synchronizedTransactions;
    NSMutableSet *_synchronizedTransactionsAwaitingCommitReadiness;
    NSMutableSet *_synchronizedTransactionsReadyToCommit;
    id <FBSynchronizedTransactionGroupDelegate> _synchronizationDelegate;
}

@property(nonatomic) __weak id <FBSynchronizedTransactionDelegate> synchronizationDelegate; // @synthesize synchronizationDelegate=_synchronizationDelegate;
- (void).cxx_destruct;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)performSynchronizedCommit;
- (_Bool)isReadyForSynchronizedCommit;
- (void)_performSynchronizedCommitIfReady;
- (void)_checkPreconditionsAndCommitIfReady;
- (void)_performSynchronizedCommit:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (_Bool)_shouldFailForChildTransaction:(id)arg1;
- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (void)addSynchronizedTransaction:(id)arg1;
- (id)synchronizedTransactions;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
