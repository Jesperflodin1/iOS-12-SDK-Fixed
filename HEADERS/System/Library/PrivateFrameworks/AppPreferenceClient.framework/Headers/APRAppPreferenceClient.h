/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:33:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AppPreferenceClient.framework/AppPreferenceClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APRAppPreferenceInterface.h>

@class NSXPCConnection;

@interface APRAppPreferenceClient : NSObject <APRAppPreferenceInterface> {

	NSXPCConnection* _xpcConnection;

}
+(id)sharedInstance;
-(void)getAppPredictionsForIntent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)prewarmWithReply:(/*^block*/id)arg1 ;
-(void)getAppPredictionsForIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)getAppPredictionsForIntent:(id)arg1 candidateBundleIdentifiers:(id)arg2 limit:(int)arg3 reply:(/*^block*/id)arg4 ;
-(void)sendFeedbackForIntent:(id)arg1 aprResponse:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

