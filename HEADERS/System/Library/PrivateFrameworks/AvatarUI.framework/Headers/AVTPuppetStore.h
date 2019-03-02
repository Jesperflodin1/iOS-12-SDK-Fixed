//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AVTPuppetStore : NSObject
{
    NSArray *_puppetRecords;
}

+ (id)createPuppetRecords;
@property(copy, nonatomic) NSArray *puppetRecords; // @synthesize puppetRecords=_puppetRecords;
- (void).cxx_destruct;
- (id)allAvatarPuppetsWithError:(id *)arg1;
- (id)avatarsWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)avatarPuppetsForFetchRequest:(id)arg1 error:(id *)arg2;
- (void)loadPuppetRecordsIfNeeded;
- (id)allPuppetRecords;
- (id)initWithEnvironment:(id)arg1;

@end
