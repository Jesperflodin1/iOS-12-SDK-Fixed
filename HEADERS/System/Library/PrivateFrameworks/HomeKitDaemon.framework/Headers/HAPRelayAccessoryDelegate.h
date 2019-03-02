/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:15 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HAPRelayAccessoryDelegate <HAPAccessoryDelegate>
@optional
-(void)accessory:(id)arg1 didUpdateAccessoryIdentifier:(id)arg2;
-(void)accessory:(id)arg1 didUpdateAccessoryAccessToken:(id)arg2;

@required
-(void)accessory:(id)arg1 didUpdateRelayEnabled:(BOOL)arg2;
-(void)accessory:(id)arg1 didUpdateRelayState:(unsigned long long)arg2;
-(void)accessory:(id)arg1 didActivateRelayWithError:(id)arg2;
-(void)accessory:(id)arg1 didPairRelayWithError:(id)arg2;

@end
