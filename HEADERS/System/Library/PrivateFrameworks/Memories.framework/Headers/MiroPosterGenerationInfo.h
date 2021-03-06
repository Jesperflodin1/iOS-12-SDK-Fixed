/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:58 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MiroPosterGenerationInfo : NSObject <NSCopying> {

	BOOL _sourceImageWasCloudThumb;
	BOOL _analysisDataWasAvailable;

}

@property (assign) BOOL sourceImageWasCloudThumb;              //@synthesize sourceImageWasCloudThumb=_sourceImageWasCloudThumb - In the implementation block
@property (assign) BOOL analysisDataWasAvailable;              //@synthesize analysisDataWasAvailable=_analysisDataWasAvailable - In the implementation block
-(BOOL)sourceImageWasCloudThumb;
-(BOOL)analysisDataWasAvailable;
-(void)setSourceImageWasCloudThumb:(BOOL)arg1 ;
-(id)storageKeyHint;
-(BOOL)isActualPoster;
-(void)setAnalysisDataWasAvailable:(BOOL)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

