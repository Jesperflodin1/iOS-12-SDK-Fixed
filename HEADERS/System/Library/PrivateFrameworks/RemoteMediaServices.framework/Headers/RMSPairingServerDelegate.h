/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:54:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RMSPairingServerDelegate <NSObject>
@optional
-(void)pairingServer:(id)arg1 didFailToPairWithService:(id)arg2;

@required
-(void)pairingServer:(id)arg1 didPairWithService:(id)arg2 pairingGUID:(id)arg3;
-(void)pairingServerDidFail:(id)arg1;

@end

