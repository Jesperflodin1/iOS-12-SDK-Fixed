//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GKRWLock, GKSessionInternal, NSMutableArray;

@interface GKVoiceChatSessionListener : NSObject
{
    NSMutableArray *_conferenceList;
    GKSessionInternal *_gkSession;
    GKRWLock *_rwlock;
}

- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (void)receivedNewVoiceChatOOBMessage:(id)arg1 fromPeerID:(id)arg2;
- (id)currentSessions;
- (void)removeSession:(id)arg1;
- (void)registerNewGKVoiceChatSession:(id)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

@end
