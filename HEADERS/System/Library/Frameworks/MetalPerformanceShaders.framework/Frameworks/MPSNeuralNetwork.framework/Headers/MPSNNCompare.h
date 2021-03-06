/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:32 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSCNNArithmetic.h>

@interface MPSNNCompare : MPSCNNArithmetic {

	float _threshold;
	unsigned long long _comparisonType;

}

@property (assign,nonatomic) unsigned long long comparisonType;              //@synthesize comparisonType=_comparisonType - In the implementation block
@property (assign,nonatomic) float threshold;                                //@synthesize threshold=_threshold - In the implementation block
-(void)setThreshold:(float)arg1 ;
-(void)setComparisonType:(unsigned long long)arg1 ;
-(float)threshold;
-(id)initWithDevice:(id)arg1 ;
-(unsigned long long)comparisonType;
@end

