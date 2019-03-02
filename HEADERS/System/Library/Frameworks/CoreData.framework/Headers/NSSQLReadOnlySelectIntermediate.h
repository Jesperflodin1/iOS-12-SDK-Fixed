/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:21:49 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLSelectIntermediate.h>

@class NSMutableDictionary;

@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {

	BOOL _onlyFetchesAggregates;
	NSMutableDictionary* _variableToAliasMappings;
	NSMutableDictionary* _propertyToAliasMappings;

}
-(id)initWithScope:(id)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(BOOL)onlyFetchesAggregates;
-(id)resolveVariableExpression:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
@end
