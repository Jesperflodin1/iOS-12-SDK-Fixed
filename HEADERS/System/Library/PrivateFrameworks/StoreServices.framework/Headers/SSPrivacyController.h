/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:29 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SSPrivacyController : NSObject
+(unsigned long long)_currentPrivacyContentVersionForIdentifier:(id)arg1 ;
+(id)_translateIdentifierToPrivacyAcknowledgement:(id)arg1 withVersion:(unsigned long long)arg2 ;
+(void)_appendPrivacyAcknowledgementToLocalAccount:(id)arg1 ;
+(id)_appendPrivacyAcknowledgementToActiveAccount:(id)arg1 withURL:(id)arg2 ;
+(id)_syncPrivacyAcknowledgementOnAccount:(id)arg1 URL:(id)arg2 ;
+(void)_appendPrivacyAcknowledgement:(id)arg1 toAccount:(id)arg2 ;
+(id)storePrivacyIdentifiers;
+(void)syncPrivacyAcknowledgementOnAccount:(id)arg1 URL:(id)arg2 ;
+(void)acknowledgePrivacyLinkWithIdentifier:(id)arg1 URL:(id)arg2 ;
+(id)viewControllerForPrivacySplashWithIdentifier:(id)arg1 URL:(id)arg2 ;
+(BOOL)shouldDisplayPrivacyLinkWithIdentifier:(id)arg1 ;
+(void)acknowledgePrivacyLinkWithIdentifier:(id)arg1 ;
@end

