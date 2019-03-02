/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, CAShapeLayer;

@interface MPAVRoutingTableHeaderView : UIView {

	UIEdgeInsets _edgeInsets;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	CAShapeLayer* _borderLayer;

}
-(id)_mirroringTitleTextAttributes;
-(id)_mirroringCompactDescription;
-(id)_mirroringCompactDescriptionTextAttributes;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_init;
@end
