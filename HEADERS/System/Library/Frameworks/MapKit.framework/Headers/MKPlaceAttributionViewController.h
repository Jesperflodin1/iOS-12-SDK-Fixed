/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:40 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKPlaceAttributionCellDelegate.h>
#import <libobjc.A.dylib/MKStackingViewControllerFixedHeightAware.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol _MKInfoCardAnalyticsDelegate;
@class NSArray, MKMapItem, NSAttributedString, MKPlaceAttributionCell, _MKMapItemAttribution, NSString;

@interface MKPlaceAttributionViewController : MKPlaceSectionViewController <MKPlaceAttributionCellDelegate, MKStackingViewControllerFixedHeightAware, _MKInfoCardChildViewControllerAnalyticsDelegate, MKModuleViewControllerProtocol> {

	BOOL _resizableViewsDisabled;
	NSArray* _urlStrings;
	MKMapItem* _mapItem;
	NSAttributedString* _attributionString;
	MKPlaceAttributionCell* _attributionCell;
	_MKMapItemAttribution* _attribution;
	id<_MKInfoCardAnalyticsDelegate> _analyticsDelegate;

}

@property (retain) MKPlaceAttributionCell * attributionCell;                                         //@synthesize attributionCell=_attributionCell - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                    //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributionString;                                   //@synthesize attributionString=_attributionString - In the implementation block
@property (nonatomic,retain) _MKMapItemAttribution * attribution;                                    //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,copy) NSArray * urlStrings;                                                     //@synthesize urlStrings=_urlStrings - In the implementation block
@property (assign,nonatomic,__weak) id<_MKInfoCardAnalyticsDelegate> analyticsDelegate;              //@synthesize analyticsDelegate=_analyticsDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL resizableViewsDisabled;                                            //@synthesize resizableViewsDisabled=_resizableViewsDisabled - In the implementation block
-(void)setMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)mapItem;
-(_MKMapItemAttribution *)attribution;
-(void)setAttribution:(_MKMapItemAttribution *)arg1 ;
-(void)infoCardThemeChanged:(id)arg1 ;
-(BOOL)resizableViewsDisabled;
-(void)setResizableViewsDisabled:(BOOL)arg1 ;
-(NSAttributedString *)attributionString;
-(void)setAttributionString:(NSAttributedString *)arg1 ;
-(id<_MKInfoCardAnalyticsDelegate>)analyticsDelegate;
-(void)setAnalyticsDelegate:(id<_MKInfoCardAnalyticsDelegate>)arg1 ;
-(NSArray *)urlStrings;
-(void)openURL;
-(void)updateLogo;
-(id)infoAttributionString;
-(void)setUrlStrings:(NSArray *)arg1 ;
-(MKPlaceAttributionCell *)attributionCell;
-(void)setAttributionCell:(MKPlaceAttributionCell *)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
@end

