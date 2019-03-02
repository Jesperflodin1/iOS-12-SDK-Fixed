/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCellularPlanProvisioningRequest : NSObject <NSSecureCoding> {

	NSString* _address;
	NSString* _matchingID;
	NSString* _OID;
	NSString* _confirmationCode;
	NSString* _ICCID;
	NSString* _EID;

}

@property (nonatomic,retain) NSString * address;                       //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * matchingID;                    //@synthesize matchingID=_matchingID - In the implementation block
@property (nonatomic,retain) NSString * OID;                           //@synthesize OID=_OID - In the implementation block
@property (nonatomic,retain) NSString * confirmationCode;              //@synthesize confirmationCode=_confirmationCode - In the implementation block
@property (nonatomic,retain) NSString * ICCID;                         //@synthesize ICCID=_ICCID - In the implementation block
@property (nonatomic,retain) NSString * EID;                           //@synthesize EID=_EID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setICCID:(NSString *)arg1 ;
-(NSString *)matchingID;
-(NSString *)confirmationCode;
-(NSString *)EID;
-(void)setMatchingID:(NSString *)arg1 ;
-(void)setConfirmationCode:(NSString *)arg1 ;
-(void)setEID:(NSString *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(NSString *)OID;
-(void)setOID:(NSString *)arg1 ;
-(NSString *)address;
-(NSString *)ICCID;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
