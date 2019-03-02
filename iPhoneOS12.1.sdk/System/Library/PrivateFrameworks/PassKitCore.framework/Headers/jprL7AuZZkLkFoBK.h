/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:58 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSSet;

@interface jprL7AuZZkLkFoBK : NSObject {

	NSString* _serverEndpointIdentifier;
	NSData* _hostChallenge;
	NSData* _challengeResponse;
	NSString* _seid;
	NSSet* _identities;
	NSString* _phoneNumber;
	NSString* _emailAddress;
	NSString* _FPANSuffix;
	unsigned long long _eventFrequency;

}

@property (nonatomic,retain) NSString * serverEndpointIdentifier;              //@synthesize serverEndpointIdentifier=_serverEndpointIdentifier - In the implementation block
@property (nonatomic,retain) NSData * hostChallenge;                           //@synthesize hostChallenge=_hostChallenge - In the implementation block
@property (nonatomic,retain) NSData * challengeResponse;                       //@synthesize challengeResponse=_challengeResponse - In the implementation block
@property (nonatomic,retain) NSString * seid;                                  //@synthesize seid=_seid - In the implementation block
@property (nonatomic,retain) NSSet * identities;                               //@synthesize identities=_identities - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                           //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;                          //@synthesize emailAddress=_emailAddress - In the implementation block
@property (nonatomic,retain) NSString * FPANSuffix;                            //@synthesize FPANSuffix=_FPANSuffix - In the implementation block
@property (assign,nonatomic) unsigned long long eventFrequency;                //@synthesize eventFrequency=_eventFrequency - In the implementation block
-(void)setPhoneNumber:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)serverEndpointIdentifier;
-(void)setServerEndpointIdentifier:(NSString *)arg1 ;
-(unsigned long long)eventFrequency;
-(void)setEventFrequency:(unsigned long long)arg1 ;
-(void)setSeid:(NSString *)arg1 ;
-(void)setHostChallenge:(NSData *)arg1 ;
-(void)setChallengeResponse:(NSData *)arg1 ;
-(id)initWithServerEndpointIdentifier:(id)arg1 ;
-(void)setIdentities:(NSSet *)arg1 ;
-(NSData *)hostChallenge;
-(NSString *)seid;
-(NSString *)FPANSuffix;
-(void)setFPANSuffix:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(NSSet *)identities;
-(NSData *)challengeResponse;
-(NSString *)phoneNumber;
@end
