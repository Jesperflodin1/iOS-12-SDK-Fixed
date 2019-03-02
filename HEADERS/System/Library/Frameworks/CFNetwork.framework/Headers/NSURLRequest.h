/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSURLRequestInternal, NSString, NSDictionary, NSData, NSInputStream, NSURL;

@interface NSURLRequest : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSURLRequestInternal* _internal;

}

@property (nonatomic,readonly) BOOL ams_requestIsBagLoad; 
@property (copy,readonly) NSString * HTTPMethod; 
@property (copy,readonly) NSDictionary * allHTTPHeaderFields; 
@property (copy,readonly) NSData * HTTPBody; 
@property (retain,readonly) NSInputStream * HTTPBodyStream; 
@property (readonly) BOOL HTTPShouldHandleCookies; 
@property (readonly) BOOL HTTPShouldUsePipelining; 
@property (copy,readonly) NSURL * URL; 
@property (readonly) unsigned long long cachePolicy; 
@property (readonly) double timeoutInterval; 
@property (copy,readonly) NSURL * mainDocumentURL; 
@property (readonly) unsigned long long networkServiceType; 
@property (readonly) BOOL allowsCellularAccess; 
+(id)getObjectKeyWithIndex:(long long)arg1 ;
+(BOOL)allowsAnyHTTPSCertificateForHost:(id)arg1 ;
+(void)setDefaultTimeoutInterval:(double)arg1 ;
+(double)defaultTimeoutInterval;
+(void)setAllowsAnyHTTPSCertificate:(BOOL)arg1 forHost:(id)arg2 ;
+(void)setAllowsSpecificHTTPSCertificate:(id)arg1 forHost:(id)arg2 ;
+(id)allowsSpecificHTTPSCertificateForHost:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)requestWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
+(id)requestWithURL:(id)arg1 ;
-(id)DARequestByApplyingStorageSession:(CFURLStorageSessionRef)arg1 ;
-(id)ic_valuesForCookieWithName:(id)arg1 ;
-(id)ic_valueForHTTPHeaderField:(id)arg1 ;
-(id)aa_HTTPBody;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)ams_valueForHTTPHeader:(id)arg1 ;
-(BOOL)ams_requestIsBagLoad;
-(BOOL)ak_usesHTTPSScheme;
-(id)_allHTTPHeaderFieldsAsArrays;
-(id)_startTimeoutDate;
-(double)_payloadTransmissionTimeout;
-(NSURL *)mainDocumentURL;
-(BOOL)_URLHasScheme:(id)arg1 ;
-(BOOL)_isSafeRequestForBackgroundDownload;
-(void)_removePropertyForKey:(id)arg1 ;
-(double)_timeWindowDelay;
-(double)_timeWindowDuration;
-(BOOL)_requiresShortConnectionTimeout;
-(BOOL)_preventHSTSStorage;
-(id)boundInterfaceIdentifier;
-(id)_copyReplacingURLWithURL:(id)arg1 ;
-(id)HTTPContentType;
-(id)HTTPExtraCookies;
-(id)HTTPReferrer;
-(id)HTTPUserAgent;
-(BOOL)HTTPShouldUsePipelining;
-(id)contentDispositionEncodingFallbackArray;
-(unsigned long long)expectedWorkload;
-(BOOL)_isIdempotent;
-(unsigned long long)networkServiceType;
-(id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3 ;
-(unsigned long long)cachePolicy;
-(NSString *)HTTPMethod;
-(double)timeoutInterval;
-(BOOL)HTTPShouldHandleCookies;
-(BOOL)allowsCellularAccess;
-(NSData *)HTTPBody;
-(NSDictionary *)allHTTPHeaderFields;
-(NSInputStream *)HTTPBodyStream;
-(BOOL)_schemeWasUpgradedDueToDynamicHSTS;
-(BOOL)_ignoreHSTS;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(CFURLRequestRef)_CFURLRequest;
-(id)_initWithCFURLRequest:(CFURLRequestRef)arg1 ;
-(id)_propertyForKey:(id)arg1 ;
-(void)_setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
@end
