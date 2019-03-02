/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:30 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject, SSDownload, SSDownloadAsset;

@interface SSDownloadSession : NSObject {

	SSXPCConnection* _controlConnection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	long long _sessionID;
	long long _assetID;
	long long _downloadID;

}

@property (readonly) SSDownload * download; 
@property (readonly) SSDownloadAsset * downloadAsset; 
-(id)_initWithMessage:(id)arg1 controlConnection:(id)arg2 ;
-(id)_initSSDownloadSession;
-(id)_copySessionPropertyWithKey:(const char*)arg1 ;
-(SSDownloadAsset *)downloadAsset;
-(SSDownload *)download;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
