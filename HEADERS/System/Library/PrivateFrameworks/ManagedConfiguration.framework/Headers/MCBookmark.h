//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ManagedConfiguration/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface MCBookmark : NSObject <NSCopying>
{
    NSURL *_URL;
    NSString *_title;
    NSString *_path;
}

@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializableDictionary;
- (id)initWithSerializableDictionary:(id)arg1;

@end
