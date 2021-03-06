//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, SCRCTargetSelectorTimer, SCROConnection;
@protocol OS_dispatch_queue;

@interface SCROScriptClient : NSObject
{
    NSLock *_lock;
    SCROConnection *_connection;
    SCRCTargetSelectorTimer *_timer;
    _Bool _isReady;
    NSObject<OS_dispatch_queue> *__scriptDispatchQueue;
}

+ (id)sharedClient;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_scriptDispatchQueue; // @synthesize _scriptDispatchQueue=__scriptDispatchQueue;
- (void).cxx_destruct;
- (_Bool)runScriptFile:(id)arg1;
- (void)handleCallback:(id)arg1;
- (_Bool)_isReady;
- (id)_lazyConnection;
- (void)_killConnection;
- (void)dealloc;
- (id)init;

@end

