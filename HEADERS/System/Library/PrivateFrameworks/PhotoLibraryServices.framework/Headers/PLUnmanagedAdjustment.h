//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSNumber, NSString, PLAdditionalAssetAttributes;

@interface PLUnmanagedAdjustment : PLManagedObject
{
}

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)copyUnmanagedAdjustmentFromSourceAsset:(id)arg1 forPlaceholderAsset:(id)arg2 inLibrary:(id)arg3 error:(id *)arg4;
+ (id)_convertRedEyeCorrection:(id)arg1 withOrientation:(long long)arg2;
+ (id)_convertRedEyeCorrections:(id)arg1 withOrientation:(long long)arg2;
+ (id)addUnmanagedAdjustmentFromXMPDataIfNeededForAsset:(id)arg1;
- (void)willSave;
- (_Bool)isSyncableChange;
- (_Bool)supportsCloudUpload;

// Remaining properties
@property(retain, nonatomic) NSNumber *adjustmentBaseImageFormat; // @dynamic adjustmentBaseImageFormat;
@property(retain, nonatomic) NSString *adjustmentFormatIdentifier; // @dynamic adjustmentFormatIdentifier;
@property(retain, nonatomic) NSString *adjustmentFormatVersion; // @dynamic adjustmentFormatVersion;
@property(nonatomic) unsigned int adjustmentRenderTypes; // @dynamic adjustmentRenderTypes;
@property(retain, nonatomic) NSDate *adjustmentTimestamp; // @dynamic adjustmentTimestamp;
@property(retain, nonatomic) PLAdditionalAssetAttributes *assetAttributes; // @dynamic assetAttributes;
@property(retain, nonatomic) NSString *editorLocalizedName; // @dynamic editorLocalizedName;
@property(retain, nonatomic) NSString *otherAdjustmentsFingerprint; // @dynamic otherAdjustmentsFingerprint;
@property(retain, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint; // @dynamic similarToOriginalAdjustmentsFingerprint;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end
