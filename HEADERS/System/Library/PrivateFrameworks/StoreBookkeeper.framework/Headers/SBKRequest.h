//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ISDataProvider, NSData, NSDictionary, NSString, NSURL, SBKTransaction;

__attribute__((visibility("hidden")))
@interface SBKRequest : NSObject
{
    _Bool _shouldAuthenticate;
    NSURL *_requestURL;
    NSString *_action;
    NSData *_bodyData;
    long long _bodyContentType;
    NSDictionary *_headers;
    NSDictionary *_arguments;
    long long _method;
    ISDataProvider *_responseDataProvider;
    _Bool _concurrent;
    _Bool _includeDeviceGUID;
    SBKTransaction *_transaction;
}

+ (id)_contentTypeStringForBodyContentType:(long long)arg1;
+ (id)_contentEncodingTypeStringForBodyContentEncodingType:(long long)arg1;
+ (id)_methodStringForMethod:(long long)arg1;
+ (long long)bodyContentEncodingType;
+ (long long)bodyContentType;
+ (id)requestWithRequestURL:(id)arg1;
@property(retain, nonatomic) ISDataProvider *responseDataProvider; // @synthesize responseDataProvider=_responseDataProvider;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(nonatomic) _Bool includeDeviceGUID; // @synthesize includeDeviceGUID=_includeDeviceGUID;
@property(nonatomic) _Bool shouldAuthenticate; // @synthesize shouldAuthenticate=_shouldAuthenticate;
@property(nonatomic) long long method; // @synthesize method=_method;
@property(readonly, nonatomic, getter=isConcurrent) _Bool concurrent; // @synthesize concurrent=_concurrent;
@property(retain, nonatomic) SBKTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (id)newURLOperation;
- (id)_defaultHeaderFields;
- (_Bool)acceptsGzipEncoding;
- (id)canonicalResponseForResponse:(id)arg1;
- (id)copyRequestProperties;
- (void)setBodyDataWithPropertyList:(id)arg1;
- (void)setValue:(id)arg1 forArgument:(id)arg2;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
- (id)descriptionWithoutHeaderFields;
@property(readonly, nonatomic) double timeoutInterval;
- (id)description;
- (id)initWithRequestURL:(id)arg1;

@end
