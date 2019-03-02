/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, UILabel, RoundProgressView, NSLayoutConstraint, UIButton, NSString;

@interface MiroProgressViewController : UIViewController <UIGestureRecognizerDelegate> {

	BOOL _showCancelButton;
	UIView* _posterBackgroundView;
	UILabel* _label;
	UIView* _placeholderView;
	RoundProgressView* _progressView;
	RoundProgressView* _landscapeProgressView;
	NSLayoutConstraint* _verticalProgressLabelSpace;
	NSLayoutConstraint* _verticalCenteredLabel;
	NSLayoutConstraint* _horizontalCenteredLabel;
	NSLayoutConstraint* _horizontalOffsetLabel;
	UIButton* _cancelButton;

}

@property (nonatomic,retain) UILabel * label;                                              //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIView * placeholderView;                                     //@synthesize placeholderView=_placeholderView - In the implementation block
@property (nonatomic,retain) RoundProgressView * progressView;                             //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) RoundProgressView * landscapeProgressView;                    //@synthesize landscapeProgressView=_landscapeProgressView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * verticalProgressLabelSpace;              //@synthesize verticalProgressLabelSpace=_verticalProgressLabelSpace - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * verticalCenteredLabel;                   //@synthesize verticalCenteredLabel=_verticalCenteredLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * horizontalCenteredLabel;                 //@synthesize horizontalCenteredLabel=_horizontalCenteredLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * horizontalOffsetLabel;                   //@synthesize horizontalOffsetLabel=_horizontalOffsetLabel - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                      //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) NSString * labelText; 
@property (assign,nonatomic) float progress; 
@property (assign,nonatomic) BOOL showCancelButton;                                        //@synthesize showCancelButton=_showCancelButton - In the implementation block
@property (nonatomic,retain) UIView * posterBackgroundView;                                //@synthesize posterBackgroundView=_posterBackgroundView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)labelText;
-(UIView *)placeholderView;
-(void)setPlaceholderView:(UIView *)arg1 ;
-(void)setLabelText:(NSString *)arg1 ;
-(RoundProgressView *)progressView;
-(void)setProgressView:(RoundProgressView *)arg1 ;
-(void)setShowCancelButton:(BOOL)arg1 ;
-(void)setCancelTarget:(id)arg1 action:(SEL)arg2 ;
-(UIView *)posterBackgroundView;
-(void)setVerticalProgressLabelSpace:(NSLayoutConstraint *)arg1 ;
-(void)setVerticalCenteredLabel:(NSLayoutConstraint *)arg1 ;
-(void)setHorizontalCenteredLabel:(NSLayoutConstraint *)arg1 ;
-(void)setHorizontalOffsetLabel:(NSLayoutConstraint *)arg1 ;
-(void)setLandscapeProgressView:(RoundProgressView *)arg1 ;
-(RoundProgressView *)landscapeProgressView;
-(void)updateLayoutWithTraitCollection:(id)arg1 ;
-(NSLayoutConstraint *)verticalProgressLabelSpace;
-(NSLayoutConstraint *)horizontalCenteredLabel;
-(NSLayoutConstraint *)verticalCenteredLabel;
-(NSLayoutConstraint *)horizontalOffsetLabel;
-(void)setPosterBackgroundView:(UIView *)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)setProgress:(float)arg1 ;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIButton *)cancelButton;
-(float)progress;
-(void)didReceiveMemoryWarning;
-(BOOL)prefersStatusBarHidden;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(BOOL)showCancelButton;
@end
