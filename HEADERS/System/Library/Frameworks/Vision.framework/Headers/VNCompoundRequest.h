/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequest.h>

@class NSArray, NSNumber;

@interface VNCompoundRequest : VNRequest {

	NSArray* _originalRequests;
	NSNumber* _cachedDependencyProcessingOrdinality;

}

@property (nonatomic,copy,readonly) NSArray * originalRequests;              //@synthesize originalRequests=_originalRequests - In the implementation block
@property (nonatomic,readonly) CGRect regionOfInterest; 
+(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
+(id)compoundRequestsForOriginalRequests:(id)arg1 ;
-(id)initWithOriginalRequests:(id)arg1 ;
-(NSArray *)originalRequests;
-(id)sequencedRequestPreviousObservationsKey;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(BOOL)allowsCachingOfResults;
-(CGRect)regionOfInterest;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)recordWarningsInOriginalRequests;
-(long long)dependencyProcessingOrdinality;
-(BOOL)usesCPUOnly;
-(id)compoundResults;
-(id)description;
@end
