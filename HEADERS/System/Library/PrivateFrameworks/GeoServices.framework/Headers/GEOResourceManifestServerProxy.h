/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:46 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOActiveTileGroup;


@protocol GEOResourceManifestServerProxy <NSObject>
@property (assign,nonatomic,__weak) id<GEOResourceManifestServerProxyDelegate> delegate; 
@property (nonatomic,readonly) GEOActiveTileGroup * activeTileGroup; 
@required
-(void)updateIfNecessary:(/*^block*/id)arg1;
-(GEOActiveTileGroup *)activeTileGroup;
-(id)authToken;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2;
-(void)openConnection;
-(void)closeConnection;
-(unsigned long long)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2;
-(id)serverQueue;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)forceUpdate:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(id)updateProgress;
-(void)cancelCurrentManifestUpdate;
-(void)activateResourceScale:(int)arg1;
-(void)activateResourceScenario:(int)arg1;
-(void)deactivateResourceScale:(int)arg1;
-(void)deactivateResourceScenario:(int)arg1;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1;
-(oneway void)resetActiveTileGroup;
-(void)performOpportunisticResourceLoading;
-(void)setDelegate:(id)arg1;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(id)configuration;

@end
