//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebInspector/NSObject-Protocol.h>

@class NSDictionary, NSObject, NSString, _RWIRelayConnectionToApplication;
@protocol OS_xpc_object;

@protocol _RWIRelayConnectionToApplicationDelegate <NSObject>
- (void)xpcConnectionFailed:(_RWIRelayConnectionToApplication *)arg1;
- (void)xpcConnection:(_RWIRelayConnectionToApplication *)arg1 receivedMessage:(NSString *)arg2 userInfo:(NSDictionary *)arg3;

@optional
- (void)xpcConnection:(_RWIRelayConnectionToApplication *)arg1 unhandledMessage:(NSObject<OS_xpc_object> *)arg2;
@end
