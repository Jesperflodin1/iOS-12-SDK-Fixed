/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:05 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIStatusBarItem.h>

@class _UIStatusBarStringView;

@interface _UIStatusBarBuildVersionItem : _UIStatusBarItem {

	_UIStatusBarStringView* _buildVersionView;

}

@property (nonatomic,retain) _UIStatusBarStringView * buildVersionView;              //@synthesize buildVersionView=_buildVersionView - In the implementation block
-(id)viewForIdentifier:(id)arg1 ;
-(_UIStatusBarStringView *)buildVersionView;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(BOOL)needsUpdate;
-(void)setBuildVersionView:(_UIStatusBarStringView *)arg1 ;
@end
