/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface _NMRMediaRemoteSetStateMessageProfobuf : PBCodable <NSCopying> {

	double _timestamp;
	NSData* _applicationInfo;
	NSData* _digest;
	NSData* _nowPlayingInfo;
	int _originIdentifier;
	NSData* _payload;
	NSData* _playbackQueue;
	int _state;
	NSData* _supportedCommands;
	SCD_Struct_NM2 _has;

}

@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) int state;                                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL hasPayload; 
@property (nonatomic,retain) NSData * payload;                         //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) BOOL hasDigest; 
@property (nonatomic,retain) NSData * digest;                          //@synthesize digest=_digest - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasNowPlayingInfo; 
@property (nonatomic,retain) NSData * nowPlayingInfo;                  //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationInfo; 
@property (nonatomic,retain) NSData * applicationInfo;                 //@synthesize applicationInfo=_applicationInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSupportedCommands; 
@property (nonatomic,retain) NSData * supportedCommands;               //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaybackQueue; 
@property (nonatomic,retain) NSData * playbackQueue;                   //@synthesize playbackQueue=_playbackQueue - In the implementation block
@property (assign,nonatomic) BOOL hasOriginIdentifier; 
@property (assign,nonatomic) int originIdentifier;                     //@synthesize originIdentifier=_originIdentifier - In the implementation block
-(void)setHasState:(BOOL)arg1 ;
-(BOOL)hasState;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasNowPlayingInfo;
-(void)setPlaybackQueue:(NSData *)arg1 ;
-(BOOL)hasSupportedCommands;
-(BOOL)hasPlaybackQueue;
-(NSData *)supportedCommands;
-(void)setSupportedCommands:(NSData *)arg1 ;
-(void)setDigest:(NSData *)arg1 ;
-(NSData *)playbackQueue;
-(void)setNowPlayingInfo:(NSData *)arg1 ;
-(NSData *)nowPlayingInfo;
-(NSData *)applicationInfo;
-(BOOL)hasPayload;
-(NSData *)digest;
-(int)originIdentifier;
-(void)setOriginIdentifier:(int)arg1 ;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
-(void)setApplicationInfo:(NSData *)arg1 ;
-(BOOL)hasDigest;
-(BOOL)hasApplicationInfo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setState:(int)arg1 ;
-(double)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(double)arg1 ;
-(NSData *)payload;
-(void)setPayload:(NSData *)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
