//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng;

@interface GEOLogMsgEventParkedCar : PBCodable <NSCopying>
{
    double _locationUncertainty;
    double _timestamp;
    GEOLatLng *_location;
    struct {
        unsigned int locationUncertainty:1;
        unsigned int timestamp:1;
    } _has;
}

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double locationUncertainty; // @synthesize locationUncertainty=_locationUncertainty;
@property(retain, nonatomic) GEOLatLng *location; // @synthesize location=_location;
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
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasLocationUncertainty;
@property(readonly, nonatomic) _Bool hasLocation;

@end
