/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:53:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface NMRTrackAssetAvailabilityManager : NSObject {

	NSCache* _assetAvailabilityCache;

}
+(id)sharedManager;
-(void)_mediaLibraryDidChangeNotification:(id)arg1 ;
-(long long)availabilityForTrackPID:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
