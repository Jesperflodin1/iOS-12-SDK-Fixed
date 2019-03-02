//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClockTimerSnapshotMutating-Protocol.h>

@class AFClockTimerSnapshot, NSDate, NSDictionary, NSOrderedSet, NSString;

@interface _AFClockTimerSnapshotMutation : NSObject <AFClockTimerSnapshotMutating>
{
    AFClockTimerSnapshot *_baseModel;
    unsigned long long _generation;
    NSDate *_date;
    NSDictionary *_timersByID;
    NSOrderedSet *_notifiedFiringTimerIDs;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasGeneration:1;
        unsigned int hasDate:1;
        unsigned int hasTimersByID:1;
        unsigned int hasNotifiedFiringTimerIDs:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setNotifiedFiringTimerIDs:(id)arg1;
- (void)setTimersByID:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setGeneration:(unsigned long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
