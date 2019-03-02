/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:18 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TCSBehavior : NSObject {

	BOOL _isAppleInternalInstall;
	BOOL _hasTelephonyCapability;
	BOOL _isM7Device;
	BOOL _isM8Device;

}

@property (nonatomic,readonly) BOOL isAppleInternalInstall;              //@synthesize isAppleInternalInstall=_isAppleInternalInstall - In the implementation block
@property (nonatomic,readonly) BOOL hasTelephonyCapability;              //@synthesize hasTelephonyCapability=_hasTelephonyCapability - In the implementation block
@property (nonatomic,readonly) BOOL isM7Device;                          //@synthesize isM7Device=_isM7Device - In the implementation block
@property (nonatomic,readonly) BOOL isM8Device;                          //@synthesize isM8Device=_isM8Device - In the implementation block
+(BOOL)_isAppleInternalInstall;
+(BOOL)_hasTelephonyCapability;
+(BOOL)isAppleInternalInstall;
+(id)sharedBehavior;
+(BOOL)hasTelephonyCapability;
+(BOOL)_isM7Device;
+(BOOL)_isM8Device;
+(BOOL)isM7Device;
+(BOOL)isM8Device;
-(BOOL)isAppleInternalInstall;
-(BOOL)hasTelephonyCapability;
-(BOOL)isM7Device;
-(BOOL)isM8Device;
-(id)init;
@end
