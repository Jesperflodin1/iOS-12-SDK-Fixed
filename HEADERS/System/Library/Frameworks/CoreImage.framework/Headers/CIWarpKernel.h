/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:41 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIKernel.h>

@interface CIWarpKernel : CIKernel

@property (assign,nonatomic) BOOL perservesAlpha; 
@property (assign,nonatomic) BOOL preservesRange; 
+(id)kernelWithString:(id)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 inputImage:(id)arg3 arguments:(id)arg4 ;
-(id)_initWithReflection:(CIKernelReflection*)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(BOOL)perservesAlpha;
-(BOOL)preservesRange;
-(void)setPreservesRange:(BOOL)arg1 ;
-(BOOL)canReduceOutputChannels;
-(void)setCanReduceOutputChannels:(BOOL)arg1 ;
-(CGRect)autogenerateROI:(WarpKernel*)arg1 args:(SerialObjectPtrArray*)arg2 arguments:(id)arg3 extent:(CGRect)arg4 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 inputImage:(id)arg3 arguments:(id)arg4 options:(id)arg5 ;
-(id)generateGeneralKernelFromWarpKernel:(WarpKernel*)arg1 args:(SerialObjectPtrArray*)arg2 ;
-(id)generateMainFromWarpKernel:(WarpKernel*)arg1 args:(SerialObjectPtrArray*)arg2 ;
-(id)makeGridImage:(CGRect)arg1 nx:(int)arg2 ny:(int)arg3 ;
-(void)setPerservesAlpha:(BOOL)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(id)initWithString:(id)arg1 ;
@end

