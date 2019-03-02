/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:01:01 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUIDCRemoteControllerDelegate <NSObject>
@property (assign,nonatomic,__weak) id<HUIDCManagerSecurityDelegate> securityDelegate; 
@required
-(void)controller:(id)arg1 didReceiveData:(id)arg2;
-(void)controller:(id)arg1 didFinishSendingData:(id)arg2;
-(void)controllerDidFinishConnecting:(id)arg1;
-(void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2;
-(id<HUIDCManagerSecurityDelegate>)securityDelegate;
-(void)setSecurityDelegate:(id)arg1;

@end
