/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:48 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreServices/CoreServices-Structs.h>
@class _UTDeclaredType;

@interface _UTDeclaredTypeSortableWrapper : NSObject {

	_UTDeclaredType* _declaredType;
	LSDatabase* _database;
	const SCD_Struct_UT11* _utypeData;

}

@property (nonatomic,retain) _UTDeclaredType * declaredType;                //@synthesize declaredType=_declaredType - In the implementation block
@property (assign,nonatomic) LSDatabase* database;                          //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) const SCD_Struct_UT11* utypeData;              //@synthesize utypeData=_utypeData - In the implementation block
-(LSDatabase*)database;
-(void)setDatabase:(LSDatabase*)arg1 ;
-(void)setDeclaredType:(_UTDeclaredType *)arg1 ;
-(void)setUtypeData:(const SCD_Struct_UT11*)arg1 ;
-(_UTDeclaredType *)declaredType;
-(const SCD_Struct_UT11*)utypeData;
-(long long)compare:(id)arg1 ;
@end
