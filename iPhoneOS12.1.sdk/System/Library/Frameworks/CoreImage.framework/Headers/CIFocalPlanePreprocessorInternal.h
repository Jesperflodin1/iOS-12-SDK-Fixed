/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:43 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIFocalPlanePreprocessorInternal : CIFilter {

	CIImage* inputImage;
	CIImage* inputMatteImage;
	CIVector* inputFocusRect;
	NSNumber* inputZeroShiftPercentile;
	NSNumber* inputAlphaThreshold;
	NSNumber* inputAmplitude;
	NSNumber* inputExponent;
	NSNumber* inputGamma;
	NSNumber* inputMinFactor;
	NSNumber* inputMaxFactor;

}
+(id)customAttributes;
-(id)outputImage;
@end
