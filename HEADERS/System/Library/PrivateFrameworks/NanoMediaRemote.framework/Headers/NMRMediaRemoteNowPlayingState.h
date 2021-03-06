/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <NanoMediaRemote/NMRNowPlayingState.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSDate, NSString, NSData, MPArtworkCatalog;

@interface NMRMediaRemoteNowPlayingState : NMRNowPlayingState <NSCopying> {

	BOOL _usingLegacySupportedCommandsFallback;
	BOOL _firstPartyMusicApp;
	NSNumber* _nextTrackCommandEnabled;
	NSNumber* _previousTrackCommandEnabled;
	NSNumber* _actualPlaybackRate;
	BOOL _explicitTrack;
	BOOL _advertisement;
	BOOL _alwaysLive;
	BOOL _repeatModeCommandSupported;
	BOOL _shuffleModeCommandSupported;
	BOOL _playbackRateCommandSupported;
	BOOL _likeCommandSupported;
	BOOL _likeCommandEnabled;
	BOOL _likedActive;
	BOOL _banCommandSupported;
	BOOL _banCommandEnabled;
	BOOL _bannedActive;
	BOOL _bookmarkCommandSupported;
	BOOL _bookmarkCommandEnabled;
	BOOL _bookmarkedActive;
	BOOL _addToLibraryCommandSupported;
	BOOL _addToLibraryCommandEnabled;
	BOOL _addToLibraryActive;
	BOOL _skipForwardCommandEnabled;
	BOOL _skipBackwardCommandEnabled;
	unsigned _playbackState;
	float _preferredPlaybackRate;
	int _repeatMode;
	int _shuffleMode;
	double _duration;
	NSDate* _timestamp;
	double _elapsedTimeAtLastUpdate;
	NSNumber* _itemPersistentID;
	NSNumber* _itemCompanionPersistentID;
	NSNumber* _itemAlbumPersistentID;
	NSNumber* _storeAdamID;
	NSString* _title;
	NSString* _artist;
	NSString* _album;
	NSString* _radioStationName;
	NSNumber* _radioStationIdentifier;
	NSString* _radioStationHash;
	NSData* _artworkImageData;
	MPArtworkCatalog* _artworkCatalog;
	NSString* _applicationDisplayName;
	NSString* _applicationBundleIdentifier;
	NSData* _applicationIconImageData;
	long long _likeCommandPresentationStyle;
	NSString* _localizedLikeTitle;
	long long _banCommandPresentationStyle;
	NSString* _localizedBanTitle;
	NSString* _localizedBookmarkTitle;
	double _fastForwardTimeInterval;
	double _rewindTimeInterval;

}

