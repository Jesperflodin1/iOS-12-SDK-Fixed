/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKViewController.h>

@class NSData, PDFDocument;

@interface HRPDFViewController : HKViewController {

	NSData* _pdfData;
	PDFDocument* _pdfDocument;

}

@property (nonatomic,retain) NSData * pdfData;                       //@synthesize pdfData=_pdfData - In the implementation block
@property (nonatomic,retain) PDFDocument * pdfDocument;              //@synthesize pdfDocument=_pdfDocument - In the implementation block
-(void)setPdfDocument:(PDFDocument *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(NSData *)pdfData;
-(void)setPdfData:(NSData *)arg1 ;
-(PDFDocument *)pdfDocument;
-(id)initWithPDFData:(id)arg1 ;
-(id)pdfView;
@end
