/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:25:35 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/WK_RTCCodecSpecificInfo.h>

@class NSString;

@interface WK_RTCCodecSpecificInfoH264 : NSObject <WK_RTCCodecSpecificInfo> {

	unsigned long long _packetizationMode;

}

@property (assign,nonatomic) unsigned long long packetizationMode;              //@synthesize packetizationMode=_packetizationMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPacketizationMode:(unsigned long long)arg1 ;
-(CodecSpecificInfo)nativeCodecSpecificInfo;
-(unsigned long long)packetizationMode;
@end

