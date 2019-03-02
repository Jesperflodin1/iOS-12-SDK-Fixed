/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNValueOrigin : NSObject <NSCopying, NSSecureCoding> {

	NSString* _localizedApplicationName;
	NSString* _donationIdentifier;

}

@property (nonatomic,copy,readonly) NSString * localizedApplicationName;              //@synthesize localizedApplicationName=_localizedApplicationName - In the implementation block
@property (nonatomic,copy,readonly) NSString * donationIdentifier;                    //@synthesize donationIdentifier=_donationIdentifier - In the implementation block
+(id)localizedApplicationNameForBundleIdentifier:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithDonationOrigin:(id)arg1 ;
-(id)initWithLocalizedApplicationName:(id)arg1 donationIdentifier:(id)arg2 ;
-(NSString *)localizedApplicationName;
-(NSString *)donationIdentifier;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
