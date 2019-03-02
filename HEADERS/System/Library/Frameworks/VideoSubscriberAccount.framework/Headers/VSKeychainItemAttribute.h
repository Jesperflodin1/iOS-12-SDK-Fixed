/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:14 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface VSKeychainItemAttribute : NSObject <NSCopying> {

	NSString* _name;
	unsigned long long _attributeType;
	NSString* _attributeValueClassName;
	const CFStringRef _secItemAttributeKey;
	id _defaultValue;

}

@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long attributeType;                   //@synthesize attributeType=_attributeType - In the implementation block
@property (nonatomic,copy) NSString * attributeValueClassName;                   //@synthesize attributeValueClassName=_attributeValueClassName - In the implementation block
@property (assign,nonatomic) const CFStringRef secItemAttributeKey;              //@synthesize secItemAttributeKey=_secItemAttributeKey - In the implementation block
@property (nonatomic,retain) id defaultValue;                                    //@synthesize defaultValue=_defaultValue - In the implementation block
-(void)setAttributeType:(unsigned long long)arg1 ;
-(void)setAttributeValueClassName:(NSString *)arg1 ;
-(NSString *)attributeValueClassName;
-(unsigned long long)attributeType;
-(void)setSecItemAttributeKey:(const CFStringRef)arg1 ;
-(const CFStringRef)secItemAttributeKey;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
@end
