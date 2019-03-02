//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

@interface RPFileTransferInfo : NSObject
{
    double _bytesPerSecond;
    double _remainingSeconds;
    double _compressionRate;
    NSString *_currentFilename;
    NSUUID *_transferIdentifier;
    long long _transferredByteCount;
    long long _totalByteCount;
    long long _transferredFileCount;
    long long _totalFileCount;
}

@property(readonly, nonatomic) long long totalFileCount; // @synthesize totalFileCount=_totalFileCount;
@property(readonly, nonatomic) long long transferredFileCount; // @synthesize transferredFileCount=_transferredFileCount;
@property(readonly, nonatomic) long long totalByteCount; // @synthesize totalByteCount=_totalByteCount;
@property(readonly, nonatomic) long long transferredByteCount; // @synthesize transferredByteCount=_transferredByteCount;
@property(readonly, copy, nonatomic) NSUUID *transferIdentifier; // @synthesize transferIdentifier=_transferIdentifier;
@property(readonly, copy, nonatomic) NSString *currentFilename; // @synthesize currentFilename=_currentFilename;
@property(readonly, nonatomic) double compressionRate; // @synthesize compressionRate=_compressionRate;
@property(readonly, nonatomic) double remainingSeconds; // @synthesize remainingSeconds=_remainingSeconds;
@property(readonly, nonatomic) double bytesPerSecond; // @synthesize bytesPerSecond=_bytesPerSecond;
- (void).cxx_destruct;
- (id)init;

@end
