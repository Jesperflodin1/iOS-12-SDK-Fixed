/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:09 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusKit/OpusKit-Structs.h>
@interface OKMediaImage : NSObject {

	CGImageRef _cgImageRef;
	long long _imageOrientation;
	double _scale;

}

@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,readonly) long long imageOrientation;              //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (nonatomic,readonly) double scale;                            //@synthesize scale=_scale - In the implementation block
+(id)mediaImageWithCGImage:(CGImageRef)arg1 ;
+(id)mediaImageWithUIImage:(id)arg1 ;
-(id)initWithUIImage:(id)arg1 ;
-(CGImageRef)createComposedImage:(BOOL)arg1 colorSpace:(id)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 imageOrientation:(long long)arg2 scale:(double)arg3 ;
-(id)init;
-(void)dealloc;
-(double)scale;
-(CGImageRef)CGImage;
-(long long)imageOrientation;
-(id)initWithCGImage:(CGImageRef)arg1 ;
@end

