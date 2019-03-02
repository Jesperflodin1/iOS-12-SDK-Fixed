//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSNumber, NSString;

@interface MCEmailAccountPayloadBase : MCPayload
{
    _Bool _preventMove;
    _Bool _preventAppSheet;
    _Bool _SMIMEEnabled;
    _Bool _isRecentsSyncingDisabled;
    _Bool _isMailDropEnabled;
    _Bool _SMIMESigningUserOverrideable;
    _Bool _SMIMESigningIdentityUserOverrideable;
    _Bool _SMIMEEncryptByDefaultUserOverrideable;
    _Bool _SMIMEEncryptionIdentityUserOverrideable;
    _Bool _SMIMEPerMessageSwitchEnabled;
    NSNumber *_SMIMESigningEnabled;
    NSString *_SMIMESigningIdentityUUID;
    NSNumber *_SMIMEEncryptionEnabled;
    NSString *_SMIMEEncryptionIdentityUUID;
    NSData *_SMIMESigningIdentityPersistentID;
    NSData *_SMIMEEncryptionIdentityPersistentID;
    NSNumber *_preventMoveNum;
    NSNumber *_preventAppSheetNum;
    NSNumber *_SMIMEEnabledNum;
    NSNumber *_isRecentsSyncingDisabledNum;
    NSNumber *_isMailDropEnabledNum;
    NSNumber *_SMIMEPerMessageSwitchEnabledNum;
}

@property(retain, nonatomic) NSNumber *SMIMEPerMessageSwitchEnabledNum; // @synthesize SMIMEPerMessageSwitchEnabledNum=_SMIMEPerMessageSwitchEnabledNum;
@property(retain, nonatomic) NSNumber *isMailDropEnabledNum; // @synthesize isMailDropEnabledNum=_isMailDropEnabledNum;
@property(retain, nonatomic) NSNumber *isRecentsSyncingDisabledNum; // @synthesize isRecentsSyncingDisabledNum=_isRecentsSyncingDisabledNum;
@property(retain, nonatomic) NSNumber *SMIMEEnabledNum; // @synthesize SMIMEEnabledNum=_SMIMEEnabledNum;
@property(retain, nonatomic) NSNumber *preventAppSheetNum; // @synthesize preventAppSheetNum=_preventAppSheetNum;
@property(retain, nonatomic) NSNumber *preventMoveNum; // @synthesize preventMoveNum=_preventMoveNum;
@property(nonatomic) _Bool SMIMEPerMessageSwitchEnabled; // @synthesize SMIMEPerMessageSwitchEnabled=_SMIMEPerMessageSwitchEnabled;
@property(retain, nonatomic) NSData *SMIMEEncryptionIdentityPersistentID; // @synthesize SMIMEEncryptionIdentityPersistentID=_SMIMEEncryptionIdentityPersistentID;
@property(retain, nonatomic) NSData *SMIMESigningIdentityPersistentID; // @synthesize SMIMESigningIdentityPersistentID=_SMIMESigningIdentityPersistentID;
@property(nonatomic) _Bool SMIMEEncryptionIdentityUserOverrideable; // @synthesize SMIMEEncryptionIdentityUserOverrideable=_SMIMEEncryptionIdentityUserOverrideable;
@property(retain, nonatomic) NSString *SMIMEEncryptionIdentityUUID; // @synthesize SMIMEEncryptionIdentityUUID=_SMIMEEncryptionIdentityUUID;
@property(nonatomic) _Bool SMIMEEncryptByDefaultUserOverrideable; // @synthesize SMIMEEncryptByDefaultUserOverrideable=_SMIMEEncryptByDefaultUserOverrideable;
@property(retain, nonatomic) NSNumber *SMIMEEncryptionEnabled; // @synthesize SMIMEEncryptionEnabled=_SMIMEEncryptionEnabled;
@property(nonatomic) _Bool SMIMESigningIdentityUserOverrideable; // @synthesize SMIMESigningIdentityUserOverrideable=_SMIMESigningIdentityUserOverrideable;
@property(retain, nonatomic) NSString *SMIMESigningIdentityUUID; // @synthesize SMIMESigningIdentityUUID=_SMIMESigningIdentityUUID;
@property(nonatomic) _Bool SMIMESigningUserOverrideable; // @synthesize SMIMESigningUserOverrideable=_SMIMESigningUserOverrideable;
@property(retain, nonatomic) NSNumber *SMIMESigningEnabled; // @synthesize SMIMESigningEnabled=_SMIMESigningEnabled;
@property(nonatomic) _Bool isMailDropEnabled; // @synthesize isMailDropEnabled=_isMailDropEnabled;
@property(nonatomic) _Bool isRecentsSyncingDisabled; // @synthesize isRecentsSyncingDisabled=_isRecentsSyncingDisabled;
@property(nonatomic) _Bool SMIMEEnabled; // @synthesize SMIMEEnabled=_SMIMEEnabled;
@property(nonatomic) _Bool preventAppSheet; // @synthesize preventAppSheet=_preventAppSheet;
@property(nonatomic) _Bool preventMove; // @synthesize preventMove=_preventMove;
- (void).cxx_destruct;
- (_Bool)containsSensitiveUserInformation;
- (void)addSMIMEEncryptionPayloadKeysTo:(id)arg1;
- (id)payloadDescriptionKeyValueSections;
- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end
