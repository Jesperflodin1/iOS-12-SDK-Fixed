//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface PSIGroupAggregate : NSObject
{
    NSArray *_searchTokens;
    NSMutableArray *_groupAggregateItems;
    NSMutableArray *_aggregatedGroupIds;
    NSMutableArray *_aggregateItemPool;
    NSObject<OS_dispatch_queue> *_groupResultsQueue;
    NSString *_transientToken;
}

+ (_Bool)_prefer:(id)arg1 over:(id)arg2;
+ (void)postProcessGroupResults:(id)arg1 dedupedGroupResults:(out id *)arg2;
+ (_Bool)_canDedupeGroupResult:(id)arg1 withGroupResult:(id)arg2;
@property(copy, nonatomic) NSString *transientToken; // @synthesize transientToken=_transientToken;
@property(readonly, nonatomic) NSArray *searchTokens; // @synthesize searchTokens=_searchTokens;
- (id)newGroupResult;
- (id)newGroupResultWithDateFilter:(id)arg1;
- (struct __CFArray *)_newSortedGroupIds;
- (_Bool)_verifySortedGroupIdsUnique;
- (id)aggregateItemWithSearchToken:(id)arg1 rangeMatchingToken:(id)arg2 group:(id)arg3;
- (void)pop;
- (_Bool)pushGroup:(id)arg1;
- (struct _NSRange)_rangeOfString:(id)arg1 inGroup:(id)arg2 extendingSearchRange:(_Bool)arg3 matchingFullToken:(_Bool)arg4 excludingRanges:(id)arg5;
- (void)dealloc;
- (id)initWithSearchTokens:(id)arg1 groupResultsQueue:(id)arg2;

@end
