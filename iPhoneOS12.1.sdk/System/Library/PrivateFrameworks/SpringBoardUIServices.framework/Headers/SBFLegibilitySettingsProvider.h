/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _UILegibilitySettings;


@protocol SBFLegibilitySettingsProvider <NSObject>
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic,__weak) id<SBFLegibilitySettingsProviderDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<SBFLegibilitySettingsProviderDelegate>)delegate;
-(_UILegibilitySettings *)legibilitySettings;

@end
