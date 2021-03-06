/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:48 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _LSQueryContext : NSObject {

	id _resolver;

}

@property (readonly) id<_LSQueryResolving> _resolver; 
+(id)defaultContext;
+(void)setSimulateLimitedMappingForXCTests:(BOOL)arg1 ;
+(BOOL)simulateLimitedMappingForXCTests;
-(void)clearCaches;
-(void)enumerateResolvedResultsOfQuery:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)resolveQueries:(id)arg1 cachingStrategy:(long long)arg2 error:(id*)arg3 ;
-(id<_LSQueryResolving>)_resolver;
-(id)_resolveQueries:(id)arg1 cachingStrategy:(long long)arg2 XPCConnection:(id)arg3 error:(id*)arg4 ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(id)_init;
@end

