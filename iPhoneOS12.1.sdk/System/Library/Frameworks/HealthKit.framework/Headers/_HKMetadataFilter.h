/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:28 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSString;

@interface _HKMetadataFilter : _HKFilter {

	NSString* _key;
	unsigned long long _operatorType;

}

@property (nonatomic,copy,readonly) NSString * key;                          //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(BOOL)_acceptsOperatorType:(unsigned long long)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_initWithKey:(id)arg1 operatorType:(unsigned long long)arg2 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(unsigned long long)operatorType;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
@end
