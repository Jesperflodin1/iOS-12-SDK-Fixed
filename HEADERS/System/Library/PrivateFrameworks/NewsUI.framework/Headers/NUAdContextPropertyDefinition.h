//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NSCopying-Protocol.h>

@class NSString, NUAdContextDefinition;

@interface NUAdContextPropertyDefinition : NSObject <NSCopying>
{
    NSString *_keyPath;
    Class _valueClass;
    unsigned long long _requirement;
    id _defaultValue;
    NUAdContextDefinition *_nestedDefinition;
}

@property(retain, nonatomic) NUAdContextDefinition *nestedDefinition; // @synthesize nestedDefinition=_nestedDefinition;
@property(readonly, nonatomic) id defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, nonatomic) unsigned long long requirement; // @synthesize requirement=_requirement;
@property(readonly, nonatomic) Class valueClass; // @synthesize valueClass=_valueClass;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)validateValue:(id)arg1;
- (id)initWithKey:(id)arg1 valueClass:(Class)arg2 requirement:(unsigned long long)arg3 defaultValue:(id)arg4;
- (id)initWithKey:(id)arg1 nestedDefinition:(id)arg2 requirement:(unsigned long long)arg3;

@end
