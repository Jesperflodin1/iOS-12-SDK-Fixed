/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, MPNowPlayingInfoLyricsItemToken;

@interface MPNowPlayingInfoLyricsEvent : NSObject {

	void* _mediaRemoteLyricsEvent;

}

@property (nonatomic,readonly) void* mediaRemoteLyricsEvent;                         //@synthesize mediaRemoteLyricsEvent=_mediaRemoteLyricsEvent - In the implementation block
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) MPNowPlayingInfoLyricsItemToken * token; 
-(id)initWithMediaRemoteLyricsEvent:(void*)arg1 ;
-(void*)mediaRemoteLyricsEvent;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)dealloc;
-(MPNowPlayingInfoLyricsItemToken *)token;
@end
