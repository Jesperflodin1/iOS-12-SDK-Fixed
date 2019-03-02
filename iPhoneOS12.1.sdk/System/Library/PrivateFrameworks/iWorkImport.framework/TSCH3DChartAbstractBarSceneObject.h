//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartElementSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartAbstractBarSceneObject : TSCH3DChartElementSceneObject
{
}

+ (void)setLowDetailedGeometriesForScene:(id)arg1;
+ (Class)propertiesClass;
- (void)sortElements:(vector_d7c2985b *)arg1 pipeline:(id)arg2;
- (tvec3_17f03ce0)sortingPositionForElement:(const struct RenderElementInfo *)arg1;
- (tvec3_17f03ce0)adjustedScaleForInfoChartScale:(const tvec3_17f03ce0 *)arg1 scene:(id)arg2;
- (float)chartMinZForScene:(id)arg1;
- (float)depthForScene:(id)arg1;
- (void)updateElementEffectsStates:(const struct RenderElementInfo *)arg1 depthToWidthRatio:(float)arg2;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState *)arg1 series:(id)arg2 properties:(id)arg3 textureTiling:(id)arg4 areaSize:(tvec3_17f03ce0 *)arg5 element:(tvec2_3b141483 *)arg6;
- (_Bool)shouldRenderEachValue;
- (void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4;
- (tvec2_84d5962d)p_valueLabelPaddingForLabelPosition:(unsigned int)arg1;
- (void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4;

@end
