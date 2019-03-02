//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString, SSAuthenticationContext;

@interface SubscriptionStatusOperation : ISOperation
{
    _Bool _authenticatesIfNecessary;
    SSAuthenticationContext *_authenticationContext;
    long long _carrierBundleProvisioningStyle;
    NSString *_localizedAuthenticationReason;
    NSString *_reason;
    CDUnknownBlockType _statusBlock;
}

- (void).cxx_destruct;
- (id)_loadStatusOnce:(id *)arg1;
- (id)_getInitialStatus:(id *)arg1;
- (_Bool)_carrierBundleStatusIsValidForCachedStatus:(id)arg1;
- (void)_cacheAccountEligibilityWithStatus:(id)arg1;
- (void)run;
@property(copy) CDUnknownBlockType statusBlock;
@property(copy) NSString *reason;
@property(copy) NSString *localizedAuthenticationReason;
@property long long carrierBundleProvisioningStyle;
@property(copy) SSAuthenticationContext *authenticationContext;
@property _Bool authenticatesIfNecessary;

@end
