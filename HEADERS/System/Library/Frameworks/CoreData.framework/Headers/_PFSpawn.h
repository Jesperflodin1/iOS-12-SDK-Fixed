/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _PFSpawn : NSObject {

	int _pid;
	int _termstatus;

}

@property (readonly) int processID; 
@property (readonly) int terminationStatus; 
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 ;
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 environment:(id)arg3 ;
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 environment:(id)arg3 redirect:(id)arg4 ;
-(int)terminationStatus;
-(void)waitUntilExit;
-(int)processID;
@end

