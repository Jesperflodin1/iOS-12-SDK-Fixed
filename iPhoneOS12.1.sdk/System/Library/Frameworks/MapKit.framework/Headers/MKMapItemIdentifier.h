/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:39 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapItemIdentifier;

@interface MKMapItemIdentifier : NSObject <NSCopying> {

	GEOMapItemIdentifier* _geoMapItemIdentifier;

}
-(unsigned long long)muid;
-(id)initWithMUID:(unsigned long long)arg1 resultProviderID:(int)arg2 coordinate:(CLLocationCoordinate2D)arg3 ;
-(id)initWithMUID:(unsigned long long)arg1 ;
-(id)initWithMUID:(unsigned long long)arg1 coordinate:(CLLocationCoordinate2D)arg2 ;
-(id)initWithGEOMapItemIdentifier:(id)arg1 ;
-(id)geoMapItemIdentifier;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
