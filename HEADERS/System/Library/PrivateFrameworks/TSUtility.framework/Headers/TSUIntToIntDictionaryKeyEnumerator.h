//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSUIntToIntDictionaryKeyEnumerator : NSObject
{
    long long **_keys;
    unsigned long long _count;
    unsigned long long _index;
}

- (long long)nextKey;
- (void)dealloc;
- (id)initWithIntegerKeyDictionary:(id)arg1;

@end
