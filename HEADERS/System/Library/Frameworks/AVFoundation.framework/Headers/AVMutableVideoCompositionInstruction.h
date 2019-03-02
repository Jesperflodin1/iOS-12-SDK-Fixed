/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVVideoCompositionInstruction.h>

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {

	AVMutableVideoCompositionInstructionInternal* _mutableInstruction;

}

@property (assign,nonatomic) SCD_Struct_AV6 timeRange; 
@property (nonatomic,retain) CGColorRef backgroundColor; 
@property (nonatomic,copy) NSArray * layerInstructions; 
@property (assign,nonatomic) BOOL enablePostProcessing; 
+(id)videoCompositionInstruction;
-(BOOL)enablePostProcessing;
-(void)setTimeRange:(SCD_Struct_AV6)arg1 ;
-(SCD_Struct_AV6)timeRange;
-(void)setEnablePostProcessing:(BOOL)arg1 ;
-(NSArray *)layerInstructions;
-(void)setLayerInstructions:(NSArray *)arg1 ;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
@end
