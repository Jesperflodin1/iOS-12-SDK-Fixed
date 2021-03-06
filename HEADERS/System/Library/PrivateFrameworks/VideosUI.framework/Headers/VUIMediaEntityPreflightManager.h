//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VUIMediaEntityPreflightManager : NSObject
{
}

+ (id)defaultManager;
- (_Bool)_isOnWiFi;
- (_Bool)_isOnCellular;
- (_Bool)_isMediaItemPlayableOnCellular:(id)arg1;
- (_Bool)_isRemainingTimeLeftWithinRentalPlaybackWindowWithMediaItem:(id)arg1;
- (_Bool)_shouldWarnStartingRentalPlaybackWindowWithMediaItem:(id)arg1;
- (void)_presentStartingPlaybackWindowWarningWithRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_verifyMediaItemIsPlayableOnCellular:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_determineCellularPlaybackQualityForRentalMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_presentCellularPlaybackIsDisabledAlertControllerWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_presentCantPlaybackOverCellularAlertControllerWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_preflightPlaybackWithMediaItem:(id)arg1 disableLocalAsset:(_Bool)arg2 presentingViewController:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_preflightPlaybackWithMediaItem:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_preflightDownloadWithMediaEntityType:(id)arg1 presentingViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)preflightPlaybackWithMediaItem:(id)arg1 disableLocalAsset:(_Bool)arg2 presentingViewController:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

