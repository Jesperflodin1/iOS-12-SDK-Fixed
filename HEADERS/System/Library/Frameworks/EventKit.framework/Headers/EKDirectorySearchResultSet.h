/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:28:03 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface EKDirectorySearchResultSet : NSObject {

	NSSet* _locations;
	NSSet* _groups;
	NSSet* _resources;
	NSSet* _people;

}

@property (nonatomic,retain) NSSet * locations;              //@synthesize locations=_locations - In the implementation block
@property (nonatomic,retain) NSSet * groups;                 //@synthesize groups=_groups - In the implementation block
@property (nonatomic,retain) NSSet * resources;              //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) NSSet * people;                 //@synthesize people=_people - In the implementation block
-(NSSet *)resources;
-(void)setResources:(NSSet *)arg1 ;
-(NSSet *)locations;
-(NSSet *)people;
-(void)setPeople:(NSSet *)arg1 ;
-(NSSet *)groups;
-(void)setGroups:(NSSet *)arg1 ;
-(void)setLocations:(NSSet *)arg1 ;
@end
