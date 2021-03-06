/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ACMSystemInfoProtocol
@property (nonatomic,readonly) NSString * MACAddress; 
@property (nonatomic,readonly) NSString * IPAddress; 
@property (nonatomic,readonly) NSString * uniqueDeviceIdentifier; 
@property (nonatomic,readonly) NSString * deviceModel; 
@property (nonatomic,readonly) NSString * systemVersion; 
@property (nonatomic,readonly) BOOL isRunningOnModernMobileSystem; 
@property (nonatomic,readonly) BOOL isTouchIDAvailable; 
@property (nonatomic,readonly) BOOL isRetailDevice; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) BOOL isPreRelease; 
@required
-(NSString *)uniqueDeviceIdentifier;
-(NSString *)IPAddress;
-(NSString *)deviceModel;
-(NSString *)MACAddress;
-(BOOL)isTouchIDAvailable;
-(BOOL)isRetailDevice;
-(BOOL)isPreRelease;
-(BOOL)isRunningOnModernMobileSystem;
-(NSString *)version;
-(NSString *)systemVersion;

@end

