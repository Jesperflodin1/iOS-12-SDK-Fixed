/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:32 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSUserDefaults : NSObject {

	id _kvo_;
	CFStringRef _identifier_;
	CFStringRef _container_;
	void** _reserved[2];

}
+(id)c2DefaultsDomain;
+(id)tu_defaults;
+(id)safari_cloudBookmarksDefaults;
+(id)_IMAppObjectForKey:(id)arg1 ;
+(void)_IMSetObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
+(id)_IMObjectForKey:(id)arg1 inDomain:(id)arg2 ;
+(id)_IMAgentObjectForKey:(id)arg1 ;
+(id)_webkit_preferredLanguageCode;
+(void)_ensureAndLockPreferredLanguageLock;
+(void)_web_addDefaultsChangeObserver;
+(void)_web_defaultsDidChange;
+(id)_web_preferredLanguageCode;
+(void)setStandardUserDefaults:(id)arg1 ;
+(void)resetStandardUserDefaults;
+(id)_copyStandardUserDefaultsIfPresent;
+(id)standardUserDefaults;
-(void)safari_setDate:(id)arg1 forKey:(id)arg2 ;
-(id)safari_dateForKey:(id)arg1 ;
-(BOOL)boolValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(long long)int64ValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(double)doubleValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(id)stringValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(const char*)utf8ValueSafeForKey:(id)arg1 status:(int*)arg2 ;
-(BOOL)boolValueSafeForKey:(id)arg1 ;
-(long long)int64ValueSafeForKey:(id)arg1 ;
-(double)doubleValueSafeForKey:(id)arg1 ;
-(id)stringValueSafeForKey:(id)arg1 ;
-(const char*)utf8ValueSafeForKey:(id)arg1 ;
-(id)DOC_roleSpecificKeyForKey:(id)arg1 configuration:(id)arg2 ;
-(void)DOC_setObject:(id)arg1 forRoleKey:(id)arg2 configuation:(id)arg3 ;
-(BOOL)bs_defaultExists:(id)arg1 ;
-(id)bs_domain;
-(void)bs_setDomain:(id)arg1 ;
-(void)_willBeginKeyValueObserving;
-(void)_didEndKeyValueObserving;
-(void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3 ;
-(id)_initWithSuiteName:(id)arg1 container:(id)arg2 ;
-(id)objectForKey:(id)arg1 inDomain:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 inDomain:(id)arg2 ;
-(long long)longForKey:(id)arg1 ;
-(void)setLong:(long long)arg1 forKey:(id)arg2 ;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(id)searchList;
-(void)setSearchList:(id)arg1 ;
-(void)removeSuiteNamed:(id)arg1 ;
-(id)volatileDomainNames;
-(void)setVolatileDomain:(id)arg1 forName:(id)arg2 ;
-(void)removeVolatileDomainForName:(id)arg1 ;
-(id)persistentDomainNames;
-(void)removePersistentDomainForName:(id)arg1 ;
-(BOOL)objectIsForcedForKey:(id)arg1 ;
-(BOOL)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2 ;
-(id)persistentDomainForName:(id)arg1 ;
-(void)setPersistentDomain:(id)arg1 forName:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)addSuiteNamed:(id)arg1 ;
-(id)stringArrayForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(id)initWithUser:(id)arg1 ;
-(void)finalize;
-(id)volatileDomainForName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(oneway void)release;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithSuiteName:(id)arg1 ;
-(BOOL)synchronize;
-(BOOL)boolForKey:(id)arg1 ;
-(void)registerDefaults:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(BOOL)_observingCFPreferences;
-(CFStringRef)_identifier;
-(void)_setContainer:(CFURLRef)arg1 ;
-(CFStringRef)_container;
-(void)_setIdentifier:(CFStringRef)arg1 ;
@end

