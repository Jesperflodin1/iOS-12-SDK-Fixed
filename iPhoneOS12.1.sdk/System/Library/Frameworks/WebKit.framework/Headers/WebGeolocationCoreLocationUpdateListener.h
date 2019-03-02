/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebGeolocationCoreLocationUpdateListener
@required
-(void)geolocationAuthorizationGranted;
-(void)geolocationAuthorizationDenied;
-(void)positionChanged:(GeolocationPosition*)arg1;
-(void)errorOccurred:(id)arg1;
-(void)resetGeolocation;

@end
