/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:20 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMROriginMediaRemoteObserverNotificationHandler.h>

@class NSString;

@interface NMRNowPlayingClient : NSObject <NMROriginMediaRemoteObserverNotificationHandler> {

	void* _mediaRemoteNowPlayingClient;
	NSString* _bundleIdentifier;
	NSString* _displayName;

}

@property (nonatomic,readonly) void* mediaRemoteNowPlayingClient;              //@synthesize mediaRemoteNowPlayingClient=_mediaRemoteNowPlayingClient - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
+(void*)_nowPlayingClientFromNotification:(id)arg1 ;
-(void*)mediaRemoteNowPlayingClient;
-(id)initWithMRNowPlayingClient:(void*)arg1 ;
-(id)initFromNotification:(id)arg1 ;
-(BOOL)shouldHandleNotification:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)displayName;
@end
