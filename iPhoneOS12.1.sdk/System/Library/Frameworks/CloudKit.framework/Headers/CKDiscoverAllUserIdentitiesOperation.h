/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:05 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSMutableDictionary;

@interface CKDiscoverAllUserIdentitiesOperation : CKOperation {

	/*^block*/id _userIdentityDiscoveredBlock;
	/*^block*/id _discoverAllUserIdentitiesCompletionBlock;
	NSMutableDictionary* _identityToContactIdentifiers;

}

@property (nonatomic,retain) NSMutableDictionary * identityToContactIdentifiers;              //@synthesize identityToContactIdentifiers=_identityToContactIdentifiers - In the implementation block
@property (nonatomic,copy) id userIdentityDiscoveredBlock;                                    //@synthesize userIdentityDiscoveredBlock=_userIdentityDiscoveredBlock - In the implementation block
@property (nonatomic,copy) id discoverAllUserIdentitiesCompletionBlock;                       //@synthesize discoverAllUserIdentitiesCompletionBlock=_discoverAllUserIdentitiesCompletionBlock - In the implementation block
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(Class)operationInfoClass;
-(void)setUserIdentityDiscoveredBlock:(id)arg1 ;
-(void)setDiscoverAllUserIdentitiesCompletionBlock:(id)arg1 ;
-(id)discoverAllUserIdentitiesCompletionBlock;
-(NSMutableDictionary *)identityToContactIdentifiers;
-(id)userIdentityDiscoveredBlock;
-(void)setIdentityToContactIdentifiers:(NSMutableDictionary *)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)init;
@end
