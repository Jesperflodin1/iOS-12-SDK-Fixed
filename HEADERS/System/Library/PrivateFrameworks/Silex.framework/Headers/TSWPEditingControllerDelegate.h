/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:05 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSWPEditingControllerDelegate <NSObject>
@property (nonatomic,readonly) BOOL editorShouldAlwaysBeInParagraphMode; 
@property (nonatomic,readonly) BOOL editorAllowsEditMenu; 
@property (nonatomic,readonly) BOOL editorAllowsMagnifier; 
@property (nonatomic,readonly) BOOL editorAllowsParagraphMode; 
@property (nonatomic,readonly) BOOL editorAllowsKeyboard; 
@property (nonatomic,readonly) BOOL editorAllowsCaret; 
@property (nonatomic,readonly) BOOL editorAllowsHyperlinkInteraction; 
@property (nonatomic,readonly) BOOL editorAllowsRubyInteraction; 
@property (nonatomic,readonly) BOOL editorAllowsListInteraction; 
@optional
-(id)viewControllerForPresenting;
-(id)styleProviderForStorage:(id)arg1;
-(void)editingController:(id)arg1 willDeleteCharactersInRange:(NSRange)arg2;
-(void)filterPasteboardTextStorages:(id)arg1 forTargetStorage:(id)arg2;
-(BOOL)willChangeContentOffsetIfKeyboardHidden;
-(void)showCustomEditMenuForStorage:(id)arg1 range:(NSRange)arg2;
-(void)knobTrackingDidBegin;
-(void)knobTrackingDidEnd;
-(id)formatBarAccessoryView;
-(BOOL)disallowEditingOfTextStringWithStorage:(id)arg1;
-(void)didSetTappedSelectionWithWPEditor:(id)arg1 onWPRep:(id)arg2;
-(BOOL)editorShouldAlwaysBeInParagraphMode;
-(BOOL)editorAllowsEditMenu;
-(BOOL)editorAllowsMagnifier;
-(BOOL)editorAllowsParagraphMode;
-(BOOL)editorAllowsKeyboard;
-(BOOL)editorAllowsCaret;
-(BOOL)editorAllowsHyperlinkInteraction;
-(BOOL)editorAllowsRubyInteraction;
-(BOOL)editorAllowsListInteraction;

@end

