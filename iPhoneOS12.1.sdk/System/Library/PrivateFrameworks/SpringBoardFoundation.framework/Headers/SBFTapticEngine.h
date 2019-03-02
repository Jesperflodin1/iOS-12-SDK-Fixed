//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, _UITapticEngine;
@protocol OS_dispatch_queue;

@interface SBFTapticEngine : NSObject
{
    _UITapticEngine *_tapticEngine;
    NSMutableSet *_previewReasons;
    NSMutableSet *_commitReasons;
    NSMutableSet *_cancelledReasons;
    NSObject<OS_dispatch_queue> *_previewReasonsQueue;
    NSObject<OS_dispatch_queue> *_commitReasonsQueue;
    NSObject<OS_dispatch_queue> *_cancelledReasonsQueue;
    _Bool _supportsFeedbackActuation;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool supportsFeedbackActuation; // @synthesize supportsFeedbackActuation=_supportsFeedbackActuation;
- (void).cxx_destruct;
- (void)actuateFeedback:(long long)arg1;
- (void)coolDownForFeedback:(unsigned long long)arg1 withReason:(id)arg2;
- (void)warmUpForFeedback:(unsigned long long)arg1 withReason:(id)arg2;
- (id)init;

@end
