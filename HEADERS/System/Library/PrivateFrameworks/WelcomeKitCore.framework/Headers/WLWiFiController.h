/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:49 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WelcomeKitCore/WelcomeKitCore-Structs.h>
@class NSString, NSNumber;

@interface WLWiFiController : NSObject {

	NSString* _ssid;
	NSString* _password;
	NSNumber* _channel;
	WiFiManagerClientRef _managerClientRef;
	WiFiNetworkRef _startedNetwork;
	NETRBClientRef _netrbClientRef;
	/*^block*/id _wifiStartCompletionBlock;
	/*^block*/id _wifiStopCompletionBlock;

}

@property (nonatomic,readonly) BOOL softAPIsEnabled; 
@property (nonatomic,readonly) BOOL hasSoftAPCapability; 
+(id)sharedInstance;
-(BOOL)hasSoftAPCapability;
-(BOOL)softAPIsEnabled;
-(void)_enableSoftAPWithCompletion:(/*^block*/id)arg1 ;
-(void)disableSoftAPWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)startDHCPReturningError:(id*)arg1 ;
-(void)stopWiFiWithCompletion:(/*^block*/id)arg1 ;
-(void)startWiFiWithCompletion:(/*^block*/id)arg1 ;
-(void)stopDHCP;
-(WiFiDeviceClientRef)_deviceClient;
-(NETRBClientRef)_netrbClient;
-(id)_networkRecordFromOptions:(id)arg1 ;
-(void)network:(WiFiNetworkRef)arg1 didStartWithResponse:(id)arg2 ;
-(void)network:(WiFiNetworkRef)arg1 didFailToStartWithErrorCode:(int)arg2 response:(id)arg3 ;
-(void)network:(WiFiNetworkRef)arg1 didStopWithResponse:(id)arg2 ;
-(void)network:(WiFiNetworkRef)arg1 didFailToStopWithErrorCode:(int)arg2 response:(id)arg3 ;
-(void)enableSoftAPWithSSID:(id)arg1 password:(id)arg2 channel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)init;
@end
