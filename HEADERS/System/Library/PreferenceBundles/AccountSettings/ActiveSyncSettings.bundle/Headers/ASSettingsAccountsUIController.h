/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:49:02 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessUI/DASettingsAccountsUIController.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/DAAutoDiscoveryConsumer.h>

@class ASExchangeIdView, NSURLSession, DAExchangeOAuthFlowController, SFSafariViewController, NSString;

@interface ASSettingsAccountsUIController : DASettingsAccountsUIController <NSURLSessionDelegate, SFSafariViewControllerDelegate, UIViewControllerTransitioningDelegate, DAAutoDiscoveryConsumer> {

	unsigned _diagsVisibleValue;
	long long _autodiscoveryState;
	ASExchangeIdView* _exchangeIdView;
	NSURLSession* _autoDV2RedirectSession;
	DAExchangeOAuthFlowController* _oauthFlowController;
	SFSafariViewController* _safariViewController;
	/*^block*/id _redirectHandlerBlock;

}

@property (nonatomic,retain) ASExchangeIdView * exchangeIdView;                                //@synthesize exchangeIdView=_exchangeIdView - In the implementation block
@property (nonatomic,retain) NSURLSession * autoDV2RedirectSession;                            //@synthesize autoDV2RedirectSession=_autoDV2RedirectSession - In the implementation block
@property (nonatomic,retain) DAExchangeOAuthFlowController * oauthFlowController;              //@synthesize oauthFlowController=_oauthFlowController - In the implementation block
@property (nonatomic,retain) SFSafariViewController * safariViewController;                    //@synthesize safariViewController=_safariViewController - In the implementation block
@property (nonatomic,copy) id redirectHandlerBlock;                                            //@synthesize redirectHandlerBlock=_redirectHandlerBlock - In the implementation block
@property (assign,nonatomic) long long autodiscoveryState;                                     //@synthesize autodiscoveryState=_autodiscoveryState - In the implementation block
@property (assign,nonatomic) unsigned diagsVisibleValue;                                       //@synthesize diagsVisibleValue=_diagsVisibleValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isHotmailAccount;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(void)setSafariViewController:(SFSafariViewController *)arg1 ;
-(SFSafariViewController *)safariViewController;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(void)OAuthAccount:(id)arg1 authorizationURI:(id)arg2 error:(id)arg3 ;
-(void)account:(id)arg1 wasAutoDiscovered:(BOOL)arg2 error:(id)arg3 ;
-(id)account;
-(void)doneButtonTapped:(id)arg1 ;
-(id)accountSpecifiers;
-(void)setAutoDV2RedirectSession:(NSURLSession *)arg1 ;
-(NSURLSession *)autoDV2RedirectSession;
-(void)setAutodiscoveryState:(long long)arg1 ;
-(ASExchangeIdView *)exchangeIdView;
-(void)setExchangeIdView:(ASExchangeIdView *)arg1 ;
-(id)_specifiersForMinimalAutodiscoveryRemovingIDs:(id)arg1 ;
-(id)_specifiersForOptionalServerAutodiscovery;
-(id)_specifiersForCompletedAutodiscovery;
-(id)localizedAccountTitleString;
-(BOOL)_storeHasDuplicateForUsername:(id)arg1 ;
-(void)_fallBackToAutoDiscvoerV1;
-(void)_reallyStartAutoDiscoverAccount;
-(void)_showAlertWithTitle:(id)arg1 body:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setViewsEnabled;
-(void)_autodiscoverOAuthAccountAfterInitialRedirect;
-(BOOL)_isNetworkOfflineError:(id)arg1 ;
-(void)_transitionToOptionalServerAutodiscovery;
-(void)_transitionToCompletedAutodiscovery;
-(BOOL)_isSSLError:(id)arg1 ;
-(void)_bringUpOAuthEndPointWithURL:(id)arg1 ;
-(DAExchangeOAuthFlowController *)oauthFlowController;
-(void)_validateUniquenessAndAddAccount:(id)arg1 username:(id)arg2 token:(id)arg3 refreshToken:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setOauthFlowController:(DAExchangeOAuthFlowController *)arg1 ;
-(void)handleRedirectURL:(id)arg1 ;
-(void)setRedirectHandlerBlock:(id)arg1 ;
-(id)redirectHandlerBlock;
-(id)_defaultAccountDescription;
-(BOOL)autodiscoverAccount;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(void)_tryUpdatingCompositeValueWithId:(id)arg1 fromValue:(id)arg2 forKey:(id)arg3 ;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)localizedValidationFailureTitleString;
-(id)newDefaultAccount;
-(BOOL)validateAccount;
-(BOOL)transitionsAfterInitialSetup;
-(id)localizedConfirmSaveUnvalidatedAccountTitleString;
-(id)localizedConfirmSaveUnvalidatedAccountMessageString;
-(id)localizedAccountSetupTitleString;
-(long long)autodiscoveryState;
-(unsigned)diagsVisibleValue;
-(void)setDiagsVisibleValue:(unsigned)arg1 ;
-(BOOL)haveEnoughValues;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end

