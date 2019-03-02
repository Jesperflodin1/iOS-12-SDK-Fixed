//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSString;

@interface NNMKProtoStandaloneAccountIdentity : PBCodable <NSCopying>
{
    NSString *_accountIdentifier;
    NSString *_displayName;
    unsigned int _identityType;
    NSString *_refreshToken;
    NSString *_token;
    NSString *_username;
    struct {
        unsigned int identityType:1;
    } _has;
}

@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) unsigned int identityType; // @synthesize identityType=_identityType;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAccountIdentifier;
@property(nonatomic) _Bool hasIdentityType;
@property(readonly, nonatomic) _Bool hasRefreshToken;
@property(readonly, nonatomic) _Bool hasToken;
@property(readonly, nonatomic) _Bool hasDisplayName;
@property(readonly, nonatomic) _Bool hasUsername;

@end
