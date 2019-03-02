/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:34 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <PhotoImaging/PIAutoLoopVideoNode.h>

@interface PIAutoLoopMirrorVideoNode : PIAutoLoopVideoNode
-(id)resolvedNodeWithCachedInputs:(NSDictionary*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateVideo:(out id*)arg1 ;
-(id)_evaluateVideoComposition:(out id*)arg1 ;
-(BOOL)requiresVideoComposition;
-(BOOL)requiresAudioMix;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(id)_evaluateAudioMix:(out id*)arg1 ;
-(SCD_Struct_PI14)_conformTime:(SCD_Struct_PI14)arg1 ;
@end
