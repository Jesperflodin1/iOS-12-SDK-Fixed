//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPCStoreContentMetadataResponse, NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPCStoreContentMetadataOperation : MPAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPCStoreContentMetadataResponse *_response;
    NSDictionary *_storeBagDictionary;
    NSArray *_storeIDs;
}

- (void).cxx_destruct;
- (void)execute;
@property(copy) NSArray *storeIDs;
@property(copy) NSDictionary *storeBagDictionary;
@property(readonly) MPCStoreContentMetadataResponse *response;
- (id)init;

@end
