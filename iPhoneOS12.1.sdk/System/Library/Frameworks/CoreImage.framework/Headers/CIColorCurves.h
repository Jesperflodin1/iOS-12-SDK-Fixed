/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:41 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSData, CIVector;

@interface CIColorCurves : CIFilter {

	CIImage* inputImage;
	NSData* inputCurvesData;
	CIVector* inputCurvesDomain;
	id inputColorSpace;
	CIImage* _curvesImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSData * inputCurvesData; 
@property (nonatomic,retain) CIVector * inputCurvesDomain; 
@property (nonatomic,retain) id inputColorSpace; 
+(id)customAttributes;
-(BOOL)_checkInputs;
-(id)curvesImage;
-(void)setInputCurvesData:(NSData *)arg1 ;
-(CIVector *)inputCurvesDomain;
-(void)setInputCurvesDomain:(CIVector *)arg1 ;
-(NSData *)inputCurvesData;
-(id)inputColorSpace;
-(void)setInputColorSpace:(id)arg1 ;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)dealloc;
-(id)outputImage;
@end
