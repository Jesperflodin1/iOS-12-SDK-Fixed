//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPShareTokenDeleteRequest : PBRequest <NSCopying>
{
    NSString *_routingKey;
    NSData *_shortTokenHash;
}

+ (id)options;
@property(retain, nonatomic) NSData *shortTokenHash; // @synthesize shortTokenHash=_shortTokenHash;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasShortTokenHash;
@property(readonly, nonatomic) _Bool hasRoutingKey;

@end
