/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:34 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>

@protocol SLRemoteComposeViewControllerDelegateProtocol;
@interface SLRemoteComposeViewController : _UIRemoteViewController {

	id<SLRemoteComposeViewControllerDelegateProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<SLRemoteComposeViewControllerDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SLRemoteComposeViewControllerDelegateProtocol>)arg1 ;
-(id<SLRemoteComposeViewControllerDelegateProtocol>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

