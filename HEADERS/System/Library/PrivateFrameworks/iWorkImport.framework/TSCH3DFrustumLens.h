//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DRectangleLens.h>

__attribute__((visibility("hidden")))
@interface TSCH3DFrustumLens : TSCH3DRectangleLens
{
}

- (void)calculateCullingPlanes:(vector_5e6a89be *)arg1;
- (struct FrustumRect)frustumRectAtDistance:(float)arg1;
- (tmat4x4_3074befe)matrix;

@end

