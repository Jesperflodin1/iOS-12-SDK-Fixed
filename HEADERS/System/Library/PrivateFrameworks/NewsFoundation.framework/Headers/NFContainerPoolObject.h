//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NFContainerPoolObject : NSObject
{
    unsigned long long _ownership;
    id _strongObject;
    id _weakObject;
}

@property(readonly, nonatomic) __weak id weakObject; // @synthesize weakObject=_weakObject;
@property(readonly, nonatomic) id strongObject; // @synthesize strongObject=_strongObject;
@property(readonly, nonatomic) unsigned long long ownership; // @synthesize ownership=_ownership;
- (void).cxx_destruct;
@property(readonly, nonatomic) id object;
- (id)initWithObject:(id)arg1 ownership:(unsigned long long)arg2;

@end
