/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAssistantMusicLogEvent.h>

@interface MPAssistantMusicAssetLoadLogEvent : MPAssistantMusicLogEvent {

	double _duration;

}

@property (assign,nonatomic) double duration;              //@synthesize duration=_duration - In the implementation block
-(long long)eventCode;
-(id)eventPayload;
-(void)setDuration:(double)arg1 ;
-(double)duration;
@end
