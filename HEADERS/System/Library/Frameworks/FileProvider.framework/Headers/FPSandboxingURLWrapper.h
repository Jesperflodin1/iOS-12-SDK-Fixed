/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:25:30 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData;

@interface FPSandboxingURLWrapper : NSObject <NSSecureCoding> {

	NSURL* _url;
	NSData* _scope;
	NSData* _promiseScope;
	NSURL* _promiseURL;

}

@property (nonatomic,copy) NSURL * url;                //@synthesize url=_url - In the implementation block
@property (retain) NSURL * promiseURL;                 //@synthesize promiseURL=_promiseURL - In the implementation block
@property (retain) NSData * scope;                     //@synthesize scope=_scope - In the implementation block
@property (retain) NSData * promiseScope;              //@synthesize promiseScope=_promiseScope - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)wrapperWithURL:(id)arg1 ;
+(id)wrapperWithURL:(id)arg1 readonly:(BOOL)arg2 ;
+(void)assembleURL:(id)arg1 sandbox:(id)arg2 physicalURL:(id)arg3 physicalSandbox:(id)arg4 ;
+(id)wrapperWithURL:(id)arg1 extensionClass:(const char*)arg2 error:(id*)arg3 ;
+(id)wrapperWithURL:(id)arg1 readonly:(BOOL)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setPromiseURL:(NSURL *)arg1 ;
-(void)setScope:(NSData *)arg1 ;
-(NSData *)scope;
-(void)setPromiseScope:(NSData *)arg1 ;
-(NSData *)promiseScope;
-(NSURL *)promiseURL;
@end
