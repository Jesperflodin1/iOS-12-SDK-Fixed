/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:34:33 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDFAnnotationChangePrivate, PDFAnnotation;

@interface PDFAnnotationChange : NSObject {

	PDFAnnotationChangePrivate* _private;

}

@property (nonatomic,readonly) int changeType; 
@property (nonatomic,retain,readonly) PDFAnnotation * annotation; 
@property (nonatomic,readonly) unsigned long long changeTimestamp; 
-(int)changeType;
-(unsigned long long)changeTimestamp;
-(id)initWithAddedAnnotation:(id)arg1 ;
-(id)initWithChangedAnnotation:(id)arg1 ;
-(id)initWithRemovedAnnotation:(id)arg1 ;
-(id)initWithReorderedAnnotation:(id)arg1 ;
-(id)initWithReorderedAndChangedAnnotation:(id)arg1 ;
-(id)description;
-(PDFAnnotation *)annotation;
@end
