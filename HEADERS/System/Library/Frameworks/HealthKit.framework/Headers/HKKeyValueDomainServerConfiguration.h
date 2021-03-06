/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:27 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class NSString;

@interface HKKeyValueDomainServerConfiguration : HKTaskConfiguration {

	long long _category;
	NSString* _domainName;

}

@property (nonatomic,readonly) long long category;                 //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSString * domainName;              //@synthesize domainName=_domainName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCategory:(long long)arg1 domainName:(id)arg2 ;
-(NSString *)domainName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)category;
@end

