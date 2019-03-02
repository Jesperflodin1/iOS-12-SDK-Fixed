/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class MPModelAlbum, MPModelPlaylist, MPModelForYouRecommendationGroup;

@interface MPModelForYouRecommendationItem : MPModelObject

@property (assign,nonatomic) unsigned long long itemType; 
@property (nonatomic,retain) MPModelAlbum * album; 
@property (nonatomic,retain) MPModelPlaylist * playlist; 
@property (assign,nonatomic,__weak) MPModelForYouRecommendationGroup * parentGroup; 
@property (assign,nonatomic) long long subgroupIndex; 
@property (assign,getter=isBackedByStoreItemMetadata,nonatomic) BOOL backedByStoreItemMetadata; 
@property (nonatomic,readonly) MPModelForYouRecommendationGroup * subgroup; 
+(id)__album_KEY;
+(id)__playlist_KEY;
+(id)requiredStoreLibraryPersonalizationProperties;
+(id)__itemType_KEY;
+(id)__backedByStoreItemMetadata_KEY;
+(id)__parentGroup_KEY;
+(id)__subgroupIndex_KEY;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)personalizationScopedPropertiesForProperties:(id)arg1 ;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1 ;
-(MPModelForYouRecommendationGroup *)subgroup;
@end
