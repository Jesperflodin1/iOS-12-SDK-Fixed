/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:39 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache, MKTransitArtworkManager;

@interface MKArtworkDataSourceCache : NSObject {

	NSCache* _artworkImageCache;
	MKTransitArtworkManager* _artworkManager;

}

@property (nonatomic,readonly) MKTransitArtworkManager * artworkManager;              //@synthesize artworkManager=_artworkManager - In the implementation block
+(id)sharedInstance;
-(id)initWithArtworkManager:(id)arg1 ;
-(void)_shieldPackDidUpdate;
-(id)imageForSizedArtwork:(id)arg1 scale:(double)arg2 ;
-(id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 ;
-(id)imageForArtwork:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 widthPaddingMultiple:(double)arg5 ;
-(id)_lookupArtworkInCacheWithKey:(id)arg1 ;
-(void)_setArtworkImageInCache:(id)arg1 forKey:(id)arg2 ;
-(MKTransitArtworkManager *)artworkManager;
-(void)purge;
@end
