//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoTransmitterConfig : NSObject
{
    long long _videoResolution;
    int _videoSource;
    long long _codecType;
    struct tagHANDLE *_rtpHandle;
    struct opaqueRTCReporting *_reportingAgent;
    int _reportingParentID;
    unsigned long long _framerate;
    unsigned long long _txMaxBitrate;
    unsigned long long _txMinBitrate;
    unsigned long long _keyFrameInterval;
    unsigned long long _recommendedMTU;
    unsigned long long _cvoExtensionID;
    _Bool _enableCVO;
    int _videoPayload;
    int _encodingMode;
    // Error parsing type: ^AC, name: _videoPriorityPointer
}

// Error parsing type for property videoPriorityPointer:
// Property attributes: T^AC,N,V_videoPriorityPointer

@property(nonatomic) int encodingMode; // @synthesize encodingMode=_encodingMode;
@property(nonatomic) int videoPayload; // @synthesize videoPayload=_videoPayload;
@property(nonatomic) int videoSource; // @synthesize videoSource=_videoSource;
@property(nonatomic) _Bool enableCVO; // @synthesize enableCVO=_enableCVO;
@property(nonatomic) unsigned long long cvoExtensionID; // @synthesize cvoExtensionID=_cvoExtensionID;
@property(nonatomic) unsigned long long recommendedMTU; // @synthesize recommendedMTU=_recommendedMTU;
@property(nonatomic) unsigned long long keyFrameInterval; // @synthesize keyFrameInterval=_keyFrameInterval;
@property(nonatomic) unsigned long long txMinBitrate; // @synthesize txMinBitrate=_txMinBitrate;
@property(nonatomic) unsigned long long txMaxBitrate; // @synthesize txMaxBitrate=_txMaxBitrate;
@property(nonatomic) unsigned long long framerate; // @synthesize framerate=_framerate;
@property(nonatomic) int reportingParentID; // @synthesize reportingParentID=_reportingParentID;
@property(nonatomic) struct opaqueRTCReporting *reportingAgent; // @synthesize reportingAgent=_reportingAgent;
@property(nonatomic) struct tagHANDLE *rtpHandle; // @synthesize rtpHandle=_rtpHandle;
@property(nonatomic) long long codecType; // @synthesize codecType=_codecType;
@property(nonatomic) long long videoResolution; // @synthesize videoResolution=_videoResolution;
- (id)description;

@end
