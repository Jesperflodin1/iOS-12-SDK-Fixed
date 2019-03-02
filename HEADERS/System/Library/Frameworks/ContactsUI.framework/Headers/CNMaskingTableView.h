/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:57 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableView.h>

@class UIView;

@interface CNMaskingTableView : UITableView {

	double _maskingInset;
	UIView* _tableMaskView;

}

@property (nonatomic,retain) UIView * tableMaskView;              //@synthesize tableMaskView=_tableMaskView - In the implementation block
@property (assign,nonatomic) double maskingInset;                 //@synthesize maskingInset=_maskingInset - In the implementation block
-(void)setMaskingInset:(double)arg1 ;
-(UIView *)tableMaskView;
-(double)maskingInset;
-(void)setTableMaskView:(UIView *)arg1 ;
@end
