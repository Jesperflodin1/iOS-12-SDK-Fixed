/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell;

@interface EKEventProposeNewTimeItem : EKEventDetailItem {

	UITableViewCell* _cell;
	BOOL _cellNeedsUpdate;

}
+(BOOL)eventShowsProposeTime:(id)arg1 ;
-(void)setCellPosition:(int)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)_updateCellIfNeededForWidth:(double)arg1 ;
-(void)reset;
@end
