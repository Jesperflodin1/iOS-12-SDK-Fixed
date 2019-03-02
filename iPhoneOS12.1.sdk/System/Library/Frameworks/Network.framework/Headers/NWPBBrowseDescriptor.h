/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:54 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWPBServiceBrowse;

@interface NWPBBrowseDescriptor : PBCodable <NSCopying> {

	NWPBServiceBrowse* _service;

}

@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) NWPBServiceBrowse * service;              //@synthesize service=_service - In the implementation block
-(BOOL)hasService;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NWPBServiceBrowse *)service;
-(void)setService:(NWPBServiceBrowse *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
