/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSMutableDictionary, PHAsset, NSProgress, NSArray, NSMutableArray, NSString;

@interface PHResourceDownloadRequest : NSObject <NSProgressReporting> {

	NSMutableDictionary* _progressByRequestIdentifier;
	/*^block*/id _downloadCompletionHandler;
	BOOL __downloadCancelled;
	PHAsset* _asset;
	long long _requestType;
	double _progressFraction;
	NSProgress* _progress;
	/*^block*/id _progressChangeHandler;
	NSArray* __assetResources;
	NSMutableArray* __activeAssetResourcesRequest;

}

@property (assign,setter=_setProgressFraction:,nonatomic) double progressFraction;                                           //@synthesize progressFraction=_progressFraction - In the implementation block
@property (assign,setter=_setDownloadCancelled:,getter=_isDownloadCancelled,nonatomic) BOOL _downloadCancelled;              //@synthesize _downloadCancelled=__downloadCancelled - In the implementation block
@property (setter=_setAssetResources:,nonatomic,retain) NSArray * _assetResources;                                           //@synthesize _assetResources=__assetResources - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _activeAssetResourcesRequest;                                                //@synthesize _activeAssetResourcesRequest=__activeAssetResourcesRequest - In the implementation block
@property (readonly) PHAsset * asset;                                                                                        //@synthesize asset=_asset - In the implementation block
@property (readonly) long long requestType;                                                                                  //@synthesize requestType=_requestType - In the implementation block
@property (readonly) NSProgress * progress;                                                                                  //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id progressChangeHandler;                                                                         //@synthesize progressChangeHandler=_progressChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resourceInfoForAsset:(id)arg1 requestType:(long long)arg2 error:(id*)arg3 ;
+(id)_resourcesToShareForAsset:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)_resourceInfoForAsset:(id)arg1 resourcesToShare:(id)arg2 fulfillOnDemandResources:(BOOL)arg3 error:(id*)arg4 ;
+(id)_resourcesToShareForAsset:(id)arg1 error:(id*)arg2 ;
+(id)indexesForAssetsRequiringDownload:(id)arg1 requestType:(long long)arg2 ;
+(id)indexesForAssetsWithoutThumbnails:(id)arg1 requestType:(long long)arg2 ;
-(long long)requestType;
-(BOOL)isDownloadingRequiredForOptions:(id)arg1 resourceInfo:(id*)arg2 ;
-(void)_fetchResourcesWithOptions:(id)arg1 networkAccessAllowed:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)_didFinishDownloadWithSuccess:(BOOL)arg1 resourceInfo:(id)arg2 error:(id)arg3 ;
-(void)_simulateFetchResourcesWithDuration:(double)arg1 success:(BOOL)arg2 networkAccessAllowed:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchResourcesForEditingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchResourcesForPickerAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchResourcesForSharingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_fetchResourcesForDuplicatingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)_updateCombinedProgressWithValue:(double)arg1 forRequestIdentifier:(id)arg2 networkAccessAllowed:(BOOL)arg3 ;
-(BOOL)_isDownloadCancelled;
-(void)_setAssetResources:(id)arg1 ;
-(void)_handleCompletionOfAssetResourceDataRequestWithId:(int)arg1 error:(id)arg2 ;
-(NSMutableArray *)_activeAssetResourcesRequest;
-(void)_setProgressFraction:(double)arg1 ;
-(void)_setDownloadCancelled:(BOOL)arg1 ;
-(void)_cancelActiveAssetResourceRequests;
-(id)progressChangeHandler;
-(NSArray *)_assetResources;
-(id)initWithAsset:(id)arg1 requestType:(long long)arg2 ;
-(void)fetchIsDownloadRequiredWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelDownloadRequest;
-(void)setProgressChangeHandler:(id)arg1 ;
-(void)downloadRequiredResourcesWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(double)progressFraction;
-(id)init;
-(NSProgress *)progress;
-(PHAsset *)asset;
@end
