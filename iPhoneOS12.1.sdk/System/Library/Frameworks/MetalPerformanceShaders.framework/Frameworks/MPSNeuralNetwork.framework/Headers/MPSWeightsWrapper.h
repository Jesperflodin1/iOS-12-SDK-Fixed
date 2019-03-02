/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:33 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSNeuralNetwork/MPSNeuralNetwork-Structs.h>
#import <MPSNeuralNetwork/MPSCNNConvolutionDataSource.h>

@protocol MPSCNNBatchNormalizationDataSource, MPSCNNConvolutionDataSource;
@class MPSCNNConvolutionDescriptor, NSString;

@interface MPSWeightsWrapper : NSObject <MPSCNNConvolutionDataSource> {

	id<MPSCNNBatchNormalizationDataSource> _dataSource;
	id<MPSCNNConvolutionDataSource> _source;
	NeuronInfo _info;
	MPSCNNConvolutionDescriptor* _descriptor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSource:(id)arg1 neuronInfo:(NeuronInfo)arg2 batchNorm:(id)arg3 ;
-(void*)weights;
-(float*)biasTerms;
-(1*)rangesForUInt8Kernel;
-(float*)lookupTableForUInt8Kernel;
-(unsigned)dataType;
-(void)dealloc;
-(BOOL)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptor;
-(id)label;
-(void)purge;
@end
