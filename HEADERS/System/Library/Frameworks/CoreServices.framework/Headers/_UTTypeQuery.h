/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:48 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/_LSQuery.h>

@interface _UTTypeQuery : _LSQuery {

	unsigned long long _flags;

}

@property (assign,setter=_setResolveInactiveDeclarations:,nonatomic) BOOL _resolveInactiveDeclarations; 
+(id)typeQueryWithIdentifier:(id)arg1 ;
+(id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 limit:(long long)arg4 ;
+(id)typeQueryForAllDeclaredIdentifiers;
+(id)typeQueryWithDescendantsOfIdentifier:(id)arg1 searchDepthLimit:(unsigned long long)arg2 ;
+(id)typeQueryWithTag:(id)arg1 ofClass:(id)arg2 conformsTo:(id)arg3 ;
-(BOOL)_resolveInactiveDeclarations;
-(void)_setResolveInactiveDeclarations:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)resolve;
@end
