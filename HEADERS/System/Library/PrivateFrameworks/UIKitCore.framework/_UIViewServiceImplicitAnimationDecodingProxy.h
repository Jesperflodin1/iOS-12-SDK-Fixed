//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UITargetedProxy.h>

#import <UIKitCore/_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface-Protocol.h>

@class NSString, _UIViewAnimationAttributes;

__attribute__((visibility("hidden")))
@interface _UIViewServiceImplicitAnimationDecodingProxy : _UITargetedProxy <_UIViewServiceImplicitAnimationDecodingProxy_EncodingProxyInterface>
{
    SEL _implicitAnimationSelector;
    _UIViewAnimationAttributes *_animationAttributes;
    _Bool _animationsEnabled;
}

+ (id)proxyDecodingAnimationsForTarget:(id)arg1;
- (void).cxx_destruct;
- (void)__animateNextInvocationOfSelector:(id)arg1 withAnimationAttributes:(id)arg2 animationsEnabled:(_Bool)arg3;
- (void)forwardInvocation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
