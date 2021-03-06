/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:48 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _LSDDeviceIdentifierProtocol
@required
-(void)clearAllIdentifiersOfType:(long long)arg1;
-(void)getIdentifierOfType:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)getIdentifierOfType:(long long)arg1 vendorName:(id)arg2 bundleIdentifier:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)clearIdentifiersForUninstallationWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
-(void)generateIdentifiersWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;

@end

