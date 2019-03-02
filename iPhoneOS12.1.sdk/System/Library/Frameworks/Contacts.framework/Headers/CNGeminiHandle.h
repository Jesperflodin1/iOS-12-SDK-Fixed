/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNGeminiHandle : NSObject <NSSecureCoding> {

	long long _handleType;
	NSString* _stringValue;

}

@property (nonatomic,readonly) long long handleType;                     //@synthesize handleType=_handleType - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)handleType;
-(id)initWithString:(id)arg1 type:(long long)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
@end
