//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface CKDetailsCell : UITableViewCell
{
    _Bool _indentTopSeperator;
    _Bool _indentBottomSeperator;
    UIView *_topSeperator;
    UIView *_bottomSeperator;
}

@property(retain, nonatomic) UIView *bottomSeperator; // @synthesize bottomSeperator=_bottomSeperator;
@property(retain, nonatomic) UIView *topSeperator; // @synthesize topSeperator=_topSeperator;
@property(nonatomic) _Bool indentBottomSeperator; // @synthesize indentBottomSeperator=_indentBottomSeperator;
@property(nonatomic) _Bool indentTopSeperator; // @synthesize indentTopSeperator=_indentTopSeperator;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
