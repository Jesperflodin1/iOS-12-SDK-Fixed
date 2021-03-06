/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:33 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDFAKControllerDelegateProtocol;
@class PDFDocument, PDFView, AKController, AKToolbarView;

@interface PDFAKDocumentAdaptorPrivate : NSObject {

	BOOL isTornDown;
	PDFDocument* pdfDocument;
	PDFView* pdfView;
	AKController* akController;
	id<PDFAKControllerDelegateProtocol> pdfAKControllerDelegate;
	AKToolbarView* akToolbarView;
	double modelBaseScaleFactor;

}
@end

