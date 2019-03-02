/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface VNClustererOptions : NSObject {

	float _threshold;
	float _torsoThreshold;
	NSString* _type;
	NSString* _cachePath;
	NSData* _state;

}

@property (nonatomic,retain) NSString * type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * cachePath;              //@synthesize cachePath=_cachePath - In the implementation block
@property (nonatomic,retain) NSData * state;                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) float threshold;                   //@synthesize threshold=_threshold - In the implementation block
@property (assign,nonatomic) float torsoThreshold;              //@synthesize torsoThreshold=_torsoThreshold - In the implementation block
-(void)setThreshold:(float)arg1 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 ;
-(id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 ;
-(float)torsoThreshold;
-(void)setTorsoThreshold:(float)arg1 ;
-(float)threshold;
-(NSString *)cachePath;
-(void)setCachePath:(NSString *)arg1 ;
-(id)init;
-(NSData *)state;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setState:(NSData *)arg1 ;
@end
