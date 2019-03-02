//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDecimalPrecisionRule-Protocol.h>

@class NSString;

@interface HKStaticDecimalPrecisionRule : NSObject <HKDecimalPrecisionRule>
{
    long long _decimalPrecision;
}

@property(nonatomic) long long decimalPrecision; // @synthesize decimalPrecision=_decimalPrecision;
- (id)numberFormatter;
- (long long)decimalPrecisionForValue:(double)arg1;
- (long long)maximumDecimalPrecision;
- (long long)minimumDecimalPrecision;
- (id)initWithDecimalPrecision:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
