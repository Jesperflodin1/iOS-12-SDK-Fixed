//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ISFrameCurator : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    // Error parsing type: Ai, name: _nextRequestID
    NSMutableDictionary *_requestsByID;
    NSObject<OS_dispatch_queue> *_requestsByIDQueue;
}

+ (id)defaultCurator;
- (void).cxx_destruct;
- (int)_nextRequestID;
- (id)_removeRequestWithID:(int)arg1;
- (void)_storeRequest:(id)arg1 withID:(int)arg2;
- (void)cancelRequestWithID:(int)arg1;
- (int)requestBestFramesInVideo:(id)arg1 trackID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end
