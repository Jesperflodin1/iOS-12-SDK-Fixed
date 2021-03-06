//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXCPLServiceUIDelegate-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSString, PHFetchResult, PHMomentShare, PXCPLServiceUI;

@interface PXCMMAssetsProgressListener : PXObservable <PXPhotoLibraryUIChangeObserver, PXCPLServiceUIDelegate>
{
    long long _presentationStyle;
    PXCPLServiceUI *_cplServiceUI;
    _Bool _isPaused;
    float _activityProgress;
    PHMomentShare *_momentShare;
    long long _type;
    NSString *_assetsTitle;
    NSString *_expirationTitle;
    NSString *_activityTitle;
    NSString *_idleTitle;
    NSString *_pauseTitle;
    NSString *_byline;
    long long _state;
    long long _numberOfAssetsNotCopied;
    PHFetchResult *_downloadingAssetsFetchResult;
    PHFetchResult *_copiedAssetsFetchResult;
    PHFetchResult *_allAssetsFetchResult;
    PHFetchResult *_participantsFetchResult;
    NSString *_pauseStatusDescription;
}

+ (id)new;
@property(copy, nonatomic) NSString *pauseStatusDescription; // @synthesize pauseStatusDescription=_pauseStatusDescription;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(retain, nonatomic) PHFetchResult *participantsFetchResult; // @synthesize participantsFetchResult=_participantsFetchResult;
@property(retain, nonatomic) PHFetchResult *allAssetsFetchResult; // @synthesize allAssetsFetchResult=_allAssetsFetchResult;
@property(retain, nonatomic) PHFetchResult *copiedAssetsFetchResult; // @synthesize copiedAssetsFetchResult=_copiedAssetsFetchResult;
@property(retain, nonatomic) PHFetchResult *downloadingAssetsFetchResult; // @synthesize downloadingAssetsFetchResult=_downloadingAssetsFetchResult;
@property(nonatomic) long long numberOfAssetsNotCopied; // @synthesize numberOfAssetsNotCopied=_numberOfAssetsNotCopied;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) float activityProgress; // @synthesize activityProgress=_activityProgress;
@property(copy, nonatomic) NSString *byline; // @synthesize byline=_byline;
@property(copy, nonatomic) NSString *pauseTitle; // @synthesize pauseTitle=_pauseTitle;
@property(copy, nonatomic) NSString *idleTitle; // @synthesize idleTitle=_idleTitle;
@property(copy, nonatomic) NSString *activityTitle; // @synthesize activityTitle=_activityTitle;
@property(copy, nonatomic) NSString *expirationTitle; // @synthesize expirationTitle=_expirationTitle;
@property(copy, nonatomic) NSString *assetsTitle; // @synthesize assetsTitle=_assetsTitle;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
- (void).cxx_destruct;
- (void)_updatePausedStatus;
- (void)serviceUI:(id)arg1 statusDidChange:(id)arg2;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)_updateCountsAndStatus;
- (_Bool)_showsUploadingStatus;
- (void)_prepareFetchResultsForPhotoLibrary:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)didPerformChanges;
- (id)mutableChangeObject;
@property(readonly, copy) NSString *description;
- (id)initWithMomentShare:(id)arg1 presentationStyle:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

