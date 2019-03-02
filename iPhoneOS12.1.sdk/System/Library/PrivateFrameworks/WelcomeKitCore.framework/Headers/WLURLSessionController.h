/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:49 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class WLDeviceAuthentication, NSOperationQueue, NSURLSession, NSString;

@interface WLURLSessionController : NSObject <NSURLSessionDelegate> {

	WLDeviceAuthentication* _auth;
	NSOperationQueue* _delegateOperationQueue;
	NSURLSession* _urlSession;

}

@property (nonatomic,readonly) NSURLSession * urlSession;              //@synthesize urlSession=_urlSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURLSession *)urlSession;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithAuthentication:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
@end
