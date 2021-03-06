/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:32 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/MediaMiningKit-Structs.h>
#import <MediaMiningKit/CLSInputClue.h>

@class CLSPlace;

@interface CLSInputLocationClue : CLSInputClue {

	CLSPlace* _place;

}
+(id)cluesWithLocations:(id)arg1 ;
+(id)clueWithLocation:(id)arg1 ;
-(void)setPlace:(id)arg1 ;
-(id)place;
-(id)projectedLocation;
-(id)placemark;
-(BOOL)isDefinite;
-(BOOL)isEqualToClue:(id)arg1 ;
-(void)_prepareWithProgressBlock:(/*^block*/id)arg1 ;
-(id)regionInPlacemark;
-(CLLocationCoordinate2D)closestCoordinates;
-(id)description;
-(id)region;
-(id)location;
@end

