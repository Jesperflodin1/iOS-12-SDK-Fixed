/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:32 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSNeuralNetwork.framework/MPSNeuralNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSState.h>

@interface MPSRNNRecurrentImageState : MPSState {

	id* recurrentImages;
	id* cellImages;
	int nLayers;
	BOOL _isTemporary;

}
-(id)getRecurrentOutputImageForLayerIndex:(unsigned long long)arg1 ;
-(id)getMemoryCellImageForLayerIndex:(unsigned long long)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 recurrentImageDescriptors:(id*)arg2 cellImageDescriptors:(id*)arg3 isTemporary:(BOOL)arg4 layerCount:(int)arg5 ;
-(void)setReadCount:(unsigned long long)arg1 ;
-(BOOL)isTemporary;
-(void)dealloc;
@end

