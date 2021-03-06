//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSInvalidatable-Protocol.h>

@class NSString;
@protocol OS_dispatch_source;

@interface BSDispatchSource : NSObject <BSInvalidatable>
{
    struct dispatch_source_type_s *_type;
    NSObject<OS_dispatch_source> *_source;
    int _activated;
    int _invalidated;
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _cancelHandler;
}

@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)dealloc;
- (id)initWithType:(struct dispatch_source_type_s *)arg1 handle:(unsigned long long)arg2 mask:(unsigned long long)arg3 queue:(id)arg4 configureSourceBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

