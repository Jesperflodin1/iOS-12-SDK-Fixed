/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:50 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, NSPersistentStore, PFUbiquityLocation, NSLock, NSObject;

@interface PFUbiquityImportOperation : NSOperation {

	NSString* _localPeerID;
	NSString* _storeName;
	NSPersistentStore* _store;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSLock* _delegateLock;
	BOOL _lockedDelegateLock;
	NSObject* _delegate;

}

@property (nonatomic,readonly) NSString * localPeerID;                                 //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                   //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;              //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * store;                              //@synthesize store=_store - In the implementation block
@property (assign) NSObject * delegate; 
-(NSString *)localPeerID;
-(NSString *)storeName;
-(PFUbiquityLocation *)ubiquityRootLocation;
-(id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(void)storeWillBeRemoved:(id)arg1 ;
-(void)lockDelegateLock;
-(void)unlockDelegateLock;
-(id)initWithStoreName:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(NSPersistentStore *)store;
-(id)retainedDelegate;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setDelegate:(NSObject *)arg1 ;
-(NSObject *)delegate;
-(void)cancel;
@end
