/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:32 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFView, PDFLayerController, UIColor;

@interface PDFRenderingPropertiesPrivate : NSObject {

	PDFView* pdfView;
	PDFLayerController* pdfLayerController;
	long long displayBox;
	BOOL shouldAntiAlias;
	double greekingThreshold;
	long long interpolationQuality;
	double lineWidthThreshold;
	UIColor* pageColor;
	BOOL forceWebKitMainThread;
	BOOL enablePageShadows;
	BOOL enableTileEdgeColoring;
	BOOL enableAccessibilityDrawing;
	double screenScaleFactor;
	BOOL enableTileUpdates;
	BOOL isUsingPDFExtensionView;
	CGColorSpaceRef deviceColorSpace;

}
@end
