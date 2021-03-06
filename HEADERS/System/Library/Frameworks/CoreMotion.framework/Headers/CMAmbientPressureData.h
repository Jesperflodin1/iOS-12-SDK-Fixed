/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:45 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMAmbientPressureData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM11 ambientPressure; 
+(BOOL)supportsSecureCoding;
-(id)initWithPressure:(SCD_Struct_CM10)arg1 andTimestamp:(double)arg2 ;
-(SCD_Struct_CM11)ambientPressure;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

