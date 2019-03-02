/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:34 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSNNGradientFilterNode.h>
#import <MPSNeuralNetwork/MPSNNTrainableNode.h>

@class NSString;

@interface MPSCNNInstanceNormalizationGradientNode : MPSNNGradientFilterNode <MPSNNTrainableNode> {

	unsigned long long _trainingStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long trainingStyle;              //@synthesize trainingStyle=_trainingStyle - In the implementation block
+(id)nodeWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 ;
-(FilterGraphNode*)newFilterNode;
-(id)initWithSourceGradient:(id)arg1 sourceImage:(id)arg2 gradientState:(id)arg3 ;
-(id)initWithGradientImages:(id)arg1 forwardFilter:(id)arg2 ;
-(unsigned long long)trainingStyle;
-(void)setTrainingStyle:(unsigned long long)arg1 ;
@end
