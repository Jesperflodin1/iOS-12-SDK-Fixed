/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:35 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/SLMicroBlogUserRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface SLTencentWeiboUserRecord : SLMicroBlogUserRecord <NSSecureCoding> {

	NSString* _openid;
	NSURL* _objectID;

}

@property (nonatomic,retain) NSURL * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,copy) NSString * openid;               //@synthesize openid=_openid - In the implementation block
+(id)userRecordWithDictionaryRepresentation:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setValuesWithUserDictionary:(id)arg1 ;
-(void)setOpenid:(NSString *)arg1 ;
-(NSString *)openid;
-(void)setObjectID:(NSURL *)arg1 ;
-(NSURL *)objectID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
