//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLPersistentHistoryHelper : NSObject
{
}

+ (id)_executePersistentHistoryChangeRequest:(id)arg1 withContext:(id)arg2;
+ (_Bool)deleteHistoryBeforeToken:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
+ (id)fetchTransactionCountSinceToken:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
+ (id)fetchTransactionsSinceToken:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
+ (id)fetchTransactionsSinceToken:(id)arg1 withBatchSize:(unsigned long long)arg2 context:(id)arg3 error:(id *)arg4;
+ (id)fetchTransactionsSinceToken:(id)arg1 withFetchLimit:(unsigned long long)arg2 context:(id)arg3 error:(id *)arg4;

@end

