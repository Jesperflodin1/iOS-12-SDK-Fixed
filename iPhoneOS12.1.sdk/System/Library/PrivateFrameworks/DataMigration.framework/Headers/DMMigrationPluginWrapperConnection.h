//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DMXPCConnection;

@interface DMMigrationPluginWrapperConnection : NSObject
{
    DMXPCConnection *_connection;
}

+ (id)connection;
- (void).cxx_destruct;
- (void)handleMessage:(id)arg1;
- (void)runPluginAtPath:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (int)pid;
- (void)invalidate;
- (void)resume;
- (id)init;

@end