@property (nonatomic,copy) NSDate * timestamp;                                                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double duration;                                                                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) float playbackRate; 
@property (assign,nonatomic) float preferredPlaybackRate;                                                          //@synthesize preferredPlaybackRate=_preferredPlaybackRate - In the implementation block
@property (assign,nonatomic) unsigned playbackState;                                                               //@synthesize playbackState=_playbackState - In the implementation block
@property (assign,nonatomic) double elapsedTimeAtLastUpdate;                                                       //@synthesize elapsedTimeAtLastUpdate=_elapsedTimeAtLastUpdate - In the implementation block
@property (nonatomic,copy) NSNumber * itemPersistentID;                                                            //@synthesize itemPersistentID=_itemPersistentID - In the implementation block
@property (nonatomic,copy) NSNumber * itemCompanionPersistentID;                                                   //@synthesize itemCompanionPersistentID=_itemCompanionPersistentID - In the implementation block
@property (nonatomic,copy) NSNumber * itemAlbumPersistentID;                                                       //@synthesize itemAlbumPersistentID=_itemAlbumPersistentID - In the implementation block
@property (nonatomic,copy) NSNumber * storeAdamID;                                                                 //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * artist;                                                                      //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy) NSString * album;                                                                       //@synthesize album=_album - In the implementation block
@property (assign,getter=isExplicitTrack,nonatomic) BOOL explicitTrack;                                            //@synthesize explicitTrack=_explicitTrack - In the implementation block
@property (nonatomic,copy) NSString * radioStationName;                                                            //@synthesize radioStationName=_radioStationName - In the implementation block
@property (nonatomic,copy) NSNumber * radioStationIdentifier;                                                      //@synthesize radioStationIdentifier=_radioStationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * radioStationHash;                                                            //@synthesize radioStationHash=_radioStationHash - In the implementation block
@property (assign,getter=isAdvertisement,nonatomic) BOOL advertisement;                                            //@synthesize advertisement=_advertisement - In the implementation block
@property (assign,getter=isAlwaysLive,nonatomic) BOOL alwaysLive;                                                  //@synthesize alwaysLive=_alwaysLive - In the implementation block
@property (nonatomic,retain) NSData * artworkImageData;                                                            //@synthesize artworkImageData=_artworkImageData - In the implementation block
@property (nonatomic,copy) NSString * applicationDisplayName;                                                      //@synthesize applicationDisplayName=_applicationDisplayName - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifier;                                                 //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSData * applicationIconImageData;                                                    //@synthesize applicationIconImageData=_applicationIconImageData - In the implementation block
@property (assign,getter=isRepeatModeCommandSupported,nonatomic) BOOL repeatModeCommandSupported;                  //@synthesize repeatModeCommandSupported=_repeatModeCommandSupported - In the implementation block
@property (assign,nonatomic) int repeatMode;                                                                       //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,getter=isShuffleModeCommandSupported,nonatomic) BOOL shuffleModeCommandSupported;                //@synthesize shuffleModeCommandSupported=_shuffleModeCommandSupported - In the implementation block
@property (assign,nonatomic) int shuffleMode;                                                                      //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (assign,getter=isPlaybackRateCommandSupported,nonatomic) BOOL playbackRateCommandSupported;              //@synthesize playbackRateCommandSupported=_playbackRateCommandSupported - In the implementation block
@property (assign,getter=isLikeCommandSupported,nonatomic) BOOL likeCommandSupported;                              //@synthesize likeCommandSupported=_likeCommandSupported - In the implementation block
@property (assign,getter=isLikeCommandEnabled,nonatomic) BOOL likeCommandEnabled;                                  //@synthesize likeCommandEnabled=_likeCommandEnabled - In the implementation block
@property (assign,getter=isLikedActive,nonatomic) BOOL likedActive;                                                //@synthesize likedActive=_likedActive - In the implementation block
@property (nonatomic,copy) NSString * localizedLikeTitle;                                                          //@synthesize localizedLikeTitle=_localizedLikeTitle - In the implementation block
@property (assign,nonatomic) long long likeCommandPresentationStyle;                                               //@synthesize likeCommandPresentationStyle=_likeCommandPresentationStyle - In the implementation block
@property (assign,getter=isBanCommandSupported,nonatomic) BOOL banCommandSupported;                                //@synthesize banCommandSupported=_banCommandSupported - In the implementation block
@property (assign,getter=isBanCommandEnabled,nonatomic) BOOL banCommandEnabled;                                    //@synthesize banCommandEnabled=_banCommandEnabled - In the implementation block
@property (assign,getter=isBannedActive,nonatomic) BOOL bannedActive;                                              //@synthesize bannedActive=_bannedActive - In the implementation block
@property (nonatomic,copy) NSString * localizedBanTitle;                                                           //@synthesize localizedBanTitle=_localizedBanTitle - In the implementation block
@property (assign,nonatomic) long long banCommandPresentationStyle;                                                //@synthesize banCommandPresentationStyle=_banCommandPresentationStyle - In the implementation block
@property (assign,getter=isBookmarkCommandSupported,nonatomic) BOOL bookmarkCommandSupported;                      //@synthesize bookmarkCommandSupported=_bookmarkCommandSupported - In the implementation block
@property (assign,getter=isBookmarkCommandEnabled,nonatomic) BOOL bookmarkCommandEnabled;                          //@synthesize bookmarkCommandEnabled=_bookmarkCommandEnabled - In the implementation block
@property (assign,getter=isBookmarkedActive,nonatomic) BOOL bookmarkedActive;                                      //@synthesize bookmarkedActive=_bookmarkedActive - In the implementation block
@property (nonatomic,copy) NSString * localizedBookmarkTitle;                                                      //@synthesize localizedBookmarkTitle=_localizedBookmarkTitle - In the implementation block
@property (assign,getter=isAddToLibraryCommandSupported,nonatomic) BOOL addToLibraryCommandSupported;              //@synthesize addToLibraryCommandSupported=_addToLibraryCommandSupported - In the implementation block
@property (assign,getter=isAddToLibraryCommandEnabled,nonatomic) BOOL addToLibraryCommandEnabled;                  //@synthesize addToLibraryCommandEnabled=_addToLibraryCommandEnabled - In the implementation block
@property (assign,getter=isAddToLibraryActive,nonatomic) BOOL addToLibraryActive;                                  //@synthesize addToLibraryActive=_addToLibraryActive - In the implementation block
@property (nonatomic,retain) NSNumber * nextTrackCommandEnabled;                                                   //@synthesize nextTrackCommandEnabled=_nextTrackCommandEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * previousTrackCommandEnabled;                                               //@synthesize previousTrackCommandEnabled=_previousTrackCommandEnabled - In the implementation block
@property (assign,getter=isSkipForwardCommandEnabled,nonatomic) BOOL skipForwardCommandEnabled;                    //@synthesize skipForwardCommandEnabled=_skipForwardCommandEnabled - In the implementation block
@property (assign,getter=isSkipBackwardCommandEnabled,nonatomic) BOOL skipBackwardCommandEnabled;                  //@synthesize skipBackwardCommandEnabled=_skipBackwardCommandEnabled - In the implementation block
@property (assign,nonatomic) double fastForwardTimeInterval;                                                       //@synthesize fastForwardTimeInterval=_fastForwardTimeInterval - In the implementation block
@property (assign,nonatomic) double rewindTimeInterval;                                                            //@synthesize rewindTimeInterval=_rewindTimeInterval - In the implementation block
-(void)setRadioStationIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)radioStationIdentifier;
-(BOOL)isAdvertisement;
-(void)setPreferredPlaybackRate:(float)arg1 ;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSNumber *)itemPersistentID;
-(void)setItemPersistentID:(NSNumber *)arg1 ;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(void)setPlaybackRate:(float)arg1 ;
-(BOOL)isExplicitTrack;
-(void)setRadioStationName:(NSString *)arg1 ;
-(NSNumber *)storeAdamID;
-(id)artworkCatalog;
-(void)setStoreAdamID:(NSNumber *)arg1 ;
-(float)playbackRate;
-(NSString *)radioStationHash;
-(void)setShuffleMode:(int)arg1 ;
-(float)preferredPlaybackRate;
-(int)shuffleMode;
-(void)setExplicitTrack:(BOOL)arg1 ;
-(NSString *)radioStationName;
-(void)setRadioStationHash:(NSString *)arg1 ;
-(NSString *)album;
-(void)setAlbum:(NSString *)arg1 ;
-(BOOL)isAlwaysLive;
-(NSString *)applicationBundleIdentifier;
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(NSString *)applicationDisplayName;
-(unsigned)playbackState;
-(void)setPlaybackState:(unsigned)arg1 ;
-(void)setAdvertisement:(BOOL)arg1 ;
-(NSNumber *)itemCompanionPersistentID;
-(NSNumber *)itemAlbumPersistentID;
-(NSData *)artworkImageData;
-(NSData *)applicationIconImageData;
-(BOOL)isRepeatModeCommandSupported;
-(BOOL)isShuffleModeCommandSupported;
-(BOOL)isPlaybackRateCommandSupported;
-(BOOL)isLikeCommandSupported;
-(BOOL)isLikeCommandEnabled;
-(BOOL)isLikedActive;
-(NSString *)localizedLikeTitle;
-(long long)likeCommandPresentationStyle;
-(BOOL)isBanCommandSupported;
-(BOOL)isBanCommandEnabled;
-(BOOL)isBannedActive;
-(NSString *)localizedBanTitle;
-(long long)banCommandPresentationStyle;
-(BOOL)isBookmarkCommandSupported;
-(BOOL)isBookmarkCommandEnabled;
-(BOOL)isBookmarkedActive;
-(NSString *)localizedBookmarkTitle;
-(BOOL)isAddToLibraryCommandSupported;
-(BOOL)isAddToLibraryCommandEnabled;
-(BOOL)isAddToLibraryActive;
-(NSNumber *)nextTrackCommandEnabled;
-(NSNumber *)previousTrackCommandEnabled;
-(BOOL)isSkipForwardCommandEnabled;
-(BOOL)isSkipBackwardCommandEnabled;
-(double)fastForwardTimeInterval;
-(double)rewindTimeInterval;
-(double)elapsedTimeAtLastUpdate;
-(BOOL)_updateItemPersistentIDIfNecessary:(id)arg1 ;
-(BOOL)_updateItemCompanionPersistentIDIfNecessary:(id)arg1 ;
-(BOOL)_updateItemAlbumPersistentIDIfNecessary:(id)arg1 ;
-(BOOL)_updateStoreAdamIDIfNecessary:(id)arg1 ;
-(BOOL)_updateTitleIfNecessary:(id)arg1 ;
-(BOOL)_updateArtistIfNecessary:(id)arg1 ;
-(BOOL)_updateAlbumIfNecessary:(id)arg1 ;
-(BOOL)_updateExplicitTrackIfNecessary:(BOOL)arg1 ;
-(BOOL)_updateArtworkCatalogIfNecesary:(id)arg1 ;
-(BOOL)_updateRadioStationNameIfNecessary:(id)arg1 ;
-(BOOL)_updateRadioStationIdentifierIfNecessary:(id)arg1 ;
-(BOOL)_updateRadioStationHashIfNecessary:(id)arg1 ;
-(BOOL)_updateAdvertisementIfNecessary:(BOOL)arg1 ;
-(BOOL)_updateAlwaysLiveIfNecessary:(BOOL)arg1 ;
-(BOOL)_updateArtworkImageDataIfNecessary:(id)arg1 ;
-(BOOL)_updateApplicationIconImageDataIfNecessary:(id)arg1 ;
-(BOOL)_updateFirstPartyMusicAppIfNecessary:(BOOL)arg1 ;
-(BOOL)_updateLikeCommandSupportedIfNecessary:(BOOL)arg1 ;
-(BOOL)_updateLikeCommandEnabledIfNecessary:(BOOL)arg1 ;
-(BOOL)_updateLikedActiveIfNecessary:(BOOL)arg1 ;
-(BOOL)_updateLikeCommandPresentationStyleIfNecessary:(long long)arg1 ;
-(BOOL)_updateBanCommandSupportedIfNecessary:(BOOL)arg1 ;
-(BOOL)_updateBanCommandEnabledIfNecessary:(BOOL)arg1 ;
-(BOOL)_updateBannedActiveIfNecessary:(BOOL)arg1 ;
-(BOOL)_updateBanCommandPresentationStyleIfNecessary:(long long)arg1 ;
-(BOOL)_updateBookmarkCommandSupportedIfNecessary:(BOOL)arg1 ;
-(BOOL)_updateBookmarkCommandEnabledIfNecessary:(BOOL)arg1 ;
-(BOOL)_updateBookmarkedActiveIfNecessary:(BOOL)arg1 ;
-(BOOL)_updateFastForwardTimeIntervalIfNecessary:(double)arg1 ;
-(BOOL)_updateRewindTimeIntervalIfNecessary:(double)arg1 ;
-(BOOL)_updateAddToLibraryCommandSupportedIfNecessary:(BOOL)arg1 ;
-(BOOL)_updateAddToLibraryCommandEnabledIfNecessary:(BOOL)arg1 ;
-(BOOL)_updateAddToLibraryActiveIfNecessary:(BOOL)arg1 ;
-(void)setElapsedTimeAtLastUpdate:(double)arg1 ;
-(BOOL)_nowPlayingInfoIncludesLegacySupportedCommandsInfo:(id)arg1 ;
-(void)applyMediaRemoteNowPlayingInfo:(id)arg1 artwork:(id)arg2 generalInfoChanged:(BOOL*)arg3 elapsedTimeChanged:(BOOL*)arg4 playbackStateChanged:(BOOL*)arg5 applicationInfoChanged:(BOOL*)arg6 supportedCommandsChanged:(BOOL*)arg7 timestampChanged:(BOOL*)arg8 ;
-(void)setItemCompanionPersistentID:(NSNumber *)arg1 ;
-(void)setItemAlbumPersistentID:(NSNumber *)arg1 ;
-(void)setAlwaysLive:(BOOL)arg1 ;
-(void)setArtworkImageData:(NSData *)arg1 ;
-(void)setApplicationIconImageData:(NSData *)arg1 ;
-(void)setFirstPartyMusicApp:(BOOL)arg1 ;
-(void)setLikeCommandSupported:(BOOL)arg1 ;
-(void)setLikeCommandEnabled:(BOOL)arg1 ;
-(void)setLikedActive:(BOOL)arg1 ;
-(void)setLikeCommandPresentationStyle:(long long)arg1 ;
-(void)setBanCommandSupported:(BOOL)arg1 ;
-(void)setBanCommandEnabled:(BOOL)arg1 ;
-(void)setBannedActive:(BOOL)arg1 ;
-(void)setBanCommandPresentationStyle:(long long)arg1 ;
-(void)setBookmarkCommandSupported:(BOOL)arg1 ;
-(void)setBookmarkCommandEnabled:(BOOL)arg1 ;
-(void)setBookmarkedActive:(BOOL)arg1 ;
-(void)setFastForwardTimeInterval:(double)arg1 ;
-(void)setRewindTimeInterval:(double)arg1 ;
-(void)setAddToLibraryCommandSupported:(BOOL)arg1 ;
-(void)setAddToLibraryCommandEnabled:(BOOL)arg1 ;
-(void)setAddToLibraryActive:(BOOL)arg1 ;
-(void)applyMediaRemoteNowPlayingInfo:(id)arg1 ;
-(BOOL)applyMediaRemoteSupportedCommands:(id)arg1 ;
-(void)setApplicationDisplayName:(NSString *)arg1 ;
-(void)setRepeatModeCommandSupported:(BOOL)arg1 ;
-(void)setShuffleModeCommandSupported:(BOOL)arg1 ;
-(void)setPlaybackRateCommandSupported:(BOOL)arg1 ;
-(void)setLocalizedLikeTitle:(NSString *)arg1 ;
-(void)setLocalizedBanTitle:(NSString *)arg1 ;
-(void)setLocalizedBookmarkTitle:(NSString *)arg1 ;
-(void)setNextTrackCommandEnabled:(NSNumber *)arg1 ;
-(void)setPreviousTrackCommandEnabled:(NSNumber *)arg1 ;
-(void)setSkipForwardCommandEnabled:(BOOL)arg1 ;
-(void)setSkipBackwardCommandEnabled:(BOOL)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(double)arg1 ;
-(NSDate *)timestamp;
-(double)duration;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setArtworkCatalog:(id)arg1 ;
@end

