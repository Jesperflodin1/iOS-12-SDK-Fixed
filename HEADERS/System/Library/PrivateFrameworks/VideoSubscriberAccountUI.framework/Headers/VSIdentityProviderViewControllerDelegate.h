/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSIdentityProviderViewControllerDelegate <NSObject>
@optional
-(void)identityProviderViewControllerDidFinishLoading:(id)arg1;
-(void)identityProviderViewController:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;

@required
-(void)dismissIdentityProviderViewController:(id)arg1;
-(void)identityProviderViewControllerDidCancel:(id)arg1;
-(void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3;

@end
