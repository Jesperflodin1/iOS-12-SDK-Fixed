/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:38 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTMediaItem.h>

@class NSString, NSURL;

@interface JTLocalAssetMediaItem : JTMediaItem {

	NSString* _localFileName;
	NSURL* _localFileURL;

}

@property (nonatomic,copy) NSString * localFileName;              //@synthesize localFileName=_localFileName - In the implementation block
@property (nonatomic,retain) NSURL * localFileURL;                //@synthesize localFileURL=_localFileURL - In the implementation block
-(BOOL)canSaveToCameraRoll;
-(NSString *)localFileName;
-(NSURL *)localFileURL;
-(void)setLocalFileURL:(NSURL *)arg1 ;
-(id)initWithInfo:(id)arg1 delegate:(id)arg2 ;
-(void)setLocalFileName:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)info;
-(id)initWithURL:(id)arg1 ;
@end
