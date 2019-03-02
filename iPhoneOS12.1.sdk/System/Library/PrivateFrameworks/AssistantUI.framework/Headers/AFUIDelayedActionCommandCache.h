//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AFUIDelayedActionCommandCache : NSObject
{
    NSMutableDictionary *_delayedActionTimersByIdentifier;
    NSMutableDictionary *_dismissalDelayedActionCommandsByIdentifier;
}

- (void).cxx_destruct;
- (void)_performCommandsWithDelayedActionCommand:(id)arg1;
- (id)_commandHandler;
- (void)performDismissalCommands;
- (void)_invalidateDelayedActionTimer:(id)arg1 withKey:(id)arg2;
- (void)invalidatePendingCommands;
- (void)_performDelayedActionCommandTimerAction:(id)arg1;
- (void)cancelDelayedActionWithDelayedActionCancelCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enqueueDelayedActionCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end
