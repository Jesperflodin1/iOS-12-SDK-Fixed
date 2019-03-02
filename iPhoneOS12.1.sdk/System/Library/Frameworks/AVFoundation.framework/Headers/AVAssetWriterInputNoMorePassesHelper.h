/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:25 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>

@class AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputNoMorePassesHelper : AVAssetWriterInputHelper {

	AVAssetWriterInputWritingHelper* _writingHelper;

}
-(id)initWithConfigurationState:(id)arg1 ;
-(long long)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(id)initWithWritingHelper:(id)arg1 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV5)arg2 ;
-(BOOL)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)canPerformMultiplePasses;
-(id)currentPassDescription;
-(void)markCurrentPassAsFinished;
-(void)markAsFinished;
-(void)dealloc;
-(long long)status;
@end
