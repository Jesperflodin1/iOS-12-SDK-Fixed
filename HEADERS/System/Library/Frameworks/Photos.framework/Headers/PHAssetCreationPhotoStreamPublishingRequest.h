/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, PLManagedAsset;

@interface PHAssetCreationPhotoStreamPublishingRequest : NSObject {

	NSURL* _fileURL;
	PLManagedAsset* _asset;

}

@property (nonatomic,copy) NSURL * fileURL;                       //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) PLManagedAsset * asset;              //@synthesize asset=_asset - In the implementation block
-(void)setFileURL:(NSURL *)arg1 ;
-(NSURL *)fileURL;
-(void)setAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)asset;
@end

