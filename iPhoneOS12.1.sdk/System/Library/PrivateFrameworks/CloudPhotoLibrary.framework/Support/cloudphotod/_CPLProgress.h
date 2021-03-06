//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLEngineSyncManager, NSMutableDictionary, NSProgress, NSString;

@interface _CPLProgress : NSObject
{
    NSProgress *_progress;
    NSMutableDictionary *_userInfo;
    _Bool _publishing;
    _Bool _firstSyncForMainLibrary;
    _Bool _foreground;
    CPLEngineSyncManager *_syncManager;
    NSString *_identifier;
    long long _totalUnitCount;
    long long _completedUnitCount;
}

@property(nonatomic) long long completedUnitCount; // @synthesize completedUnitCount=_completedUnitCount;
@property(nonatomic) long long totalUnitCount; // @synthesize totalUnitCount=_totalUnitCount;
@property(nonatomic, getter=isForeground) _Bool foreground; // @synthesize foreground=_foreground;
@property(readonly, nonatomic) _Bool firstSyncForMainLibrary; // @synthesize firstSyncForMainLibrary=_firstSyncForMainLibrary;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) CPLEngineSyncManager *syncManager; // @synthesize syncManager=_syncManager;
- (void).cxx_destruct;
- (void)unpublish;
- (void)publish;
- (void)_publishRealProgressIfNecessary;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)initWithIdentifier:(id)arg1 firstSyncOfMainLibrary:(_Bool)arg2;

@end

