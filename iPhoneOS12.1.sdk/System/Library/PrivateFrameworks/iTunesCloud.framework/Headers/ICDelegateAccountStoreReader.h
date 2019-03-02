//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICSQLiteConnection, NSDate;

@interface ICDelegateAccountStoreReader : NSObject
{
    ICSQLiteConnection *_connection;
    _Bool _isValid;
}

- (void).cxx_destruct;
- (id)_userIdentityWithSQLiteRow:(id)arg1;
- (id)_tokenWithSQLiteRow:(id)arg1;
- (void)_enumerateQueryResults:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)tokenForUserIdentity:(id)arg1;
@property(readonly, nonatomic) long long overestimatedNumberOfTokens;
@property(readonly, copy, nonatomic) NSDate *lastExpirationPruningDate;
- (id)identityPropertiesForUserIdentity:(id)arg1;
- (void)enumerateTokensWithType:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateTokensUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDelegationUUIDsForUserIdentity:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (id)initWithConnection:(id)arg1;

@end
