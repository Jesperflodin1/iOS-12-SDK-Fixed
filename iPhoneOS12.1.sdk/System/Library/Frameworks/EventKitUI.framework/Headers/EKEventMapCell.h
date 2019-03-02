/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:25 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView, EKEventMapDetailItem;

@interface EKEventMapCell : UITableViewCell {

	UIView* _mapView;
	EKEventMapDetailItem* _detailItem;

}

@property (nonatomic,retain) UIView * mapView;                                      //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic,__weak) EKEventMapDetailItem * detailItem;              //@synthesize detailItem=_detailItem - In the implementation block
-(void)setMapView:(UIView *)arg1 ;
-(UIView *)mapView;
-(EKEventMapDetailItem *)detailItem;
-(void)setDetailItem:(EKEventMapDetailItem *)arg1 ;
-(void)_drawContentInRect:(CGRect)arg1 selected:(BOOL)arg2 ;
-(void)_drawSeparatorInRect:(CGRect)arg1 ;
@end
