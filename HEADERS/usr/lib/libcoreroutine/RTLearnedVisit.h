/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTCoreDataTransformable.h>

@class NSUUID, RTLearnedLocation, NSDate, NSString;

@interface RTLearnedVisit : NSObject <RTCoreDataTransformable> {

	NSUUID* _identifier;
	RTLearnedLocation* _location;
	NSDate* _entryDate;
	NSDate* _exitDate;
	NSDate* _creationDate;
	NSDate* _expirationDate;
	double _placeConfidence;
	unsigned long long _placeSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double placeConfidence;                      //@synthesize placeConfidence=_placeConfidence - In the implementation block
@property (assign,nonatomic) unsigned long long placeSource;              //@synthesize placeSource=_placeSource - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) RTLearnedLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSDate * entryDate;                        //@synthesize entryDate=_entryDate - In the implementation block
@property (nonatomic,readonly) NSDate * exitDate;                         //@synthesize exitDate=_exitDate - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                     //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                   //@synthesize expirationDate=_expirationDate - In the implementation block
-(NSDate *)exitDate;
-(NSDate *)entryDate;
-(NSDate *)creationDate;
-(id)managedObjectWithContext:(id)arg1 ;
-(unsigned long long)placeSource;
-(id)initWithIdentifier:(id)arg1 location:(id)arg2 entryDate:(id)arg3 exitDate:(id)arg4 creationDate:(id)arg5 expirationDate:(id)arg6 ;
-(void)setPlaceConfidence:(double)arg1 ;
-(void)setPlaceSource:(unsigned long long)arg1 ;
-(double)placeConfidence;
-(id)initWithIdentifier:(id)arg1 location:(id)arg2 entryDate:(id)arg3 exitDate:(id)arg4 creationDate:(id)arg5 expirationDate:(id)arg6 placeConfidence:(double)arg7 placeSource:(unsigned long long)arg8 ;
-(id)initWithVisit:(id)arg1 locationOfInterest:(id)arg2 creationDate:(id)arg3 expirationDate:(id)arg4 ;
-(id)initWithVisitMO:(id)arg1 ;
-(id)initWithLocationOfInterestVisitMO:(id)arg1 ;
-(id)init;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(RTLearnedLocation *)location;
-(NSDate *)expirationDate;
@end
