/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AutoLoop/AutoLoop-Structs.h>
@class NSMutableDictionary, NSArray, IrisVideoMetadataExtractor, ExifMetadataExtractor, NSDictionary;

@interface PregateFeatureBuilder : NSObject {

	NSMutableDictionary* featuresDict;
	NSArray* stdProcessInputKeysArray;
	IrisVideoMetadataExtractor* irisVideoExtractor;
	ExifMetadataExtractor* irisStillExtractor;
	NSMutableDictionary* fullFeaturesDict;
	NSDictionary* _stillImageMetadata;
	NSArray* _facesArray;
	NSArray* _movieMetadata;
	NSDictionary* _videoTrackMetadataDict;
	vector<CMTime, std::__1::allocator<CMTime> >* _frameTimes;
	vector<FloatPoint, std::__1::allocator<FloatPoint> >* _frameOffsets;
	vector<FloatPoint, std::__1::allocator<FloatPoint> >* _frameBlurVectors;

}

@property (assign) vector<CMTime frameTimes;                                     //@synthesize frameTimes=_frameTimes - In the implementation block
@property (assign) vector<FloatPoint frameOffsets;                               //@synthesize frameOffsets=_frameOffsets - In the implementation block
@property (assign) vector<FloatPoint frameBlurVectors;                           //@synthesize frameBlurVectors=_frameBlurVectors - In the implementation block
@property (retain) NSArray * stdProcessInputKeysArray; 
@property (retain) NSDictionary * stillImageMetadata;                            //@synthesize stillImageMetadata=_stillImageMetadata - In the implementation block
@property (retain) NSArray * facesArray;                                         //@synthesize facesArray=_facesArray - In the implementation block
@property (retain) NSArray * movieMetadata;                                      //@synthesize movieMetadata=_movieMetadata - In the implementation block
@property (retain) NSDictionary * videoTrackMetadataDict;                        //@synthesize videoTrackMetadataDict=_videoTrackMetadataDict - In the implementation block
@property (retain) IrisVideoMetadataExtractor * irisVideoExtractor; 
@property (retain) ExifMetadataExtractor * irisStillExtractor; 
@property (readonly) NSMutableDictionary * featuresDict; 
@property (readonly) NSMutableDictionary * fullFeaturesDict; 
-(void)setIrisStillExtractor:(ExifMetadataExtractor *)arg1 ;
-(int)processStill;
-(void)setIrisVideoExtractor:(IrisVideoMetadataExtractor *)arg1 ;
-(int)processVideo;
-(vector<CMTime)frameTimes;
-(IrisVideoMetadataExtractor *)irisVideoExtractor;
-(void)fillVector:(vector<float, std::__1::allocator<float> >*)arg1 withPerFrameStats:(id)arg2 ;
-(int)standardProcessKey:(id)arg1 addToDictionary:(id)arg2 ;
-(int)processStandardPerFrameKeys;
-(int)readPerFrameMetadataToArrays;
-(void)processBlurVectors;
-(void)processOffsetVectors;
-(void)processPresentationTimes;
-(void)processVideoFaceInfo;
-(BOOL)processStillImageMetadata;
-(int)processStillImageFaceData;
-(int)processMovieMetadata;
-(int)processVidTrackMetadata;
-(int)processStillInternal;
-(int)processVideoInternal;
-(void)buildFullDictionary;
-(int)processFullDictionary;
-(NSMutableDictionary *)featuresDict;
-(NSArray *)stdProcessInputKeysArray;
-(void)setStdProcessInputKeysArray:(NSArray *)arg1 ;
-(ExifMetadataExtractor *)irisStillExtractor;
-(NSMutableDictionary *)fullFeaturesDict;
-(void)setFrameTimes:(vector<CMTime)arg1 ;
-(vector<FloatPoint)frameOffsets;
-(void)setFrameOffsets:(vector<FloatPoint)arg1 ;
-(vector<FloatPoint)frameBlurVectors;
-(void)setFrameBlurVectors:(vector<FloatPoint)arg1 ;
-(void)setStillImageMetadata:(NSDictionary *)arg1 ;
-(void)setFacesArray:(NSArray *)arg1 ;
-(NSArray *)movieMetadata;
-(void)setMovieMetadata:(NSArray *)arg1 ;
-(void)setVideoTrackMetadataDict:(NSDictionary *)arg1 ;
-(NSDictionary *)videoTrackMetadataDict;
-(NSDictionary *)stillImageMetadata;
-(NSArray *)facesArray;
-(id)init;
@end
