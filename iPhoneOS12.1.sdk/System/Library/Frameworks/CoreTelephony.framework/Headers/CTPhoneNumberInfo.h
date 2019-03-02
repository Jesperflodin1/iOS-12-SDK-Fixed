/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:22:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTPhoneNumberInfo : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isPresent;
	BOOL _isEditable;
	BOOL _isRead;
	NSString* _label;
	NSString* _number;

}

@property (nonatomic,retain) NSString * label;               //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * number;              //@synthesize number=_number - In the implementation block
@property (assign,nonatomic) BOOL isPresent;                 //@synthesize isPresent=_isPresent - In the implementation block
@property (assign,nonatomic) BOOL isEditable;                //@synthesize isEditable=_isEditable - In the implementation block
@property (assign,nonatomic) BOOL isRead;                    //@synthesize isRead=_isRead - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setIsPresent:(BOOL)arg1 ;
-(void)setIsEditable:(BOOL)arg1 ;
-(NSString *)number;
-(void)setNumber:(NSString *)arg1 ;
-(BOOL)isRead;
-(BOOL)isPresent;
-(void)setIsRead:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEditable;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end
