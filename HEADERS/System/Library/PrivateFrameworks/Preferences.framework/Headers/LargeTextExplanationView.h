//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Preferences/PSHeaderFooterView-Protocol.h>

@class UILabel, UITextView;

@interface LargeTextExplanationView : UIView <PSHeaderFooterView>
{
    UILabel *_bodyExampleLabel;
    UITextView *_bodyExampleTextView;
}

- (void).cxx_destruct;
- (void)layoutForWidth:(double)arg1 inTableView:(id)arg2;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)layoutSubviews;
- (id)initWithSpecifier:(id)arg1;

@end
