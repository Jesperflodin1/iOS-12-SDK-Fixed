/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:33 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFPageLayerInterface;
#import <PDFKit/PDFKit-Structs.h>
@class NSUUID, PDFAnnotation, NSMutableDictionary, PDFSelection, CALayer, PDFTimer, LoupeRenderRequest;

@interface PDFPageLayerEffectPrivate : NSObject {

	id<PDFPageLayerInterface> pageLayer;
	NSUUID* uuid;
	CGRect pageFrame;
	BOOL shouldRotateContent;
	PDFAnnotation* annotation;
	NSMutableDictionary* markupEffectLayers;
	PDFSelection* selection;
	NSMutableDictionary* selectionEffectLayers;
	BOOL showTextSelectionHandle;
	SCD_Struct_PD21 pageInfo;
	CALayer* rootSelectionLayer;
	CALayer* selectionStartHandle;
	CALayer* selectionEndHandle;
	PDFTimer* zoomTimer;
	CALayer* textMagnifierLayer;
	CGImageRef magnifierImageMask;
	CGSize magnifierSize;
	CALayer* lollipopMagnifierLayer;
	CGImageRef lollipopImageMask;
	CGSize lollipopSize;
	LoupeRenderRequest* loupeRenderRequest;
	os_unfair_lock_s loupeRenderRequestLock;

}
@end

