//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class NSString;

@interface ASCodableShareLocations : PBCodable <NSCopying>
{
    NSString *_activityShareURL;
    NSString *_relationshipShareURL;
}

@property(retain, nonatomic) NSString *relationshipShareURL; // @synthesize relationshipShareURL=_relationshipShareURL;
@property(retain, nonatomic) NSString *activityShareURL; // @synthesize activityShareURL=_activityShareURL;
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
@property(readonly, nonatomic) _Bool hasRelationshipShareURL;
@property(readonly, nonatomic) _Bool hasActivityShareURL;

@end
