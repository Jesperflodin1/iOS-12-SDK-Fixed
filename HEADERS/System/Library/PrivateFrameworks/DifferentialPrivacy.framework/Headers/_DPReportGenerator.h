/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:11 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DPMaintenance.h>

@interface _DPReportGenerator : NSObject <_DPMaintenance>
+(id)randomizeKeys:(id)arg1 andSortByPriority:(BOOL)arg2 ;
+(id)queryKeysForPattern:(id)arg1 storage:(id)arg2 ;
+(id)queryRecordsForKey:(id)arg1 storage:(id)arg2 ;
+(id)filterNonConformingRecordsFrom:(id)arg1 ;
-(void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2 ;
-(id)generateReportForKeys:(id)arg1 storage:(id)arg2 ;
-(BOOL)markSubmitted:(id)arg1 storage:(id)arg2 ;
-(id)generateReportUsing:(id)arg1 ;
@end
