//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXCMMActionPerformer.h>

#import <PhotosUICore/PXCMMPhotoKitActionPerformer-Protocol.h>

@class PXCMMPhotoKitSession;

@interface PXCMMPhotoKitCleanupActionPerformer : PXCMMActionPerformer <PXCMMPhotoKitActionPerformer>
{
}

- (void)_activateSuggestion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performBackgroundTask;

// Remaining properties
@property(readonly, nonatomic) PXCMMPhotoKitSession *session;

@end
