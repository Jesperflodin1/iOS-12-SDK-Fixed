//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject, PFBlockControl;
@protocol OS_dispatch_group, PFDispatchQueueExtending;

@protocol PFDispatchQueueMethods
- (id <PFDispatchQueueExtending>)extensionMatching:(_Bool (^)(id <PFDispatchQueueExtending>))arg1;
- (PFBlockControl *)dispatchCancellableGroup:(NSObject<OS_dispatch_group> *)arg1 notify:(void (^)(void))arg2;
- (PFBlockControl *)dispatchCancellableAfterInterval:(double)arg1 block:(void (^)(void))arg2;
- (PFBlockControl *)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(void (^)(void))arg2;
- (PFBlockControl *)dispatchCancellable:(void (^)(void))arg1;
- (void)dispatchBarrierAsyncWithCurrentQOS:(void (^)(void))arg1;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)arg1 block:(void (^)(void))arg2;
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(void (^)(void))arg2;
- (void)dispatchAsyncWithCurrentQOS:(void (^)(void))arg1;
- (void)dispatchAfterInterval:(double)arg1 block:(void (^)(void))arg2;
- (void)dispatchAfterDelay:(unsigned long long)arg1 block:(void (^)(void))arg2;
- (_Bool)assertNotOnQueue;
- (_Bool)assertQueueBarrier;
- (_Bool)assertOnQueue;
- (unsigned int)qualityOfService;
- (void *)getSpecific:(void *)arg1;
- (void)setSpecific:(void *)arg1 forKey:(void *)arg2;
- (void)resume;
- (void)suspend;
- (const char *)label;
- (void)dispatchGroup:(NSObject<OS_dispatch_group> *)arg1 notify:(void (^)(void))arg2;
- (void)dispatchGroup:(NSObject<OS_dispatch_group> *)arg1 async:(void (^)(void))arg2;
- (void)dispatchAfter:(unsigned long long)arg1 block:(void (^)(void))arg2;
- (void)dispatchBarrierAsync:(void (^)(void))arg1;
- (void)dispatchBarrierSync:(void (^)(void))arg1;
- (void)dispatchAsync:(void (^)(void))arg1;
- (void)dispatchSync:(void (^)(void))arg1;
@end
