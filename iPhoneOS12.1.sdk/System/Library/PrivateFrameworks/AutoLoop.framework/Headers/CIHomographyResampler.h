/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:32 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AutoLoop/AutoLoop-Structs.h>
#import <AutoLoop/ImageHomographyResampler.h>

@class CIContext;

@interface CIHomographyResampler : ImageHomographyResampler {

	CIContext* _ctx;

}
-(CVBufferRef)ResampleCVPixels:(CVBufferRef)arg1 clipToRect:(CGRect)arg2 outputSize:(CGSize)arg3 ;
-(id)init;
@end
