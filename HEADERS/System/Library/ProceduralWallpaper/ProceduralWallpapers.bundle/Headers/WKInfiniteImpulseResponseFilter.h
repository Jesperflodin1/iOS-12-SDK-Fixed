/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:56:41 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WKInfiniteImpulseResponseFilter : NSObject {

	unsigned long long _count;
	double* _ffC;
	double* _fbC;
	double* _inputHistory;
	double* _outputHistory;
	double _zeroGradientThreshold;

}

@property (assign,nonatomic) double zeroGradientThreshold;              //@synthesize zeroGradientThreshold=_zeroGradientThreshold - In the implementation block
+(id)lowpassFilterWithCoefficient:(double)arg1 ;
+(id)lowpassInertiaFilterWithCoefficient:(double)arg1 ;
-(double)output;
-(id)initWithCount:(unsigned long long)arg1 feedforwardCoefficients:(double*)arg2 feedbackCoefficients:(double*)arg3 ;
-(void)setLowpassInertiaFilterCoefficient:(double)arg1 ;
-(double)filterWithInput:(double)arg1 ;
-(double)outputGradient;
-(BOOL)zeroGradient;
-(void)resetToValue:(double)arg1 ;
-(double)zeroGradientThreshold;
-(void)setZeroGradientThreshold:(double)arg1 ;
-(void)dealloc;
@end
