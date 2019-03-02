/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:02 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSDictionary;

@interface MPStoreCompletionOfferResponse : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _itemsByVariant;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
-(NSDictionary *)responseDictionary;
-(id)mediaItemsWithStoreOfferVariant:(long long)arg1 ;
-(id)initWithResponseDictionary:(id)arg1 ;
@end
