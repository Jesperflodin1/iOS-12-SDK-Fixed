//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKActivityEvent.h>

@class PKPaymentTransaction;

@interface PKActivityEventTransaction : PKActivityEvent
{
    PKPaymentTransaction *_transaction;
}

@property(readonly, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (id)eventType;
- (_Bool)isEqualToActivityEvent:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTransaction:(id)arg1 unread:(_Bool)arg2;

@end

