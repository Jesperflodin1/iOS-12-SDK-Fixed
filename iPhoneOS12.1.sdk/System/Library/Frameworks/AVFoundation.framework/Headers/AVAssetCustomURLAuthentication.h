/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:27 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class NSObject;

@interface AVAssetCustomURLAuthentication : NSObject {

	OpaqueFigCustomURLHandlerRef _handler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}
+(id)copyKeychainCredentialForUrl:(id)arg1 ;
+(int)sendAuthResponse:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 disposition:(long long)arg3 credential:(id)arg4 authHandler:(OpaqueFigCustomURLHandlerRef)arg5 ;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(int)_handleAuthChallenge:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 ;
-(void)dealloc;
@end
