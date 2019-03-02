/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:48 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLWhereIntermediate.h>

@class NSMutableArray, NSSQLEntity, NSArray;

@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate {

	NSMutableArray* _subclauses;
	NSSQLEntity* _disambiguatingEntity;
	NSArray* _disambiguationKeypath;
	BOOL _disambiguationKeypathHasToMany;

}
-(id)generateSQLStringInContext:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 inScope:(id)arg2 inContext:(id)arg3 ;
-(id)disambiguatingEntity;
-(id)disambiguationKeypath;
-(BOOL)disambiguationKeypathHasToMany;
-(id)_generateMulticlauseStringInContext:(id)arg1 ;
-(BOOL)isOrScoped;
-(void)setDisambiguatingEntity:(id)arg1 withKeypath:(id)arg2 hasToMany:(BOOL)arg3 ;
-(void)dealloc;
@end
