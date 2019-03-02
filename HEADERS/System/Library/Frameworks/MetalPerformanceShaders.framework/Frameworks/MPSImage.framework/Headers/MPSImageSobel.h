/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageSobel : MPSUnaryImageKernel {

	float _colVec[3];

}

@property (nonatomic,readonly) const float* colorTransform; 
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithDevice:(id)arg1 linearGrayColorTransform:(const float*)arg2 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP9)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 ;
-(const float*)colorTransform;
-(void)encodeWithCoder:(id)arg1 ;
@end
