//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBDDomainServiceHandler.h"

#import "SBCDomainValueServiceProtocol-Protocol.h"

@class NSString, SBKUniversalPlaybackPositionStore;

@interface SBDDomainValueServiceHandler : SBDDomainServiceHandler <SBCDomainValueServiceProtocol>
{
    SBKUniversalPlaybackPositionStore *_cloudStore;
}

@property(readonly, nonatomic) SBKUniversalPlaybackPositionStore *cloudStore; // @synthesize cloudStore=_cloudStore;
- (void).cxx_destruct;
- (oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithDomain:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
