//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/RERelevanceEnginePreferencesDelegate-Protocol.h>

@class NSMapTable, NSString, RERelevanceEnginePreferences;

@interface RERelevanceEnginePreferencesController : NSObject <RERelevanceEnginePreferencesDelegate>
{
    NSMapTable *_preferences;
    RERelevanceEnginePreferences *_effectivePreferences;
}

- (void).cxx_destruct;
- (void)relevanceEnginePreferencesDidUpdate:(id)arg1;
- (void)_resetEffectivePreferences;
- (void)removePreferencesForObject:(id)arg1;
- (void)setPreferences:(id)arg1 forObject:(id)arg2;
@property(readonly, nonatomic) RERelevanceEnginePreferences *effectivePreferences;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
