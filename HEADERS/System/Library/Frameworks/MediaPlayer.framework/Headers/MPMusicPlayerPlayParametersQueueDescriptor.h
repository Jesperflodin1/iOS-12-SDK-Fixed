/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMusicPlayerQueueDescriptor.h>

@class NSArray, MPMusicPlayerPlayParameters;

@interface MPMusicPlayerPlayParametersQueueDescriptor : MPMusicPlayerQueueDescriptor {

	NSArray* _playParametersQueue;
	MPMusicPlayerPlayParameters* _startItemPlayParameters;

}

@property (nonatomic,copy) NSArray * playParametersQueue;                                        //@synthesize playParametersQueue=_playParametersQueue - In the implementation block
@property (nonatomic,retain) MPMusicPlayerPlayParameters * startItemPlayParameters;              //@synthesize startItemPlayParameters=_startItemPlayParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)playbackContext;
-(id)initWithPlayParametersQueue:(id)arg1 ;
-(void)setStartTime:(double)arg1 forItemWithPlayParameters:(id)arg2 ;
-(void)setEndTime:(double)arg1 forItemWithPlayParameters:(id)arg2 ;
-(NSArray *)playParametersQueue;
-(void)setPlayParametersQueue:(NSArray *)arg1 ;
-(MPMusicPlayerPlayParameters *)startItemPlayParameters;
-(void)setStartItemPlayParameters:(MPMusicPlayerPlayParameters *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
