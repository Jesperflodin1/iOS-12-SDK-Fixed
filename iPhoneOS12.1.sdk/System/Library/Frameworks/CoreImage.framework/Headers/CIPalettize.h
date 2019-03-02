/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPalettize : CIFilter {

	CIImage* inputImage;
	CIImage* inputPaletteImage;
	NSNumber* inputPerceptual;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputPaletteImage; 
@property (nonatomic,retain) NSNumber * inputPerceptual; 
+(id)customAttributes;
-(NSNumber *)inputPerceptual;
-(void)setInputPerceptual:(NSNumber *)arg1 ;
-(id)_kernelApplyPalette;
-(CIImage *)inputPaletteImage;
-(void)setInputPaletteImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end
