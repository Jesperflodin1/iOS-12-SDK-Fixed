/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSPurchasableItem.h>

@interface SSPurchasableAppItem : SSPurchasableItem
+(id)allPropertyKeys;
+(id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(BOOL)arg5 ;
+(id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(BOOL)arg4 ;
+(id)sortByNameKey;
+(id)databaseTable;
-(BOOL)is32BitOnly;
-(id)companyName;
-(long long)contentRatingFlags;
-(id)iconTitle;
-(BOOL)isFamilyShareable;
-(BOOL)isNewsstand;
-(id)longTitle;
-(unsigned)minimumOS;
-(id)ovalIconURLString;
-(BOOL)supportsIPad;
-(BOOL)supportsIPhone;
-(id)redownloadParams;
-(id)humanReadableVersion;
-(long long)iTunesVersion;
-(id)requiredCapabilitiesString;
-(BOOL)isPreorder;
-(id)iconURL;
-(BOOL)hasMessagesExtension;
-(BOOL)isHiddenFromSpringBoard;
-(id)accountIdentifier;
-(id)description;
-(id)bundleID;
-(id)category;
@end
