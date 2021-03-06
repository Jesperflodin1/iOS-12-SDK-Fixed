/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:24:13 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface CMFitnessMachineData : NSObject <NSSecureCoding, NSCopying> {

	double fTimestamp;
	double _elapsedTime;
	double _totalEnergy;
	double _totalDistance;
	double _totalElevationAscended;
	long long _totalStrideCount;
	long long _totalStrokeCount;
	long long _totalFloorsClimbed;
	double _instantaneousSpeed;
	double _instantaneousCadence;
	double _instantaneousPower;
	double _inclination;
	double _resistanceLevel;

}

@property (nonatomic,readonly) NSDate * timestamp; 
@property (assign,nonatomic) double elapsedTime;                         //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) double totalEnergy;                         //@synthesize totalEnergy=_totalEnergy - In the implementation block
@property (assign,nonatomic) double totalDistance;                       //@synthesize totalDistance=_totalDistance - In the implementation block
@property (assign,nonatomic) double totalElevationAscended;              //@synthesize totalElevationAscended=_totalElevationAscended - In the implementation block
@property (assign,nonatomic) long long totalStrideCount;                 //@synthesize totalStrideCount=_totalStrideCount - In the implementation block
@property (assign,nonatomic) long long totalStrokeCount;                 //@synthesize totalStrokeCount=_totalStrokeCount - In the implementation block
@property (assign,nonatomic) long long totalFloorsClimbed;               //@synthesize totalFloorsClimbed=_totalFloorsClimbed - In the implementation block
@property (assign,nonatomic) double instantaneousSpeed;                  //@synthesize instantaneousSpeed=_instantaneousSpeed - In the implementation block
@property (assign,nonatomic) double instantaneousCadence;                //@synthesize instantaneousCadence=_instantaneousCadence - In the implementation block
@property (assign,nonatomic) double instantaneousPower;                  //@synthesize instantaneousPower=_instantaneousPower - In the implementation block
@property (assign,nonatomic) double inclination;                         //@synthesize inclination=_inclination - In the implementation block
@property (assign,nonatomic) double resistanceLevel;                     //@synthesize resistanceLevel=_resistanceLevel - In the implementation block
+(BOOL)isAvailable;
+(BOOL)supportsSecureCoding;
-(void)setTotalStrokeCount:(long long)arg1 ;
-(void)convertToCLFitnessMachineData:(CLFitnessMachineData*)arg1 ;
-(long long)totalStrokeCount;
-(void)setElapsedTime:(double)arg1 ;
-(double)instantaneousSpeed;
-(double)inclination;
-(double)resistanceLevel;
-(double)instantaneousPower;
-(double)totalEnergy;
-(void)setInstantaneousSpeed:(double)arg1 ;
-(double)instantaneousCadence;
-(void)setTotalEnergy:(double)arg1 ;
-(long long)totalStrideCount;
-(void)setTotalStrideCount:(long long)arg1 ;
-(double)totalElevationAscended;
-(void)setTotalElevationAscended:(double)arg1 ;
-(long long)totalFloorsClimbed;
-(void)setTotalFloorsClimbed:(long long)arg1 ;
-(void)setInstantaneousCadence:(double)arg1 ;
-(void)setInstantaneousPower:(double)arg1 ;
-(void)setInclination:(double)arg1 ;
-(void)setResistanceLevel:(double)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)timestamp;
-(double)totalDistance;
-(void)setTotalDistance:(double)arg1 ;
-(double)elapsedTime;
-(id)initWithTimestamp:(id)arg1 ;
@end

