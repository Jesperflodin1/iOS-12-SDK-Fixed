/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:36:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPPnPSolver : NSObject {

	float _fu;
	float _fv;
	float _uc;
	float _vc;
	const float* _points2D;
	const float* _points3D;
	int _numPoints;
	float _controlPointsWorld[4][3];
	float _controlPointsCamera[4][3];
	const float* _pointsWorld;
	const float* _pointsImage;
	float* _alphas;
	float* _points3DCamera;
	float _cameraOrientation;
	SCD_Struct_VC10 _pose;

}

@property (assign) SCD_Struct_VC10 pose;              //@synthesize pose=_pose - In the implementation block
-(SCD_Struct_VC10)pose;
-(void)updateFocalLengthInPixels:(float)arg1 ;
-(id)initWithFocalLengthInPixels:(float)arg1 principalPoint:(CGPoint)arg2 cameraTowardsPositiveZ:(BOOL)arg3 ;
-(int)estimateExtrinsicsWith:(const float*)arg1 andPoints3D:(const float*)arg2 andNumPoints:(int)arg3 ;
-(void)computeControlPointsCamera:(const float*)arg1 Vt:(Matrix<float, 0, 0>*)arg2 ;
-(void)computePoints3DCamera;
-(int)correctSigns;
-(int)computeRT:(float)arg1 T:(float)arg2 ;
-(float)computeProjectionError:(float)arg1 T:(float)arg2 ;
-(int)configureGaussNewton:(Matrix<float, 0, 0>*)arg1 R6x1:(Matrix<float, 0, 0>*)arg2 betas:(float)arg3 jacobian:(Matrix<float, 0, 0>*)arg4 residual:(Matrix<float, 0, 0>*)arg5 ;
-(int)getControlPoints;
-(int)computeBarycentricCoordinates;
-(int)computeSVDVt:(Matrix<float, 0, 0>*)arg1 Vt:(Matrix<float, 0, 0>*)arg2 ;
-(int)computeL6x10:(Matrix<float, 0, 0>*)arg1 L6x10:(Matrix<float, 0, 0>*)arg2 ;
-(void)computeR6x1:(Matrix<float, 0, 0>*)arg1 ;
-(int)estimateBetasN1:(Matrix<float, 0, 0>*)arg1 R6x1:(Matrix<float, 0, 0>*)arg2 betas:(float*)arg3 ;
-(int)estimateBetasN2:(Matrix<float, 0, 0>*)arg1 R6x1:(Matrix<float, 0, 0>*)arg2 betas:(float*)arg3 ;
-(int)estimateBetasN3:(Matrix<float, 0, 0>*)arg1 R6x1:(Matrix<float, 0, 0>*)arg2 betas:(float*)arg3 ;
-(int)optimizeBetas:(Matrix<float, 0, 0>*)arg1 R6x1:(Matrix<float, 0, 0>*)arg2 betas:(float)arg3 ;
-(int)estimateRT:(Matrix<float, 0, 0>*)arg1 betas:(const float*)arg2 R:(float)arg3 T:(float)arg4 projectionError:(float*)arg5 ;
-(int)estimatePose:(float*)arg1 ;
-(void)updateIntrinsic:(float)arg1 vc:(float)arg2 ;
-(void)setPose:(SCD_Struct_VC10)arg1 ;
-(void)dealloc;
@end
