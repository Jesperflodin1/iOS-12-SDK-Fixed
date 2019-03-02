/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:22 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSObjectNSCopyingNSSecureCoding;
@class HMFUnfairLock, NSData, NSUUID, HMAccessoryCollectionSetting;

@interface HMAccessoryCollectionSettingItem : NSObject <NSCopying, NSSecureCoding> {

	HMFUnfairLock* _lock;
	id<NSObject><NSCopying><NSSecureCoding> _value;
	NSData* _serializedValue;
	NSUUID* _identifier;
	HMAccessoryCollectionSetting* _setting;

}

@property (__weak) HMAccessoryCollectionSetting * setting;                            //@synthesize setting=_setting - In the implementation block
@property (readonly) NSData * serializedValue;                                        //@synthesize serializedValue=_serializedValue - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) id<NSObject><NSCopying><NSSecureCoding> value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(NSData *)serializedValue;
-(void)setSetting:(HMAccessoryCollectionSetting *)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HMAccessoryCollectionSetting *)setting;
-(id)init;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)value;
-(id)shortDescription;
-(id)initWithValue:(id)arg1 ;
@end
