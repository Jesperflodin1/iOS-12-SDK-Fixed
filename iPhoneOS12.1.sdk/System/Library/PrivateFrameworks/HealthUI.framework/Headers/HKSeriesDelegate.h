/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:05 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKSeriesDelegate
@required
-(BOOL)seriesDrawingDuringTiling;
-(CGRect*)screenRectForSeries:(id)arg1;
-(void)autoscaleStateChangedForSeries:(id)arg1;
-(UIEdgeInsets*)virtualMarginInsets;
-(void)seriesDidInvalidatePaths:(id)arg1 newDataArrived:(BOOL)arg2;
-(BOOL)seriesDrawingDuringScrolling;
-(BOOL)seriesDrawingDuringAutoscale;

@end
