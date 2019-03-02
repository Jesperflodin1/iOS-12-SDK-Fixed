//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoFoundation/PFDispatchQueueStatisticsExtension.h>

@class NSMutableDictionary, PFSerialQueue;

@interface PFDispatchQueueDebugExtension : PFDispatchQueueStatisticsExtension
{
    NSMutableDictionary *_allBlockInfoByCallSite;
    unsigned long long _count;
    PFSerialQueue *_serializer;
}

- (void).cxx_destruct;
- (id)description;
- (void)showQueueUsageByEnqueueSite;
- (id)_queueUsageByEnqueueSiteDescription;
- (void)showQueueUsageByExecutionTime;
- (id)_queueUsageByExecutionTimeDescription;
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 notify:(CDUnknownBlockType)arg3;
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 async:(CDUnknownBlockType)arg3;
- (id)queue:(id)arg1 receivedDispatchAfter:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierAsync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchAsync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierSync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchSync:(CDUnknownBlockType)arg2;
- (Class)blockInfoClass;
- (id)recordBlockInfo:(id)arg1;
- (void)installOnQueue:(id)arg1;
- (id)init;

@end
