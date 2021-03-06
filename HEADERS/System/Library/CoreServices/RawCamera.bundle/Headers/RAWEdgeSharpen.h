/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:48:28 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWEdgeSharpen : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputPreSharpenAmount;
	NSNumber* inputPreSharpenBlurAmount;
	NSNumber* inputVersion;

}
+(id)customAttributes;
-(id)customAttributes;
-(CGRect)regionOf:(int)arg1 rect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)outputImage;
@end

