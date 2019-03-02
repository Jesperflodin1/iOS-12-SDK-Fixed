/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSNumber;


@protocol FIUIChartPoint <NSObject>
@property (nonatomic,copy) NSDate * xValue; 
@property (nonatomic,copy) id yValue; 
@property (nonatomic,readonly) NSNumber * minYValue; 
@property (nonatomic,readonly) NSNumber * maxYValue; 
@required
-(NSNumber *)minYValue;
-(NSNumber *)maxYValue;
-(NSDate *)xValue;
-(void)setXValue:(id)arg1;
-(id)yValue;
-(void)setYValue:(id)arg1;

@end
