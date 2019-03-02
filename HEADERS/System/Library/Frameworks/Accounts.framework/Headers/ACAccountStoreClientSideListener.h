/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:22:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACAccountStoreProtocol.h>

@class NSString;

@interface ACAccountStoreClientSideListener : NSObject <ACAccountStoreProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedClientSideListener;
-(void)accountCredentialsDidChangeForAccountWithIdentifier:(id)arg1 ;
@end
