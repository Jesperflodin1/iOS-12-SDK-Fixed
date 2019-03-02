/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSMutableArray, NSArray, UIView;

@interface MKOrientationContext : NSObject {

	NSMutableArray* orientViews;
	NSArray* relativeViews;
	UIView* projectionView;
	CGRect* relativeViewFrames;

}
-(id)initWithViewsToOrient:(id)arg1 relativeViews:(id)arg2 projectionView:(id)arg3 ;
-(void)_computeRelativeViewFrames;
-(void)_computeRelativeViewFrame:(id)arg1 ;
-(void)invalidateView:(id)arg1 ;
-(void)dealloc;
@end
