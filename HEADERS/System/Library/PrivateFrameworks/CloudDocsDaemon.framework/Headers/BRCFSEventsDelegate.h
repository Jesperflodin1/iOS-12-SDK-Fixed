/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:50:36 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BRCFSEventsDelegate <NSObject>
@required
-(void)fseventAtPath:(id)arg1 flags:(unsigned)arg2 options:(unsigned long long)arg3 unresolvedLastPathComponent:(id)arg4;
-(void)fseventAtPath:(id)arg1 flags:(unsigned)arg2;
-(void)fseventAtPath:(id)arg1 flags:(unsigned)arg2 unresolvedLastPathComponent:(id)arg3;
-(void)fseventRecursiveAtRoot:(id)arg1 withReason:(id)arg2;

@end
