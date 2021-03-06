/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:37:34 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/APTransport.framework/APTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <APTransport/APTransport-Structs.h>
@class NSUUID;

@interface APTargetBTLEDevice : NSObject {

	BOOL _isSoloCapable;
	BOOL _supportsMediaControlPort;
	BOOL _isFirmwareTracked;
	BOOL _requestedTracking;
	int _lastRSSI;
	SCD_Struct_AP0 _lastData;
	NSUUID* _deviceID;
	unsigned long long _lastBeaconTicks;

}

@property (nonatomic,retain) NSUUID * deviceID;                               //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) BOOL isSoloCapable;                              //@synthesize isSoloCapable=_isSoloCapable - In the implementation block
@property (assign,nonatomic) BOOL supportsMediaControlPort;                   //@synthesize supportsMediaControlPort=_supportsMediaControlPort - In the implementation block
@property (assign,nonatomic) SCD_Struct_AP0 lastData;                         //@synthesize lastData=_lastData - In the implementation block
@property (assign,nonatomic) unsigned long long lastBeaconTicks;              //@synthesize lastBeaconTicks=_lastBeaconTicks - In the implementation block
@property (assign,nonatomic) int lastRSSI;                                    //@synthesize lastRSSI=_lastRSSI - In the implementation block
@property (assign,nonatomic) BOOL isFirmwareTracked;                          //@synthesize isFirmwareTracked=_isFirmwareTracked - In the implementation block
@property (assign,nonatomic) BOOL requestedTracking;                          //@synthesize requestedTracking=_requestedTracking - In the implementation block
-(BOOL)isSoloCapable;
-(void)setIsSoloCapable:(BOOL)arg1 ;
-(BOOL)supportsMediaControlPort;
-(void)setSupportsMediaControlPort:(BOOL)arg1 ;
-(SCD_Struct_AP0)lastData;
-(void)setLastData:(SCD_Struct_AP0)arg1 ;
-(unsigned long long)lastBeaconTicks;
-(void)setLastBeaconTicks:(unsigned long long)arg1 ;
-(BOOL)isFirmwareTracked;
-(void)setIsFirmwareTracked:(BOOL)arg1 ;
-(BOOL)requestedTracking;
-(void)setRequestedTracking:(BOOL)arg1 ;
-(NSUUID *)deviceID;
-(void)setDeviceID:(NSUUID *)arg1 ;
-(int)lastRSSI;
-(void)setLastRSSI:(int)arg1 ;
-(void)dealloc;
@end

