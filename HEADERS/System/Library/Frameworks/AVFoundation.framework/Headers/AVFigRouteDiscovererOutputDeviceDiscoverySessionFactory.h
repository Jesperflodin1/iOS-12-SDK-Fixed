/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:27 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVOutputDeviceDiscoverySessionFactory.h>

@protocol AVFigRouteDiscovererFactory;
@class NSString;

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionFactory : NSObject <AVOutputDeviceDiscoverySessionFactory> {

	id<AVFigRouteDiscovererFactory> _routeDiscovererFactory;

}

@property (nonatomic,readonly) id<AVFigRouteDiscovererFactory> routeDiscovererFactory;              //@synthesize routeDiscovererFactory=_routeDiscovererFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)outputDeviceDiscoverySessionOfClass:(Class)arg1 withDeviceFeatures:(unsigned long long)arg2 ;
-(id)initWithRouteDiscovererFactory:(id)arg1 ;
-(id<AVFigRouteDiscovererFactory>)routeDiscovererFactory;
-(id)init;
-(void)dealloc;
@end
