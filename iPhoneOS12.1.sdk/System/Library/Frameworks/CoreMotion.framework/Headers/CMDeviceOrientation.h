/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMDeviceOrientation : CMLogItem {

	int fOrientation;

}

@property (nonatomic,readonly) int orientation; 
+(BOOL)supportsSecureCoding;
-(id)initWithOrientation:(int)arg1 andTimestamp:(double)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)orientation;
@end
