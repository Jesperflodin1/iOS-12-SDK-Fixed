//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CompatibilityUpdateRequest : NSObject
{
    NSArray *_bundleIDs;
    _Bool _userInitiated;
}

+ (_Bool)_isOSThinnedVariantID:(id)arg1;
- (void).cxx_destruct;
- (void)_notifyCompatibilityUpdateUnavailableForBundleID:(id)arg1;
- (void)_cancelUpdatePendingForCompanionApp:(id)arg1;
- (id)_appleIDForApp:(id)arg1 error:(id *)arg2;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithBundleIDs:(id)arg1 userInitiated:(_Bool)arg2;

@end

