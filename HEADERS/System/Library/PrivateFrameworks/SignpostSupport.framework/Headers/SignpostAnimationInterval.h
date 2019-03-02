/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostInterval.h>

@class NSArray;

@interface SignpostAnimationInterval : SignpostInterval {

	NSArray* _compositeIntervals;

}

@property (nonatomic,retain) NSArray * compositeIntervals;                 //@synthesize compositeIntervals=_compositeIntervals - In the implementation block
@property (nonatomic,readonly) float frameRate; 
@property (nonatomic,readonly) unsigned long long frameCount; 
+(id)serializationTypeNumber;
-(id)initWithBeginEvent:(id)arg1 endEvent:(id)arg2 compositeIntervalTimeline:(id)arg3 ;
-(id)humanReadableType;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 ;
-(NSArray *)compositeIntervals;
-(id)descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 ;
-(id)_intervalTypeString;
-(void)setCompositeIntervals:(NSArray *)arg1 ;
-(float)frameRate;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)frameCount;
@end
