/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:39:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ADAdSpace;


@protocol ADActionViewControllerInterface <NSObject>
@property (nonatomic,readonly) BOOL readyForPresentation; 
@property (nonatomic,__weak,readonly) ADAdSpace * adSpace; 
@required
-(ADAdSpace *)adSpace;
-(void)clientApplicationDidEnterBackground;
-(void)clientApplicationCancelledAction;
-(BOOL)readyForPresentation;
-(void)dismiss;

@end
