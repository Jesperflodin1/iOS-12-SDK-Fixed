//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Weather/WeatherPreferencesPersistence-Protocol.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface WeatherInMemoryDefaults : NSObject <WeatherPreferencesPersistence>
{
    _Bool _synchronizeWasCalled;
    NSMutableDictionary *_inMemoryStore;
}

@property(readonly) _Bool synchronizeWasCalled; // @synthesize synchronizeWasCalled=_synchronizeWasCalled;
@property(retain) NSMutableDictionary *inMemoryStore; // @synthesize inMemoryStore=_inMemoryStore;
- (void).cxx_destruct;
- (_Bool)synchronize;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
