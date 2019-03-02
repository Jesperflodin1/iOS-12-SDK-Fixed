/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:25 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSKSelection, NSSet;


@protocol TSDEditor <NSObject>
@property (nonatomic,retain) TSKSelection * selection; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingFill; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingStroke; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingShadow; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingReflection; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingOpacity; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingTextInset; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingConnectionLineAttributes; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingEndpoints; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingSmartShapeAttributes; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingResize; 
@property (nonatomic,readonly) NSSet * selectedObjectsSupportingShrinkTextToFit; 
@optional
-(BOOL)shouldEndEditingToBeginEditingRep:(id)arg1;
-(void)setSelection:(id)arg1 withFlags:(unsigned long long)arg2;
-(BOOL)readyToAcceptSelection:(id)arg1 onInfo:(id)arg2;
-(BOOL)ignoreSetSelection:(id)arg1 onInfo:(id)arg2;
-(void)setSelectionWithSearchReference:(id)arg1;
-(void)didBecomeCurrentEditor;
-(void)willResignCurrentEditor;
-(void)didBecomeTextInputEditor;
-(void)willResignTextInputEditor;
-(void)didResignTextInputEditor;
-(BOOL)wantsToBePushedBackOntoStackForSelection:(id)arg1;
-(id)editingSearchReference;
-(id)topLevelInspectorViewControllers;
-(id)topLevelInspectorAutosaveName;
-(CGSize*)topLevelInspectorPreferredPopoverSize;
-(id)level2InspectorViewControllers;
-(void)didEnterBackground;
-(int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
-(BOOL)shouldProhibitAction:(SEL)arg1;
-(id)extraMenuItems;
-(void)customAction5:(id)arg1;
-(void)customAction6:(id)arg1;
-(void)customAction7:(id)arg1;
-(void)customAction8:(id)arg1;
-(id)wrapInspectorController;
-(double)viewScaleForSelectionWithTargetPointSize:(double)arg1;
-(double)targetPointSizeForSelectionWithViewScale:(double)arg1;
-(CGRect*)zoomRectForSelection:(id)arg1;
-(BOOL)suppressAutozoom;
-(BOOL)canAddOrShowComment;
-(BOOL)canBeginPathEditing;
-(BOOL)canBeginEditingRepOnDoubleTap:(id)arg1;
-(void)reverseDirection:(id)arg1;
-(CGRect*)targetRectForEditMenu;
-(void)addContextualMenuItemsToArray:(id)arg1;
-(id)canvasCoachingTips;
-(CGRect*)coachingTipManager:(id)arg1 coachingTipView:(id)arg2 canvasRectForKey:(id)arg3;
-(id)inspectorTabTipKey;
-(NSSet *)selectedObjectsSupportingFill;
-(NSSet *)selectedObjectsSupportingStroke;
-(NSSet *)selectedObjectsSupportingShadow;
-(NSSet *)selectedObjectsSupportingReflection;
-(NSSet *)selectedObjectsSupportingOpacity;
-(NSSet *)selectedObjectsSupportingTextInset;
-(NSSet *)selectedObjectsSupportingConnectionLineAttributes;
-(NSSet *)selectedObjectsSupportingEndpoints;
-(NSSet *)selectedObjectsSupportingSmartShapeAttributes;
-(NSSet *)selectedObjectsSupportingResize;
-(NSSet *)selectedObjectsSupportingShrinkTextToFit;
-(void)teardown;
-(void)cut:(id)arg1;
-(void)copy:(id)arg1;
-(void)paste:(id)arg1;
-(void)select:(id)arg1;
-(void)selectAll:(id)arg1;
-(void)delete:(id)arg1;
-(id)model;
-(TSKSelection *)selection;
-(void)willEnterForeground;
-(void)setSelection:(id)arg1;

@required
-(id)documentRoot;

@end
