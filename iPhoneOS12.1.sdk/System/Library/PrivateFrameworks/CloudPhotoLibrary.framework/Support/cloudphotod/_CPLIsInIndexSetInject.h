//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PQLInjecting-Protocol.h"

@class NSData, NSIndexSet, NSString;

@interface _CPLIsInIndexSetInject : NSObject <PQLInjecting>
{
    NSData *_sql;
    id _injection;
    id _keepAlive;
    unsigned long long _onlyIndex;
    NSIndexSet *_indexSet;
}

@property(readonly, nonatomic) NSIndexSet *indexSet; // @synthesize indexSet=_indexSet;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)bindValuesToKeepAlive;
@property(readonly, nonatomic) NSData *sql;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;
- (id)initWithInjection:(id)arg1 indexSet:(id)arg2 exclude:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
