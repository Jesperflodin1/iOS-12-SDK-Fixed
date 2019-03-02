//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDisplayLayoutMonitor, MRPlaybackQueueSubscriptionController, MSVTimer, NSArray, NSData, NSMutableDictionary, _MRNowPlayingPlayerPathProtobuf, _MRNowPlayingPlayerProtobuf, _MRPlaybackQueueProtobuf, _MRSetStateMessageProtobuf;
@protocol MRDNowPlayingPlayerClientDelegate, OS_dispatch_queue;

@interface MRDNowPlayingPlayerClient : NSObject
{
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSArray *_supportedRemoteControlCommands;
    NSData *_supportedRemoteControlCommandsData;
    _MRPlaybackQueueProtobuf *_playbackQueue;
    unsigned long long _playbackQueueCapabilities;
    unsigned int _playbackState;
    unsigned int _inferredPlaybackState;
    NSMutableDictionary *_playbackStateHistory;
    MSVTimer *_playbackTimer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_inFlightArtworkRequests;
    _Bool _pushStateIsPlaying;
    unsigned int _pushStatePlaybackState;
    MRPlaybackQueueSubscriptionController *_subscriptionController;
    id <MRDNowPlayingPlayerClientDelegate> _delegate;
    _MRNowPlayingPlayerProtobuf *_pushStatePlayer;
    FBSDisplayLayoutMonitor *_displayMonitor;
}

@property(retain, nonatomic) FBSDisplayLayoutMonitor *displayMonitor; // @synthesize displayMonitor=_displayMonitor;
@property(retain, nonatomic) _MRNowPlayingPlayerProtobuf *pushStatePlayer; // @synthesize pushStatePlayer=_pushStatePlayer;
@property(nonatomic) unsigned int pushStatePlaybackState; // @synthesize pushStatePlaybackState=_pushStatePlaybackState;
@property(nonatomic) _Bool pushStateIsPlaying; // @synthesize pushStateIsPlaying=_pushStateIsPlaying;
@property(nonatomic) __weak id <MRDNowPlayingPlayerClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MRPlaybackQueueSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(nonatomic) unsigned long long playbackQueueCapabilities; // @synthesize playbackQueueCapabilities=_playbackQueueCapabilities;
- (void).cxx_destruct;
- (void)_registerCallbacksForPlayerPath:(id)arg1;
- (void)_onQueue_requestArtworkForContentItems:(id)arg1;
- (void)requestArtworkForContentItems:(id)arg1;
- (void)_onQueue_popState;
- (void)_onQueue_pushState;
- (void)_onQueue_playbackQueueContentItemsArtworkDidChange:(id)arg1;
- (void)_onQueue_playbackQueueContentItemsDidChange:(id)arg1;
- (void)_onQueue_playbackQueueCapabilitiesDidChange:(unsigned long long)arg1;
- (void)_onQueue_playbackQueueDidChange:(id)arg1;
- (void)_onQueue_supportedCommandsDidChange:(id)arg1;
- (void)_onQueue_playbackStateDidChanged:(unsigned int)arg1;
- (void)_onQueue_isPlayingDidChange:(_Bool)arg1;
- (id)snapshotForPlaybackState:(unsigned int)arg1;
- (void)artworkUpdatedForContentItems:(id)arg1;
- (void)_onQueue_updatePlaybackQueueWithItem:(id)arg1 notifyObservers:(_Bool)arg2;
- (void)_onQueue_updatePlaybackQueue:(id)arg1 notifyObservers:(_Bool)arg2;
- (void)updatePlaybackQueue:(id)arg1 notifyObservers:(_Bool)arg2;
- (void)updatePlaybackQueue:(id)arg1;
- (void)updatePlayer:(id)arg1;
- (void)updateClient:(id)arg1;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property(readonly, nonatomic) _MRSetStateMessageProtobuf *nowPlayingState;
@property(readonly, nonatomic) _Bool hasNowPlayingData;
- (_Bool)_onQueue_isPlaying;
@property(readonly, nonatomic) _Bool isPlaying;
- (unsigned int)_onQueue_playbackState;
@property(nonatomic) unsigned int playbackState;
@property(nonatomic) unsigned int inferredPlaybackState;
@property(copy, nonatomic) _MRPlaybackQueueProtobuf *playbackQueue;
@property(copy, nonatomic) NSData *supportedRemoteControlCommandsData;
- (id)_onQueue_supportedRemoteControlCommands;
@property(readonly, nonatomic) NSArray *supportedRemoteControlCommands;
@property(readonly, nonatomic) _MRNowPlayingPlayerProtobuf *player;
- (id)description;
- (id)initWithPlayerPath:(id)arg1;

@end
