/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:42:22 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampling-Structs.h>
#import <PASampling/PACSRefWrapper.h>

@class NSString;

@interface PACSSymbolOwnerWrapper : PACSRefWrapper {

	NSString* _path;
	BOOL _usedDsymForUUID;

}

@property (__weak,readonly) NSString * path; 
@property (assign) BOOL usedDsymForUUID;                  //@synthesize usedDsymForUUID=_usedDsymForUUID - In the implementation block
-(id)initWithSymbolOwner:(CSTypeRef)arg1 ;
-(id)initWithSymbolOwner:(CSTypeRef)arg1 andPath:(id)arg2 ;
-(BOOL)usedDsymForUUID;
-(void)setUsedDsymForUUID:(BOOL)arg1 ;
-(id)debugDescription;
-(NSString *)path;
@end
