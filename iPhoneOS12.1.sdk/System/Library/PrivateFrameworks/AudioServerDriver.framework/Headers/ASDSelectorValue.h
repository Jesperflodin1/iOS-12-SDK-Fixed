/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:50:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ASDSelectorValue : NSObject {

	unsigned _value;
	NSString* _name;

}

@property (assign,nonatomic) unsigned value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * name;               //@synthesize name=_name - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(unsigned)value;
-(void)setValue:(unsigned)arg1 ;
@end

