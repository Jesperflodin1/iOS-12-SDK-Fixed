/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CTCarrier : NSObject {

	NSString* _carrierName;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	NSString* _isoCountryCode;
	BOOL _allowsVOIP;

}

@property (nonatomic,retain) NSString * carrierName;                    //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,retain) NSString * mobileCountryCode;              //@synthesize mobileCountryCode=_mobileCountryCode - In the implementation block
@property (nonatomic,retain) NSString * mobileNetworkCode;              //@synthesize mobileNetworkCode=_mobileNetworkCode - In the implementation block
@property (nonatomic,retain) NSString * isoCountryCode;                 //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (assign,nonatomic) BOOL allowsVOIP;                           //@synthesize allowsVOIP=_allowsVOIP - In the implementation block
-(BOOL)allowsVOIP;
-(void)setAllowsVOIP:(BOOL)arg1 ;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)setCarrierName:(NSString *)arg1 ;
-(NSString *)isoCountryCode;
-(NSString *)mobileCountryCode;
-(NSString *)mobileNetworkCode;
-(void)setMobileCountryCode:(NSString *)arg1 ;
-(void)setMobileNetworkCode:(NSString *)arg1 ;
-(NSString *)carrierName;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end
