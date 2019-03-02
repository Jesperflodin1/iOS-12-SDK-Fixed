//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoFoundation/NSObject-Protocol.h>

@class PFDispatchQueue;

@protocol PFBlockControlCommon <NSObject>
- (_Bool)blockWasCanceled;
- (_Bool)blockHasFinished;
- (_Bool)blockHasStarted;
- (void)waitForBlock;
- (void)notifyOnQueue:(PFDispatchQueue *)arg1 whenFinished:(void (^)(void))arg2;
@end
