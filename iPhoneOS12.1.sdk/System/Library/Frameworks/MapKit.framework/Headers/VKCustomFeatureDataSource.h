/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKCustomFeatureDataSource <NSObject>
@required
-(id)annotationsInMapRect:(SCD_Struct_MK1)arg1;
-(BOOL)isClusteringEnabled;
-(id)clusterStyleAttributes;
-(void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
-(void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
-(unsigned char)sceneID;
-(unsigned char)sceneState;
-(void)removeObserver:(id)arg1;
-(void)addObserver:(id)arg1;

@end
