//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/IKAppKeyboardDelegate-Protocol.h>
#import <TVMLKit/_TVSearchBarDelegate-Protocol.h>

@class IKTextFieldElement, NSString, UITextField;

__attribute__((visibility("hidden")))
@interface _TVTextFieldViewController : UIViewController <IKAppKeyboardDelegate, _TVSearchBarDelegate>
{
    IKTextFieldElement *_viewElement;
}

@property(readonly, retain, nonatomic) IKTextFieldElement *viewElement; // @synthesize viewElement=_viewElement;
- (void).cxx_destruct;
- (void)_updateKeyboardWithUserText;
- (void)_updateUserText;
- (void)_updateViewLayout;
- (void)searchBarDidChangeText:(id)arg1;
- (void)loadView;
- (void)textDidChangeForKeyboard:(id)arg1;
@property(readonly, retain, nonatomic) UITextField *textField;
- (void)updateWithViewElement:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
