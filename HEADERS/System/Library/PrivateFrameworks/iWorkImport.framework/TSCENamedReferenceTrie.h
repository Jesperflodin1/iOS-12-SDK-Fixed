//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale;

__attribute__((visibility("hidden")))
@interface TSCENamedReferenceTrie : NSObject
{
    struct TSCENamedReferenceTrieNode _root;
    NSLocale *_locale;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)trackedReferencesExactlyMatchingString:(id)arg1 scopedToTable:(const UUIDData_5fbc143e *)arg2;
- (id)trackedReferencesMatchingString:(id)arg1 scopedToTable:(const UUIDData_5fbc143e *)arg2;
- (_Bool)replaceName:(id)arg1 withName:(id)arg2 inTable:(const UUIDData_5fbc143e *)arg3 trackedReference:(id)arg4;
- (void)deleteName:(id)arg1 inTable:(const UUIDData_5fbc143e *)arg2 trackedReference:(id)arg3;
- (_Bool)insertName:(id)arg1 inTable:(const UUIDData_5fbc143e *)arg2 trackedReference:(id)arg3;
- (id)initWithLocale:(id)arg1;

@end
