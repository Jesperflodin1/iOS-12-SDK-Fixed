//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OpusFoundation/OFUIView.h>

#import <OpusKit/CAAnimationDelegate-Protocol.h>
#import <OpusKit/OKAudioPlaylistDelegate-Protocol.h>
#import <OpusKit/UIGestureRecognizerDelegate-Protocol.h>

@class CAShapeLayer, NSOperationQueue, NSString, OFUIButton, OKAudioPlaylist, OKCircleGestureRecognizer, OKPresentationViewAllGestureRecognizer, UIGestureRecognizer, UIImageView, UILabel;
@protocol OKClickWheelViewDelegate;

@interface OKClickWheelView : OFUIView <UIGestureRecognizerDelegate, OKAudioPlaylistDelegate, CAAnimationDelegate>
{
    OFUIView *_containerView;
    OFUIButton *_playButton;
    _Bool _isAnimating;
    UIGestureRecognizer *_tapGestureRecognizer;
    OKCircleGestureRecognizer *_circleGestureRecognizer;
    OKPresentationViewAllGestureRecognizer *_allGestureRecognizer;
    _Bool _delegateRespondToDidCircleGesture;
    _Bool _delegateRespondWillAppear;
    _Bool _delegateRespondWillDisappear;
    _Bool _delegateRespondShouldAppear;
    CAShapeLayer *_volumeLayer;
    CAShapeLayer *_progressLayer;
    OFUIView *_musicInformationView;
    UIImageView *_thumbnailMusic;
    UILabel *_titleMusic;
    UILabel *_artisteName;
    UILabel *_beatsSentence;
    UIImageView *_chevronView;
    NSOperationQueue *_fetchInformationsQueue;
    _Bool _isInformationLoaded;
    OFUIButton *_closeButton;
    _Bool _wantsProgress;
    id <OKClickWheelViewDelegate> _delegate;
    double _volume;
    double _progress;
    OKAudioPlaylist *_audioPlaylist;
}

@property(nonatomic) _Bool wantsProgress; // @synthesize wantsProgress=_wantsProgress;
@property(nonatomic) OKAudioPlaylist *audioPlaylist; // @synthesize audioPlaylist=_audioPlaylist;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) id <OKClickWheelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)buttonPressed:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (void)handleAllGestures:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)activateProgress:(id)arg1;
- (void)notifyProgress:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)audioFinishedPlayingWithAVAsset:(id)arg1;
- (void)audioStartedPlayingWithAVAsset:(id)arg1;
- (void)hide;
- (void)show;
- (_Bool)isPresented;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)animationForKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 duration:(double)arg4 timmingFunctionName:(id)arg5 delegate:(id)arg6;
- (void)_setupLayerShadowForLabel:(id)arg1;
- (void)dealloc;
- (void)initGesture;
- (void)initButtons;
- (void)updateMusicInformation:(id)arg1;
- (void)initAlbumInformationView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithContainerView:(id)arg1 andAuthoringGuidelines:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
