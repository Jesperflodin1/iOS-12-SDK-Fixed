/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:17 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVRouteDetectorCoordinator : NSObject {

	BOOL _routeDetectionEnabled;

}

@property (assign,getter=isRouteDetectionEnabled,nonatomic) BOOL routeDetectionEnabled;              //@synthesize routeDetectionEnabled=_routeDetectionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL multipleRoutesDetected; 
+(BOOL)multipleRoutesDetected;
+(void)endDetectingRoutes;
+(void)beginDetectingRoutes;
+(id)routeDetectorCoordinatorQueue;
+(id)sharedSystemRouteDetector;
+(void)updateMultipleRoutesDetected;
+(void)setMultipleRoutesDetected:(BOOL)arg1 ;
-(BOOL)multipleRoutesDetected;
-(BOOL)isRouteDetectionEnabled;
-(void)setRouteDetectionEnabled:(BOOL)arg1 ;
-(void)dealloc;
@end

