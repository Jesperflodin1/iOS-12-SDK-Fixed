/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSVMediaSocialPostDescription, NSString;

@interface SSVMediaSocialPostRequest : SSRequest <SSXPCCoding> {

	SSVMediaSocialPostDescription* _postDescription;

}

@property (nonatomic,readonly) SSVMediaSocialPostDescription * postDescription;              //@synthesize postDescription=_postDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithPostDescription:(id)arg1 ;
-(SSVMediaSocialPostDescription *)postDescription;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
@end
