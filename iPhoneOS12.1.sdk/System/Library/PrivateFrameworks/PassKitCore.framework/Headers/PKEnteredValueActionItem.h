//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDecimalNumber, NSDictionary, NSString;

@interface PKEnteredValueActionItem : NSObject <NSSecureCoding>
{
    _Bool _maxAmountIncludesLocalBalance;
    NSDecimalNumber *_minLoadAmount;
    NSDecimalNumber *_maxLoadAmount;
    NSDecimalNumber *_minLoadedBalance;
    NSDecimalNumber *_maxLoadedBalance;
    NSArray *_defaultSuggestions;
    NSString *_currency;
    NSDictionary *_serviceProviderData;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *serviceProviderData; // @synthesize serviceProviderData=_serviceProviderData;
@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, nonatomic) _Bool maxAmountIncludesLocalBalance; // @synthesize maxAmountIncludesLocalBalance=_maxAmountIncludesLocalBalance;
@property(readonly, copy, nonatomic) NSArray *defaultSuggestions; // @synthesize defaultSuggestions=_defaultSuggestions;
@property(readonly, copy, nonatomic) NSDecimalNumber *maxLoadedBalance; // @synthesize maxLoadedBalance=_maxLoadedBalance;
@property(readonly, copy, nonatomic) NSDecimalNumber *minLoadedBalance; // @synthesize minLoadedBalance=_minLoadedBalance;
@property(readonly, copy, nonatomic) NSDecimalNumber *maxLoadAmount; // @synthesize maxLoadAmount=_maxLoadAmount;
@property(readonly, copy, nonatomic) NSDecimalNumber *minLoadAmount; // @synthesize minLoadAmount=_minLoadAmount;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDecimalNumber *maxAmount;
@property(readonly, copy, nonatomic) NSDecimalNumber *minAmount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_processLocalizableStrings:(CDUnknownBlockType)arg1;
- (id)initWithDictionary:(id)arg1;

@end
