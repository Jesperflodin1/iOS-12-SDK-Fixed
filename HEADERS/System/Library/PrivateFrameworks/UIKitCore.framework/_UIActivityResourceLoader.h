//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIActivityResourceLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _loadBlock;
    NSObject<OS_dispatch_group> *_group;
    id _resource;
}

- (void).cxx_destruct;
- (void)getResourceWithBlock:(CDUnknownBlockType)arg1;
- (void)_getResourceWithBlock:(CDUnknownBlockType)arg1;
- (void)loadResourceIfNeeded;
- (void)_loadResourceWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1 loadBlock:(CDUnknownBlockType)arg2;

@end

