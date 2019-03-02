//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

#import "NSCopying-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface AppUpdateMemoryEntity : SQLiteMemoryEntity <NSCopying>
{
    NSString *_bundleID;
    NSNumber *_itemID;
    NSNumber *_evid;
    NSString *_buyParams;
    long long _parentalControlsRank;
    NSDate *_releaseDate;
}

+ (Class)databaseEntityClass;
@property(readonly, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(readonly, nonatomic) long long parentalControlsRank; // @synthesize parentalControlsRank=_parentalControlsRank;
@property(readonly, nonatomic) NSString *buyParams; // @synthesize buyParams=_buyParams;
- (void).cxx_destruct;
- (long long)_parentalControlsRank:(id)arg1;
- (void)_importFromDictionary:(id)arg1;
- (id)_externalVersionIdentifier:(id)arg1;
- (id)_buyParams:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)setUpdateState:(long long)arg1;
@property(nonatomic, getter=isPerDevice) _Bool perDevice;
@property(nonatomic, getter=isProfileValidated) _Bool profileValidated;
- (void)setMetricsData:(id)arg1;
@property(nonatomic) NSDate *installDate;
@property(nonatomic, getter=isBackground) _Bool background;
@property(nonatomic, getter=isOffloaded) _Bool offloaded;
- (id)rawUpdateDictionary;
@property(readonly, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) NSNumber *evid; // @synthesize evid=_evid;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)initWithUpdateDictionary:(id)arg1;
- (id)init;

@end
