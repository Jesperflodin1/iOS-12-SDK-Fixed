//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKit/HMService.h>

#import <Home/HFUserNotificationServiceSettingsProviding-Protocol.h>

@class HFUserNotificationServiceSettings, NSString, NSUUID;

@interface HMService (HFUserNotificationServiceSettings) <HFUserNotificationServiceSettingsProviding>
- (id)hf_updateUserNotificationSettings:(id)arg1;
@property(readonly, copy, nonatomic) HFUserNotificationServiceSettings *hf_userNotificationSettings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end
