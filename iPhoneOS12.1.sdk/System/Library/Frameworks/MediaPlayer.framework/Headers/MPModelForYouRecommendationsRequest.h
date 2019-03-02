/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:58 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class NSURL;

@interface MPModelForYouRecommendationsRequest : MPStoreModelRequest {

	long long _filteringPolicy;
	NSURL* _customForYouURL;

}

@property (assign,nonatomic) long long filteringPolicy;              //@synthesize filteringPolicy=_filteringPolicy - In the implementation block
@property (nonatomic,copy) NSURL * customForYouURL;                  //@synthesize customForYouURL=_customForYouURL - In the implementation block
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
+(BOOL)supportsSecureCoding;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(long long)filteringPolicy;
-(void)setFilteringPolicy:(long long)arg1 ;
-(NSURL *)customForYouURL;
-(void)setCustomForYouURL:(NSURL *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
