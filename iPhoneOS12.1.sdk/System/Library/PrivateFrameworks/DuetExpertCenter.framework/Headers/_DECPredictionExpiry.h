/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:35 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface _DECPredictionExpiry : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _type;
	long long _value;
	NSDate* _date;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
+(id)expireAfter:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithType:(unsigned long long)arg1 value:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(NSDate *)date;
-(long long)value;
@end
