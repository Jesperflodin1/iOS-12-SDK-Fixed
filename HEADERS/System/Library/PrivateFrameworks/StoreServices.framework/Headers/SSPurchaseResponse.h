/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSError, SSPurchase, SSURLConnectionResponse, NSDictionary, NSMutableDictionary, NSString;

@interface SSPurchaseResponse : NSObject <SSXPCCoding, NSSecureCoding> {

	BOOL _cancelsPurchaseBatch;
	NSArray* _downloadIdentifiers;
	NSError* _error;
	SSPurchase* _purchase;
	double _requestStartTime;
	SSURLConnectionResponse* _response;
	double _responseEndTime;
	double _responseStartTime;
	NSDictionary* _tidHeaders;
	NSMutableDictionary* _transactionIdentifiers;

}

@property (assign,nonatomic) BOOL cancelsPurchaseBatch;                          //@synthesize cancelsPurchaseBatch=_cancelsPurchaseBatch - In the implementation block
@property (nonatomic,copy) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) SSPurchase * purchase;                                //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,retain) SSURLConnectionResponse * URLResponse;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSArray * downloadIdentifiers;                        //@synthesize downloadIdentifiers=_downloadIdentifiers - In the implementation block
@property (assign,nonatomic) double requestStartTime;                            //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (assign,nonatomic) double responseEndTime;                             //@synthesize responseEndTime=_responseEndTime - In the implementation block
@property (assign,nonatomic) double responseStartTime;                           //@synthesize responseStartTime=_responseStartTime - In the implementation block
@property (nonatomic,retain) NSDictionary * tidHeaders;                          //@synthesize tidHeaders=_tidHeaders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)downloadMetadataForItemIdentifier:(long long)arg1 ;
-(id)downloadsMetadata;
-(void)setCancelsPurchaseBatch:(BOOL)arg1 ;
-(void)setURLResponse:(SSURLConnectionResponse *)arg1 ;
-(void)setTidHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)tidHeaders;
-(NSArray *)downloadIdentifiers;
-(void)setDownloadIdentifiers:(NSArray *)arg1 ;
-(SSPurchase *)purchase;
-(BOOL)cancelsPurchaseBatch;
-(SSURLConnectionResponse *)URLResponse;
-(id)responseMetrics;
-(double)requestStartTime;
-(double)responseStartTime;
-(double)responseEndTime;
-(void)setRequestStartTime:(double)arg1 ;
-(void)setResponseStartTime:(double)arg1 ;
-(void)setResponseEndTime:(double)arg1 ;
-(id)transactionIdentifierForItemIdentifier:(long long)arg1 ;
-(void)setPurchase:(SSPurchase *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
