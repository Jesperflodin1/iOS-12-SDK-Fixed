/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:44:53 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PAEFilterDefaultBase.h>

@class NSString, EspressoImage2Image;

@interface PAEStyleTransfer : PAEFilterDefaultBase {

	HGRef<HStyleTransfer>* _styleTransfer;
	NSString* _modelName;
	BOOL _defaultsLoaded;
	EspressoImage2Image* _espresso;
	long long _currentQualityLevel;
	double _currentAspectRatio;

}

@property (nonatomic,retain) EspressoImage2Image * espresso;              //@synthesize espresso=_espresso - In the implementation block
@property (assign,nonatomic) long long currentQualityLevel;               //@synthesize currentQualityLevel=_currentQualityLevel - In the implementation block
@property (assign,nonatomic) double currentAspectRatio;                   //@synthesize currentAspectRatio=_currentAspectRatio - In the implementation block
+(BOOL)hasEspressoVersion;
-(BOOL)loadModel:(id)arg1 ;
-(id)pathForSettings;
-(EspressoImage2Image *)espresso;
-(long long)currentQualityLevel;
-(id)_modeNames;
-(void)setCurrentQualityLevel:(long long)arg1 ;
-(id)modelNameAtIndex:(unsigned long long)arg1 ;
-(void)setEspresso:(EspressoImage2Image *)arg1 ;
-(double)currentAspectRatio;
-(void)setCurrentAspectRatio:(double)arg1 ;
-(id)initWithAPIManager:(id)arg1 ;
-(BOOL)addParameters;
-(BOOL)variesOverTime;
-(BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(SCD_Struct_PA78*)arg3 ;
-(void)loadDefaults;
-(void)dealloc;
-(id)properties;
@end
