/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /usr/lib/libMemoryResourceException.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libMemoryResourceException.dylib/FPUserProcess.h>

@interface FPCorpseProcess : FPUserProcess
-(id)initWithCorpse:(unsigned)arg1 pid:(int)arg2 name:(id)arg3 dirtyFlags:(unsigned)arg4 procFlags:(unsigned)arg5 ;
-(BOOL)_populateTask;
-(void)_gatherIdleExitStatus;
-(BOOL)_isAlive;
@end

