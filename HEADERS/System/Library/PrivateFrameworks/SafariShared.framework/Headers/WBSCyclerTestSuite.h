/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:34 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSCyclerTestSuite <NSObject>
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@optional
+(BOOL)setValue:(id)arg1 forConfigurationKey:(id)arg2;
-(void)setUp;
-(void)handleRequest:(id)arg1 withTarget:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)tearDown;
-(BOOL)canHandleRequest:(id)arg1;
-(BOOL)isFinished;

@required
-(void)runWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)init;

@end
