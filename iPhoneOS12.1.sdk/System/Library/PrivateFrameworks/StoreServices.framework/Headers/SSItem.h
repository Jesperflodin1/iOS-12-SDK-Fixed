/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:30 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSURLConnectionRequestDelegate.h>

@class NSDate, NSArray, NSDictionary, NSString, NSMutableArray, SSURLConnectionRequest, NSNumber, SSItemOffer, NSURL, SSItemImageCollection;

@interface SSItem : NSObject <SSURLConnectionRequestDelegate> {

	NSDate* _expirationDate;
	NSArray* _offers;
	NSDictionary* _properties;
	NSString* _tellAFriendBody;
	NSString* _tellAFriendBodyMIMEType;
	NSMutableArray* _tellAFriendHandlers;
	SSURLConnectionRequest* _tellAFriendRequest;
	NSString* _tellAFriendSubject;

}

@property (nonatomic,readonly) NSNumber * ITunesStoreIdentifier; 
@property (nonatomic,readonly) NSArray * allItemOffers; 
@property (nonatomic,readonly) SSItemOffer * defaultItemOffer; 
@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSDate * expirationDate;                                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) NSString * itemTitle; 
@property (nonatomic,readonly) NSString * itemKind; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isHighDefinition,nonatomic,readonly) BOOL highDefinition; 
@property (getter=isGameCenterEnabled,nonatomic,readonly) BOOL gameCenterEnabled; 
@property (nonatomic,readonly) NSURL * viewItemURL; 
@property (nonatomic,readonly) float averageUserRating; 
@property (nonatomic,readonly) long long numberOfUserRatings; 
@property (nonatomic,readonly) SSItemImageCollection * imageCollection; 
@property (nonatomic,readonly) NSArray * thumbnailImages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mediaKind;
-(id)bundleVersion;
-(id)podcastFeedURL;
-(SSItemOffer *)defaultItemOffer;
-(id)preOrderIdentifier;
-(id)artistIdentifier;
-(id)collectionArtistName;
-(id)collectionIndexInCollectionGroup;
-(id)episodeIdentifier;
-(id)episodeSortIdentifier;
-(id)genreIdentifier;
-(id)networkName;
-(id)numberOfCollectionsInCollectionGroup;
-(id)numberOfItemsInCollection;
-(id)podcastEpisodeGUID;
-(id)videoDetails;
-(SSItemImageCollection *)imageCollection;
-(id)rawItemDictionary;
-(id)itemOfferForIdentifier:(id)arg1 ;
-(void)urlConnectionRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)_offers;
-(id)_tellAFriendDictionary;
-(void)_finishTellAFriendLoadWithError:(id)arg1 ;
-(NSArray *)allItemOffers;
-(void)loadTellAFriendMessageWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)numberOfPrintedPages;
-(NSURL *)viewItemURL;
-(id)sendGiftURL;
-(id)viewReviewsURL;
-(id)collectionName;
-(id)collectionIdentifier;
-(id)composerName;
-(BOOL)isCompilation;
-(id)releaseDate;
-(id)seasonNumber;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(id)seriesName;
-(id)genreName;
-(NSArray *)thumbnailImages;
-(id)longDescription;
-(float)averageUserRating;
-(id)softwareType;
-(id)priceDisplay;
-(id)initWithItemDictionary:(id)arg1 ;
-(id)playableMedia;
-(id)relatedItemsForRelationType:(id)arg1 ;
-(id)tellAFriendBody;
-(id)tellAFriendBodyMIMEType;
-(id)tellAFriendBodyURL;
-(id)tellAFriendSubject;
-(id)tweetInitialText;
-(id)tweetURL;
-(BOOL)isGameCenterEnabled;
-(id)buyParameters;
-(NSString *)itemKind;
-(NSString *)artistName;
-(long long)numberOfUserRatings;
-(id)releaseDateString;
-(NSNumber *)ITunesStoreIdentifier;
-(id)contentRating;
-(BOOL)isHighDefinition;
-(id)indexInCollection;
-(void)_setExpirationDate:(id)arg1 ;
-(void)dealloc;
-(id)bundleIdentifier;
-(NSString *)description;
-(NSString *)itemTitle;
-(id)shortDescription;
-(NSDate *)expirationDate;
-(BOOL)isRestricted;
-(id)valueForProperty:(id)arg1 ;
@end
