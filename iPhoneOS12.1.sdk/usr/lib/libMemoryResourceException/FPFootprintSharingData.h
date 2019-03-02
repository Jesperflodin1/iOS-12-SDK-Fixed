/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libMemoryResourceException.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface FPFootprintSharingData : NSObject {

	NSDictionary* _processToProcessGroups;
	NSDictionary* _processGroupToObjects;

}

@property (retain) NSDictionary * processToProcessGroups;              //@synthesize processToProcessGroups=_processToProcessGroups - In the implementation block
@property (retain) NSDictionary * processGroupToObjects;               //@synthesize processGroupToObjects=_processGroupToObjects - In the implementation block
-(NSDictionary *)processToProcessGroups;
-(NSDictionary *)processGroupToObjects;
-(void)setProcessToProcessGroups:(NSDictionary *)arg1 ;
-(void)setProcessGroupToObjects:(NSDictionary *)arg1 ;
@end
