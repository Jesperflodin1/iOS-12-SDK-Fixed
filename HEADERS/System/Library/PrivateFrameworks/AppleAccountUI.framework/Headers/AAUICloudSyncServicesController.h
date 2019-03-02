//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/DAValidityCheckConsumer-Protocol.h>

@class AAAutoAccountVerifier, ACAccount, ACAccountStore, DAAccount, MFAccountValidator, NSMutableArray, NSMutableDictionary, NSString;

@interface AAUICloudSyncServicesController : NSObject <DAValidityCheckConsumer>
{
    ACAccountStore *_accountStore;
    ACAccount *_account;
    NSMutableDictionary *_queuedDataclassActions;
    NSMutableArray *_dataclassesRequiringMergeDecision;
    NSMutableDictionary *_queuedDataclassStates;
    _Bool _didUserConsentToMerge;
    _Bool _isVerifyingExistingEmailAccount;
    MFAccountValidator *_validator;
    AAAutoAccountVerifier *_verifier;
    DAAccount *_accountBeingValidated;
    CDUnknownBlockType _handler;
}

+ (id)_usernameFromAddress:(id)arg1;
+ (id)_domainFromAddress:(id)arg1;
+ (Class)_accountClassForAddress:(id)arg1;
+ (_Bool)needSetupForMailAccount:(id)arg1;
+ (_Bool)canAutoSetupMailAccount:(id)arg1;
+ (_Bool)_isInstalledSystemApplication:(id)arg1;
+ (_Bool)shouldInitiallyEnableDataclass:(id)arg1 forAccount:(id)arg2;
- (void).cxx_destruct;
- (void)_addDAEmailAccount:(id)arg1;
- (void)_addMailAccount:(id)arg1;
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(_Bool)arg3;
- (void)account:(id)arg1 isValid:(_Bool)arg2 validationError:(id)arg3;
- (void)_validateMailAccount:(id)arg1;
- (void)_validateDAAccount:(id)arg1;
- (void)_createAndValidateMailAccountWithProperties:(id)arg1;
- (void)_createAndValidateDAMailAccountWithProperties:(id)arg1;
- (void)_validateExistingEmailAccount:(id)arg1 withPassword:(id)arg2;
- (void)setupMailAccount:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)verifyAccountWithAppleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)completeEnablingCloudServicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setBackupEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDeviceLocatorEnabled:(_Bool)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)_presentMergeConfirmationForDataclasses:(id)arg1 account:(id)arg2;
- (void)setCloudServicesEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_account;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
