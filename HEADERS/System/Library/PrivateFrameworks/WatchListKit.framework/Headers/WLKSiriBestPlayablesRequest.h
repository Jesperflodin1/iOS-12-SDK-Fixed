//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchListKit/WLKRequest.h>

@class NSArray;

@interface WLKSiriBestPlayablesRequest : WLKRequest
{
    NSArray *_statsIDs;
}

@property(readonly, copy, nonatomic) NSArray *statsIDs; // @synthesize statsIDs=_statsIDs;
- (void).cxx_destruct;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStatsIDs:(id)arg1;
- (id)init;

@end
