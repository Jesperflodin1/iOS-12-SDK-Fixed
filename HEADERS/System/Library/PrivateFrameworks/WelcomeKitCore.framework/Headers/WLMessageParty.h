/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:49 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WLMessageParty : NSObject {

	BOOL _isPhoneNumber;
	NSString* _address;
	NSString* _icc;
	NSString* _np;
	NSString* _ccAcNumber;

}

@property (nonatomic,readonly) BOOL isPhoneNumber;                 //@synthesize isPhoneNumber=_isPhoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * address;                 //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * icc;                     //@synthesize icc=_icc - In the implementation block
@property (nonatomic,readonly) NSString * np;                      //@synthesize np=_np - In the implementation block
@property (nonatomic,readonly) NSString * ccAcNumber;              //@synthesize ccAcNumber=_ccAcNumber - In the implementation block
+(id)_guessIccForNumber:(id)arg1 ;
-(BOOL)isPhoneNumber;
-(NSString *)address;
-(NSString *)icc;
-(id)_initWithAddress:(id)arg1 addCountryCode:(BOOL)arg2 ;
-(NSString *)np;
-(NSString *)ccAcNumber;
-(id)description;
@end
