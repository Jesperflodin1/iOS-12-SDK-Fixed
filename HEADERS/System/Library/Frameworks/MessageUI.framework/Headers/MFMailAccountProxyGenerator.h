/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:35:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _MFMailAccountProxySource;

@interface MFMailAccountProxyGenerator : NSObject {

	_MFMailAccountProxySource* _proxySource;
	BOOL _allowsRestrictedAccounts;

}
-(id)initWithAllowsRestrictedAccounts:(BOOL)arg1 ;
-(id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2 originatingBundleID:(id)arg3 sourceAccountManagement:(int)arg4 ;
-(id)allAccountProxies;
-(id)activeAccountProxiesOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)defaultMailAccountProxyForDeliveryOriginatingBundleID:(id)arg1 sourceAccountManagement:(int)arg2 ;
-(id)accountProxyContainingEmailAddress:(id)arg1 includingInactive:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
@end
