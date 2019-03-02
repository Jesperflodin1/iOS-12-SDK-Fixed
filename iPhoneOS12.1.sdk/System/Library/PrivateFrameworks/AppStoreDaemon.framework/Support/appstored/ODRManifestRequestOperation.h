//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ODROperation.h"

@class ODRApplication, ODRAssetPackManifest;

@interface ODRManifestRequestOperation : ODROperation
{
    ODRApplication *_application;
    ODRAssetPackManifest *_manifest;
}

+ (id)_newRequestPropertiesForApplication:(id)arg1 error:(id *)arg2;
+ (id)_fetchManifestForApplication:(id)arg1 error:(id *)arg2;
+ (id)_copyRequestForBetaApplication:(id)arg1;
+ (id)_copyRequestForApplication:(id)arg1;
+ (id)_copyAuditBundleIDForApplication:(id)arg1;
@property(retain) ODRAssetPackManifest *manifest; // @synthesize manifest=_manifest;
- (void).cxx_destruct;
- (_Bool)run;
- (id)initWithApplication:(id)arg1;

@end
