/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelSongPlaybackItemMetadata.h>

@class MPModelGenericObject, MPModelPlaylistEntry;

@interface MPModelPlaylistEntrySongPlaybackItemMetadata : MPModelSongPlaybackItemMetadata {

	MPModelGenericObject* _modelGenericObject;
	MPModelPlaylistEntry* _playlistEntry;

}

@property (nonatomic,retain) MPModelPlaylistEntry * playlistEntry;              //@synthesize playlistEntry=_playlistEntry - In the implementation block
+(id)requiredProperties;
-(id)mqf_playbackItemMetadataModelObject;
-(id)song;
-(void)setSong:(id)arg1 ;
-(id)modelGenericObject;
-(void)_invalidateModelObjectPlaybackItemMetadata;
-(MPModelPlaylistEntry *)playlistEntry;
-(void)setPlaylistEntry:(MPModelPlaylistEntry *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

