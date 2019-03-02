/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:05 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UILayoutGuide;


@protocol SVCustomControlsLayoutGuideProviding <NSObject>
@property (nonatomic,readonly) UILayoutGuide * transportControlsAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * displayModeControlsAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * volumeControlsAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * unobscuredCenterAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * animatedUnobscuredCenterAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * unobscuredTopAreaLayoutGuide; 
@property (nonatomic,readonly) UILayoutGuide * accessoryBarLayoutGuide; 
@required
-(UILayoutGuide *)displayModeControlsAreaLayoutGuide;
-(UILayoutGuide *)volumeControlsAreaLayoutGuide;
-(UILayoutGuide *)unobscuredTopAreaLayoutGuide;
-(UILayoutGuide *)unobscuredCenterAreaLayoutGuide;
-(UILayoutGuide *)animatedUnobscuredCenterAreaLayoutGuide;
-(UILayoutGuide *)transportControlsAreaLayoutGuide;
-(UILayoutGuide *)accessoryBarLayoutGuide;

@end
