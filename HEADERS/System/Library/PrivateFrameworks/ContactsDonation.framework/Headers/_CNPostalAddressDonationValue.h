//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsDonation/CNDonationValue.h>

@class CNPostalAddress, NSString;

@interface _CNPostalAddressDonationValue : CNDonationValue
{
    CNPostalAddress *_postalAddress;
    long long _style;
    NSString *_label;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
- (void).cxx_destruct;
- (void)updatePropertyListRepresentation:(id)arg1;
- (void)acceptDonationValueVisitor:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithNewExpirationDate:(id)arg1;
- (id)initWithPostalAddress:(id)arg1 style:(long long)arg2 label:(id)arg3 origin:(id)arg4;

@end
