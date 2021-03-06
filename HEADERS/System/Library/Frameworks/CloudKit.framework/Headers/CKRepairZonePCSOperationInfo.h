/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:05 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKRepairZonePCSOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _zoneIDs;

}

@property (nonatomic,retain) NSArray * zoneIDs;              //@synthesize zoneIDs=_zoneIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)zoneIDs;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

