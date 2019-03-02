/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:27 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKSample.h>

@interface HKSeriesSample : HKSample {

	long long _count;
	BOOL _frozen;

}

@property (assign,setter=_setFrozen:,getter=_isFrozen,nonatomic) BOOL frozen;              //@synthesize frozen=_frozen - In the implementation block
@property (readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(id)_validateSample;
-(void)_setCount:(unsigned long long)arg1 ;
-(id)_validateConfiguration;
-(BOOL)_isFrozen;
-(void)_setFrozen:(BOOL)arg1 ;
-(BOOL)_shouldNotifyOnInsert;
-(id)_valueDescription;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
