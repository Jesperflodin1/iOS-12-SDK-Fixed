/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:47 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSNumber, NSArray;

@interface NSURLComponents : NSObject <NSCopying>

@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * string; 
@property (copy) NSString * scheme; 
@property (copy) NSString * user; 
@property (copy) NSString * password; 
@property (copy) NSString * host; 
@property (copy) NSNumber * port; 
@property (copy) NSString * path; 
@property (copy) NSString * query; 
@property (copy) NSString * fragment; 
@property (copy) NSString * percentEncodedUser; 
@property (copy) NSString * percentEncodedPassword; 
@property (copy) NSString * percentEncodedHost; 
@property (copy) NSString * percentEncodedPath; 
@property (copy) NSString * percentEncodedQuery; 
@property (copy) NSString * percentEncodedFragment; 
@property (readonly) NSRange rangeOfScheme; 
@property (readonly) NSRange rangeOfUser; 
@property (readonly) NSRange rangeOfPassword; 
@property (readonly) NSRange rangeOfHost; 
@property (readonly) NSRange rangeOfPort; 
@property (readonly) NSRange rangeOfPath; 
@property (readonly) NSRange rangeOfQuery; 
@property (readonly) NSRange rangeOfFragment; 
@property (copy) NSArray * queryItems; 
@property (copy) NSArray * percentEncodedQueryItems; 
+(id)componentsWithString:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
-(id)firstQueryItemWithName:(id)arg1 ;
-(BOOL)containsQueryItemWithName:(id)arg1 ;
-(void)geo_updateQueryItemsWithBlock:(/*^block*/id)arg1 ;
-(id)URLRelativeToURL:(id)arg1 ;
-(NSString *)percentEncodedUser;
-(NSString *)percentEncodedPassword;
-(NSString *)percentEncodedHost;
-(NSString *)percentEncodedPath;
-(NSString *)percentEncodedQuery;
-(NSString *)percentEncodedFragment;
-(NSRange)rangeOfScheme;
-(NSRange)rangeOfUser;
-(NSRange)rangeOfPassword;
-(NSRange)rangeOfHost;
-(NSRange)rangeOfPort;
-(NSRange)rangeOfFragment;
-(NSArray *)percentEncodedQueryItems;
-(void)setPercentEncodedQueryItems:(NSArray *)arg1 ;
-(NSArray *)queryItems;
-(void)setHost:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
-(NSRange)rangeOfPath;
-(NSRange)rangeOfQuery;
-(void)setQuery:(NSString *)arg1 ;
-(NSString *)user;
-(void)setUser:(NSString *)arg1 ;
-(void)setPort:(NSNumber *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setPercentEncodedPath:(NSString *)arg1 ;
-(void)setPercentEncodedHost:(NSString *)arg1 ;
-(void)setPercentEncodedUser:(NSString *)arg1 ;
-(void)setPercentEncodedPassword:(NSString *)arg1 ;
-(void)setPercentEncodedQuery:(NSString *)arg1 ;
-(void)setPercentEncodedFragment:(NSString *)arg1 ;
-(void)setFragment:(NSString *)arg1 ;
-(id)init;
-(NSString *)string;
-(id)initWithString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSURL *)URL;
-(NSString *)scheme;
-(NSString *)host;
-(NSString *)password;
-(NSString *)query;
-(void)setScheme:(NSString *)arg1 ;
-(void)setQueryItems:(NSArray *)arg1 ;
-(NSNumber *)port;
-(NSString *)fragment;
@end
