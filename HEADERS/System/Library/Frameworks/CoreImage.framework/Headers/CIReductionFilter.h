/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:41 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIReductionFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputExtent;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputExtent; 
+(id)customAttributes;
-(CIVector *)inputExtent;
-(void)setInputExtent:(CIVector *)arg1 ;
-(id)_reduceCrop;
-(id)offsetAndCrop;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end
