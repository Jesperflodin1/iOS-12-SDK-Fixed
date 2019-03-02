//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCProxyCreating-Protocol.h"

@class NSError, NSString;
@protocol NSXPCProxyCreating;

@interface FPDXPCRemoteObjectProxy : NSObject <NSXPCProxyCreating>
{
    NSObject<NSXPCProxyCreating> *_target;
    NSError *_error;
    CDUnknownBlockType _requestFinishedBlock;
    CDUnknownBlockType _messageInitiationBlock;
    NSString *_name;
    id _retainSelfWhileMessageIsPending;
    _Bool _isSynchronous;
    int _pid;
}

@property(copy, nonatomic) CDUnknownBlockType requestFinishedBlock; // @synthesize requestFinishedBlock=_requestFinishedBlock;
@property(nonatomic) int requestEffectivePid; // @synthesize requestEffectivePid=_pid;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_requestDidFinish;
- (id)remoteObjectProxy;
- (id)initWithXPCObject:(id)arg1 orError:(id)arg2 name:(id)arg3 requestPid:(int)arg4 messageInitiationBlock:(CDUnknownBlockType)arg5;
- (id)initWithXPCObject:(id)arg1 orError:(id)arg2 name:(id)arg3 requestPid:(int)arg4;

@end
