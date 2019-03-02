/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:49 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, PFUbiquityPeer, PFUbiquityStoreMetadata;

@interface PFUbiquityPeerState : NSManagedObject

@property (nonatomic,retain) NSString * lastProcessedTransactionLogURL; 
@property (nonatomic,retain) NSString * storeName; 
@property (nonatomic,retain) NSNumber * transactionNumber; 
@property (nonatomic,retain) PFUbiquityPeer * peer; 
@property (nonatomic,retain) PFUbiquityStoreMetadata * storeMetadata; 
+(id)peerStateForStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3 createIfMissing:(BOOL)arg4 ;
+(id)peerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)peerStateForStoreName:(id)arg1 andPeerID:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)peerStatesMatchingStoreName:(id)arg1 inManagedObjectContext:(id)arg2 omittingLocalPeerID:(id)arg3 ;
-(id)initWithStoreName:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end
