//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetExplorer/NSProgressReporting-Protocol.h>

@protocol PUDisplayAsset;

@protocol PUReviewAssetProviderRequest <NSProgressReporting>
@property(readonly, nonatomic) id <PUDisplayAsset> sourceAsset;
- (void)cancelReviewAssetRequest;
- (void)requestReviewAssetWithCompletionHandler:(void (^)(_Bool, _Bool, NSError *, PUReviewAsset *))arg1;
@end
