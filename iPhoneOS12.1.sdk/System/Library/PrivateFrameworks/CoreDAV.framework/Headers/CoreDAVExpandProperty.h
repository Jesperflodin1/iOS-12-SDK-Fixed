//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface CoreDAVExpandProperty : NSObject
{
    NSSet *_propertiesToFind;
    NSString *_expandedName;
    NSString *_expandedNameSpace;
}

@property(retain, nonatomic) NSString *expandedNameSpace; // @synthesize expandedNameSpace=_expandedNameSpace;
@property(retain, nonatomic) NSString *expandedName; // @synthesize expandedName=_expandedName;
@property(retain, nonatomic) NSSet *propertiesToFind; // @synthesize propertiesToFind=_propertiesToFind;
- (void).cxx_destruct;
- (id)initWithPropertiesToFind:(id)arg1 expandedName:(id)arg2 expandedNameSpace:(id)arg3;

@end
