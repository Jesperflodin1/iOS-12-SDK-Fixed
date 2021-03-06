/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:33 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFActionRemoteGoToPrivateVars, NSURL;

@interface PDFActionRemoteGoTo : PDFAction <NSCopying> {

	PDFActionRemoteGoToPrivateVars* _private2;

}

@property (assign,nonatomic) unsigned long long pageIndex; 
@property (assign,nonatomic) CGPoint point; 
@property (nonatomic,copy) NSURL * URL; 
-(const CFDictionaryRef)createDictionaryRef;
-(void)addDestinationToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(id)toolTipNoLabel;
-(id)initWithPageIndex:(unsigned long long)arg1 atPoint:(CGPoint)arg2 fileURL:(id)arg3 ;
-(id)toolTip;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)point;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setPoint:(CGPoint)arg1 ;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(void)commonInit;
@end

