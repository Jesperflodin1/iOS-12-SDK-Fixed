/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:58 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPChangePlaybackProgressCommandEvent : MPRemoteCommandEvent {

	float _playbackProgress;

}

@property (nonatomic,readonly) float playbackProgress;              //@synthesize playbackProgress=_playbackProgress - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(float)playbackProgress;
@end
