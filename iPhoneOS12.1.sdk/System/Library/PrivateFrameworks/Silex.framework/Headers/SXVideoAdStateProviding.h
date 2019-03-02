/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:04 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXVideoAdStateProviding <NSObject>
@property (setter=onPlay:,nonatomic,copy) id onPlayBlock; 
@property (setter=onPause:,nonatomic,copy) id onPauseBlock; 
@property (setter=onResume:,nonatomic,copy) id onResumeBlock; 
@property (setter=onFail:,nonatomic,copy) id onFailBlock; 
@property (setter=onFinish:,nonatomic,copy) id onFinishBlock; 
@property (setter=onLearnMore:,nonatomic,copy) id onLearnMoreBlock; 
@property (setter=onSkip:,nonatomic,copy) id onSkipBlock; 
@required
-(id)onPauseBlock;
-(id)onFinishBlock;
-(id)onFailBlock;
-(id)onSkipBlock;
-(id)onLearnMoreBlock;
-(id)onPlayBlock;
-(id)onResumeBlock;
-(void)onPlay:(/*^block*/id)arg1;
-(void)onPause:(/*^block*/id)arg1;
-(void)onResume:(/*^block*/id)arg1;
-(void)onFail:(/*^block*/id)arg1;
-(void)onFinish:(/*^block*/id)arg1;
-(void)onLearnMore:(/*^block*/id)arg1;
-(void)onSkip:(/*^block*/id)arg1;

@end
