/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:41 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIVisualEffect.h>

@class CAMeshTransform;

@interface _UIMeshEffect : UIVisualEffect {

	CAMeshTransform* _meshTransform;
	CAMeshTransform* _identityMeshTransform;
	BOOL _underlayMesh;

}
+(id)meshEffectZoom:(double)arg1 ;
+(id)_underlayMeshEffectZoom:(double)arg1 ;
-(void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2 ;
-(id)_viewEntry;
@end
