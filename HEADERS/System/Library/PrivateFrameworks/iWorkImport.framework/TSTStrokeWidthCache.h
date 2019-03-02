//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSTStrokeWidthCache : NSObject
{
    unsigned int mCount;
    struct _opaque_pthread_rwlock_t mLock;
    vector_b67dfe3a mStrokeWidth;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setStrokeWidth:(double)arg1 forGridIndex:(unsigned int)arg2;
- (double)strokeWidthForGridIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end
