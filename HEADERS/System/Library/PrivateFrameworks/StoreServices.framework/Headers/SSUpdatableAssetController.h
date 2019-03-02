/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, SSUpdatableAssetManifest, SSUpdatableAssetCacheManager, SSXPCConnection, NSURL, NSObject;

@interface SSUpdatableAssetController : NSObject {

	NSString* _bundledManifestVersion;
	SSUpdatableAssetManifest* _bundledManifest;
	SSUpdatableAssetManifest* _currentManifest;
	SSUpdatableAssetCacheManager* _cacheManager;
	SSXPCConnection* _connection;
	NSURL* _manifestURL;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSURL* _bundledManifestURL;

}

@property (nonatomic,readonly) SSUpdatableAssetManifest * currentManifest; 
@property (nonatomic,readonly) SSUpdatableAssetManifest * newestCachedManifest; 
@property (nonatomic,readonly) NSURL * bundledManifestURL;                                   //@synthesize bundledManifestURL=_bundledManifestURL - In the implementation block
@property (nonatomic,copy) NSURL * manifestURL;                                              //@synthesize manifestURL=_manifestURL - In the implementation block
-(id)initWithBundledManifestURL:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)_bundledManifestVersion;
-(id)_bundledManifest;
-(NSURL *)bundledManifestURL;
-(SSUpdatableAssetManifest *)currentManifest;
-(SSUpdatableAssetManifest *)newestCachedManifest;
-(void)refreshCachedManifest:(/*^block*/id)arg1 ;
-(id)initWithBundledManifestURL:(id)arg1 ;
-(void)clearCache:(/*^block*/id)arg1 ;
-(NSURL *)manifestURL;
-(void)setManifestURL:(NSURL *)arg1 ;
-(id)_connection;
-(void)dealloc;
@end
