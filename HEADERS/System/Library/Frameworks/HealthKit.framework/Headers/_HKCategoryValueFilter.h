/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:28 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSNumber, HKCategoryType;

@interface _HKCategoryValueFilter : _HKFilter {

	NSNumber* _comparisonValue;
	HKCategoryType* _dataType;
	unsigned long long _operatorType;

}

@property (nonatomic,readonly) NSNumber * comparisonValue;                   //@synthesize comparisonValue=_comparisonValue - In the implementation block
@property (nonatomic,readonly) HKCategoryType * dataType;                    //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) unsigned long long operatorType;              //@synthesize operatorType=_operatorType - In the implementation block
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)filterWithOperatorType:(unsigned long long)arg1 comparisonValue:(id)arg2 dataType:(id)arg3 ;
+(BOOL)supportsSecureCoding;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(HKCategoryType *)dataType;
-(unsigned long long)operatorType;
-(NSNumber *)comparisonValue;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
