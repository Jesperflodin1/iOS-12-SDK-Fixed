/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:22 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMFUnfairLock, NSData;

@interface HMDIdentifierSaltStore : NSObject {

	HMFUnfairLock* _lock;
	NSData* _identifierSalt;
	NSData* _assistantIdentifierSalt;

}

@property (nonatomic,retain) NSData * identifierSalt;                       //@synthesize identifierSalt=_identifierSalt - In the implementation block
@property (nonatomic,retain) NSData * assistantIdentifierSalt;              //@synthesize assistantIdentifierSalt=_assistantIdentifierSalt - In the implementation block
-(NSData *)identifierSalt;
-(void)setIdentifierSalt:(NSData *)arg1 ;
-(NSData *)assistantIdentifierSalt;
-(void)setAssistantIdentifierSalt:(NSData *)arg1 ;
-(id)init;
@end

