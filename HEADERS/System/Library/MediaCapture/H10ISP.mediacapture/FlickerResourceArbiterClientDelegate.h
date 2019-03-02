/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:48:58 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
#import <libobjc.A.dylib/ResourceArbiterClientDelegate.h>

@class ResourceArbiterClient, NSString;

@interface FlickerResourceArbiterClientDelegate : NSObject <ResourceArbiterClientDelegate> {

	ResourceArbiterClient* _arbiterClient;
	H10ISPFlickerDetectorContext* _flickerContext;

}

@property (nonatomic,readonly) ResourceArbiterClient * arbiterClient;                   //@synthesize arbiterClient=_arbiterClient - In the implementation block
@property (assign,nonatomic) H10ISPFlickerDetectorContext* flickerContext;              //@synthesize flickerContext=_flickerContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resourceAccessResult:(BOOL)arg1 ;
-(void)resourceAccessRevoked;
-(void)requestResourceAccess;
-(H10ISPFlickerDetectorContext*)flickerContext;
-(void)setFlickerContext:(H10ISPFlickerDetectorContext*)arg1 ;
-(void)releaseResourceAccess;
-(ResourceArbiterClient *)arbiterClient;
-(id)init;
-(void)cleanup;
@end
