/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:25:05 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CLRegion.h>

@class NSUUID, NSNumber;

@interface CLBeaconRegion : CLRegion

@property (nonatomic,copy,readonly) NSUUID * proximityUUID; 
@property (nonatomic,copy,readonly) NSNumber * major; 
@property (nonatomic,copy,readonly) NSNumber * minor; 
@property (assign,nonatomic) BOOL notifyEntryStateOnDisplay; 
+(id)any;
+(BOOL)supportsSecureCoding;
-(void)setGutsWithProximityUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 notifyOnDisplay:(BOOL)arg4 ;
-(char)_measuredPowerForDevice;
-(id)peripheralDataWithMeasuredPower:(id)arg1 ;
-(BOOL)notifyEntryStateOnDisplay;
-(void)setNotifyEntryStateOnDisplay:(BOOL)arg1 ;
-(NSNumber *)major;
-(NSNumber *)minor;
-(NSUUID *)proximityUUID;
-(id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 minor:(unsigned short)arg3 identifier:(id)arg4 ;
-(id)initWithProximityUUID:(id)arg1 major:(unsigned short)arg2 identifier:(id)arg3 ;
-(id)initWithProximityUUID:(id)arg1 identifier:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithIdentifier:(id)arg1 ;
@end

