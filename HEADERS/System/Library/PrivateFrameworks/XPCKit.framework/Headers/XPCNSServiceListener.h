//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XPCKit/XPCServiceListenerDelegate-Protocol.h>

@class NSString, XPCServiceListener;
@protocol XPCNSServiceListenerDelegate;

@interface XPCNSServiceListener : NSObject <XPCServiceListenerDelegate>
{
    XPCServiceListener *_serviceListener;
    id <XPCNSServiceListenerDelegate> _delegate;
}

@property(readonly, nonatomic) id <XPCNSServiceListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)XPCServiceListener:(id)arg1 didReceiveNewConnection:(id)arg2;
- (_Bool)XPCServiceListener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(readonly, retain, nonatomic) NSString *serviceName;
- (void)shutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)start;
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
