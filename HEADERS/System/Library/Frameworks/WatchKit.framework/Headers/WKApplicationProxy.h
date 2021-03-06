/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:36:29 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface WKApplicationProxy : NSObject {

	NSURL* _bundleURL;

}

@property (nonatomic,readonly) NSURL * bundleURL;              //@synthesize bundleURL=_bundleURL - In the implementation block
+(id)watchAppBundleUrlWithContainerUrl:(id)arg1 ;
+(id)gizmoAppBundleUrlWithPluginUrl:(id)arg1 ;
+(id)applicationsForContainerProxy:(id)arg1 ;
-(id)initWithBundleURL:(id)arg1 ;
-(NSURL *)bundleURL;
@end

