/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:08 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsSupport/DSLogLine.h>

@class NSString;

@interface DSUsageLogLine : DSLogLine

@property (nonatomic,readonly) NSString * eventType; 
@property (nonatomic,readonly) int usageTime; 
@property (nonatomic,readonly) int standbyTime; 
@property (nonatomic,readonly) int batteryLevel; 
@property (nonatomic,readonly) BOOL isReset; 
@property (nonatomic,readonly) BOOL isOnPower; 
@property (nonatomic,readonly) BOOL isOffPower; 
-(BOOL)isOnPower;
-(int)usageTime;
-(int)standbyTime;
-(BOOL)isOffPower;
-(NSString *)eventType;
-(int)batteryLevel;
-(BOOL)isReset;
@end
