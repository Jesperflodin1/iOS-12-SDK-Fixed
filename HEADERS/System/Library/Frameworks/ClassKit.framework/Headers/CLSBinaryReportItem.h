/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSActivityReportItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLSBinaryReportItem : CLSActivityReportItem <NSSecureCoding, NSCopying> {

	BOOL _value;
	long long _valueType;

}

@property (assign,nonatomic) BOOL value;                       //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) long long valueType;              //@synthesize valueType=_valueType - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)valueType;
-(void)add:(id)arg1 ;
-(void)setValueType:(long long)arg1 ;
-(void)scalarMultiply:(double)arg1 ;
-(id)convertToItemCompatibleWithItem:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)value;
-(void)setValue:(BOOL)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
