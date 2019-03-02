/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:56 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewLayoutAttributes.h>

@class NSIndexPath;

@interface UIKeyboardCandidateGridCellAttributes : UICollectionViewLayoutAttributes {

	BOOL _dummy;
	BOOL _groupHeader;
	BOOL _needsPaddingForIndexScrubber;
	BOOL _groupShowsAlternativeText;
	BOOL _secondaryCandidateAppearance;
	BOOL _emphasizedAppearance;
	int _candidatesVisualStyle;
	NSIndexPath* _candidateIndexPath;
	SCD_Struct_UI56 _visualStyling;
	unsigned long long _candidateNumber;
	unsigned long long _rowIndex;
	unsigned long long _edges;
	CGSize _rowSize;

}

@property (nonatomic,retain) NSIndexPath * candidateIndexPath;                //@synthesize candidateIndexPath=_candidateIndexPath - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI56 visualStyling;                   //@synthesize visualStyling=_visualStyling - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                       //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
@property (assign,nonatomic) BOOL dummy;                                      //@synthesize dummy=_dummy - In the implementation block
@property (assign,nonatomic) BOOL groupHeader;                                //@synthesize groupHeader=_groupHeader - In the implementation block
@property (assign,nonatomic) unsigned long long candidateNumber;              //@synthesize candidateNumber=_candidateNumber - In the implementation block
@property (assign,nonatomic) unsigned long long rowIndex;                     //@synthesize rowIndex=_rowIndex - In the implementation block
@property (assign,nonatomic) CGSize rowSize;                                  //@synthesize rowSize=_rowSize - In the implementation block
@property (assign,nonatomic) unsigned long long edges;                        //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) BOOL needsPaddingForIndexScrubber;               //@synthesize needsPaddingForIndexScrubber=_needsPaddingForIndexScrubber - In the implementation block
@property (assign,nonatomic) BOOL groupShowsAlternativeText;                  //@synthesize groupShowsAlternativeText=_groupShowsAlternativeText - In the implementation block
@property (assign,nonatomic) BOOL secondaryCandidateAppearance;               //@synthesize secondaryCandidateAppearance=_secondaryCandidateAppearance - In the implementation block
@property (assign,nonatomic) BOOL emphasizedAppearance;                       //@synthesize emphasizedAppearance=_emphasizedAppearance - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)representedElementCategory;
-(CGSize)rowSize;
-(void)setRowSize:(CGSize)arg1 ;
-(void)setEdges:(unsigned long long)arg1 ;
-(unsigned long long)edges;
-(int)candidatesVisualStyle;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(unsigned long long)rowIndex;
-(SCD_Struct_UI56)visualStyling;
-(void)setVisualStyling:(SCD_Struct_UI56)arg1 ;
-(BOOL)dummy;
-(void)setDummy:(BOOL)arg1 ;
-(BOOL)groupHeader;
-(BOOL)needsPaddingForIndexScrubber;
-(BOOL)groupShowsAlternativeText;
-(unsigned long long)candidateNumber;
-(void)setCandidateNumber:(unsigned long long)arg1 ;
-(BOOL)secondaryCandidateAppearance;
-(void)setSecondaryCandidateAppearance:(BOOL)arg1 ;
-(BOOL)emphasizedAppearance;
-(void)setEmphasizedAppearance:(BOOL)arg1 ;
-(NSIndexPath *)candidateIndexPath;
-(void)setCandidateIndexPath:(NSIndexPath *)arg1 ;
-(void)setGroupHeader:(BOOL)arg1 ;
-(void)setRowIndex:(unsigned long long)arg1 ;
-(void)setNeedsPaddingForIndexScrubber:(BOOL)arg1 ;
-(void)setGroupShowsAlternativeText:(BOOL)arg1 ;
@end
