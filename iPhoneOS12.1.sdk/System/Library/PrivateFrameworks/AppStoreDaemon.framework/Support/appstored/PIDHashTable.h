//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface PIDHashTable : NSObject
{
    NSHashTable *_hash;
}

+ (id)hashTable;
- (void).cxx_destruct;
- (id)_initWithHashTable:(id)arg1;
- (id)description;
- (void)removePID:(long long)arg1;
- (_Bool)containsPID:(long long)arg1;
- (void)addPID:(long long)arg1;

@end
