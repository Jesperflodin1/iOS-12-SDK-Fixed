/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:33 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNDonationAccountLogger <NSObject>
@required
-(void)pluginUnloaded;
-(void)accountsDidNotChange;
-(void)donating:(id)arg1;
-(void)removing:(id)arg1;
-(void)donationFailedWithError:(id)arg1;
-(void)removalFailedWithError:(id)arg1;
-(void)accountRemoved:(id)arg1;
-(void)pluginLoaded;
-(void)accountAdded:(id)arg1;
-(void)accountChanged:(id)arg1;

@end
