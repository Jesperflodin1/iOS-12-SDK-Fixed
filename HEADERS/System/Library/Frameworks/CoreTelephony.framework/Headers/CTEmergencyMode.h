/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:22:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTEmergencyMode : NSObject <NSCopying, NSSecureCoding> {

	BOOL _enabled;
	long long _type;

}

@property (assign,nonatomic) BOOL enabled;                //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
+(id)convertFromEmergencyMode:(const EmergencyMode*)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithEnabled:(BOOL)arg1 type:(long long)arg2 ;
-(BOOL)isEqualToCTEmergencyMode:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(BOOL)enabled;
@end
