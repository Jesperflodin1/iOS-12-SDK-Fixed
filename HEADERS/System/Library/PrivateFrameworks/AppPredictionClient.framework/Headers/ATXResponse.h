//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSError, NSUUID;

@interface ATXResponse : NSObject <NSSecureCoding>
{
    NSData *_cacheFileData;
    NSUUID *_uuid;
    NSError *_error;
    NSArray *_predictions;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSData *cacheFileData; // @synthesize cacheFileData=_cacheFileData;
@property(readonly, nonatomic) NSArray *predictions; // @synthesize predictions=_predictions;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)enumerateAtxSearchResults:(CDUnknownBlockType)arg1;
- (_Bool)isEqualToResponse:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)jsonDescription;
- (id)json;
- (id)jsonRawData;
- (id)description;
@property(readonly, nonatomic) NSArray *predictedApps;
- (id)init;
- (id)initWithPredictions:(id)arg1 cacheFileData:(id)arg2 error:(id)arg3;

@end
