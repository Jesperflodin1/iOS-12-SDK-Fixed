//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class NSDictionary;

@protocol CSVoiceTriggerDelegate <NSObject>
- (void)voiceTriggerDidDetectKeyword:(NSDictionary *)arg1;

@optional
- (void)keywordDetectorDidDetectKeyword;
- (void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1;
- (void)voiceTriggerDidDetectSpeakerReject:(NSDictionary *)arg1;
- (void)voiceTriggerDidDetectNearMiss:(NSDictionary *)arg1;
@end
