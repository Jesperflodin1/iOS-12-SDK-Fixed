//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface MSASModelEnumerator : NSEnumerator
{
    struct sqlite3 *_db;
    struct sqlite3_stmt *_stmt;
    CDUnknownBlockType _stepBlock;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)enumeratorWithDatabase:(struct sqlite3 *)arg1 query:(id)arg2 stepBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType stepBlock; // @synthesize stepBlock=_stepBlock;
@property(nonatomic) struct sqlite3_stmt *stmt; // @synthesize stmt=_stmt;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (id)nextObject;
- (void)dealloc;
- (id)initWithDatabase:(struct sqlite3 *)arg1 query:(id)arg2 stepBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end
