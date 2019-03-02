/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:35 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Frameworks/Fluid.framework/Fluid
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct FLSimpleSpringState {
	double position;
	double velocity;
} FLSimpleSpringState;

typedef struct FLSimpleSpring {
	FLSimpleSpringState state;
	double mass;
	double stiffness;
	double damping;
	double anchor;
	double stablePositionThreshold;
	double stableVelocityThreshold;
} FLSimpleSpring;

typedef struct FLCompoundSpring {
	FLSimpleSpringState state;
	FLSimpleSpring stiffness;
	FLSimpleSpring damping;
	FLSimpleSpring dampingRatio;
	FLSimpleSpring response;
	FLSimpleSpring anchor;
	BOOL usesDampingRatioResponse;
	double stablePositionThreshold;
	double stableVelocityThreshold;
} FLCompoundSpring;

typedef struct FLSpringParameters {
	double dampingRatio;
	double dampingRatioSmoothing;
	double response;
	double responseSmoothing;
} FLSpringParameters;
