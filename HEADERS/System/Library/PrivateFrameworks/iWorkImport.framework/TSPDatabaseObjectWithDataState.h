//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPDatabaseObject.h>

__attribute__((visibility("hidden")))
@interface TSPDatabaseObjectWithDataState : TSPDatabaseObject
{
    long long _dataState;
}

- (id)fileURL;
- (id)fileState;
- (_Bool)hasFileState;
- (long long)dataState;
- (_Bool)hasDataState;
- (id)initWithIdentifier:(long long)arg1 classType:(int)arg2 dataState:(long long)arg3;

@end

