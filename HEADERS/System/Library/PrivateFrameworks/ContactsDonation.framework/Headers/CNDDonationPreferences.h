//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDDonationPreferences-Protocol.h>

@class NSNotificationCenter, NSString;
@protocol CNDonationPreferencesLogger;

@interface CNDDonationPreferences : NSObject <CNDDonationPreferences>
{
    NSNotificationCenter *_notificationCenter;
    Class _storageClass;
    id <CNDonationPreferencesLogger> _logger;
}

+ (id)observableWithPreferences:(id)arg1 notificationCenter:(id)arg2 schedulerProvider:(id)arg3;
@property(readonly, nonatomic) id <CNDonationPreferencesLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) Class storageClass; // @synthesize storageClass=_storageClass;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (void).cxx_destruct;
@property(nonatomic, getter=isDonationsEnabled) _Bool donationsEnabled;
@property(readonly, copy) NSString *description;
- (id)initWithNotificationCenter:(id)arg1 storageClass:(Class)arg2 logger:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
