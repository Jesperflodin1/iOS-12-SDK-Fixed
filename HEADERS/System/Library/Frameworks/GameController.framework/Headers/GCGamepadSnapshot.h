/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:43:14 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCGamepad.h>

@class NSData;

@interface GCGamepadSnapshot : GCGamepad {

	NSData* snapshotData;

}

@property (copy) NSData * snapshotData; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithController:(id)arg1 snapshotData:(id)arg2 ;
-(id)initWithSnapshotData:(id)arg1 ;
-(void)setSnapshotData:(NSData *)arg1 ;
-(NSData *)snapshotData;
-(id)init;
@end

