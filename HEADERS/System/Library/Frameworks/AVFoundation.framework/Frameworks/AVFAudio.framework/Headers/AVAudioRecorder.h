/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:20 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioSessionParticipant.h>

@class AVAudioSession, NSURL, NSDictionary, AVAudioFormat, NSArray;

@interface AVAudioRecorder : NSObject <AVAudioSessionParticipant> {

	void* _impl;

}

@property (assign,nonatomic) int processToTap; 
@property (assign,nonatomic) BOOL instantaneousMetering; 
@property (getter=isRecording,readonly) BOOL recording; 
@property (readonly) NSURL * url; 
@property (readonly) NSDictionary * settings; 
@property (readonly) AVAudioFormat * format; 
@property (assign) id<AVAudioRecorderDelegate> delegate; 
@property (readonly) double currentTime; 
@property (readonly) double deviceCurrentTime; 
@property (getter=isMeteringEnabled) BOOL meteringEnabled; 
@property (nonatomic,copy) NSArray * channelAssignments; 
@property (retain) AVAudioSession * audioSession; 
-(void)finishedRecording;
-(BOOL)isMeteringEnabled;
-(NSArray *)channelAssignments;
-(void)setChannelAssignments:(NSArray *)arg1 ;
-(void)privRemoveSessionPropertyListeners;
-(void)privCommonCleanup;
-(id)initWithURL:(id)arg1 settings:(id)arg2 error:(id*)arg3 ;
-(void)endInterruptionWithFlags;
-(id)initWithURL:(id)arg1 format:(id)arg2 error:(id*)arg3 ;
-(BOOL)prepareToRecord;
-(BOOL)recordAtTime:(double)arg1 ;
-(BOOL)recordForDuration:(double)arg1 ;
-(BOOL)recordAtTime:(double)arg1 forDuration:(double)arg2 ;
-(BOOL)deleteRecording;
-(void)setProcessToTap:(int)arg1 ;
-(int)processToTap;
-(BOOL)instantaneousMetering;
-(void)setInstantaneousMetering:(BOOL)arg1 ;
-(void)beginInterruption;
-(void)endInterruption;
-(AudioRecorderImpl*)impl;
-(void)setAudioSession:(AVAudioSession *)arg1 ;
-(AVAudioSession *)audioSession;
-(BOOL)record;
-(BOOL)isRecording;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(double)deviceCurrentTime;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(void)finalize;
-(void)handleInterruption:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<AVAudioRecorderDelegate>)arg1 ;
-(id<AVAudioRecorderDelegate>)delegate;
-(void)stop;
-(NSDictionary *)settings;
-(NSURL *)url;
-(double)currentTime;
-(AVAudioFormat *)format;
-(id)baseInit;
-(void)pause;
@end
