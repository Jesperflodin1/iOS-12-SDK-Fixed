/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:36:27 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCompactResult : NSObject {

	float _score;
	SCD_Struct_VC9 _timerange;

}

@property (assign) SCD_Struct_VC9 timerange;              //@synthesize timerange=_timerange - In the implementation block
@property (assign) float score;                           //@synthesize score=_score - In the implementation block
-(void)setScore:(float)arg1 ;
-(float)score;
-(SCD_Struct_VC9)timerange;
-(void)setTimerange:(SCD_Struct_VC9)arg1 ;
-(id)initWithTimerange:(SCD_Struct_VC9)arg1 andScore:(float)arg2 ;
@end

