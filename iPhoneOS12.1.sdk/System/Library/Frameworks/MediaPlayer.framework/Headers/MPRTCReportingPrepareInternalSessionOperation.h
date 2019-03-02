/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:30:58 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSDictionary, NSString;

@interface MPRTCReportingPrepareInternalSessionOperation : MPAsyncOperation {

	int _clientType;
	NSDictionary* _additionalUserInfo;
	NSString* _clientName;
	long long _clientVersion;
	id _hierarchyToken;
	NSString* _serviceIdentifier;
	long long _sessionID;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSDictionary * additionalUserInfo;              //@synthesize additionalUserInfo=_additionalUserInfo - In the implementation block
@property (nonatomic,copy) NSString * clientName;                          //@synthesize clientName=_clientName - In the implementation block
@property (assign,nonatomic) int clientType;                               //@synthesize clientType=_clientType - In the implementation block
@property (assign,nonatomic) long long clientVersion;                      //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) id hierarchyToken;                            //@synthesize hierarchyToken=_hierarchyToken - In the implementation block
@property (nonatomic,copy) NSString * serviceIdentifier;                   //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (assign,nonatomic) long long sessionID;                          //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) id responseHandler;                             //@synthesize responseHandler=_responseHandler - In the implementation block
+(id)newHierarchyTokenFromParentToken:(id)arg1 ;
+(BOOL)isRTCReportingSupported;
+(id)RTCReportingFrameworkPath;
-(void)setClientType:(int)arg1 ;
-(void)setClientVersion:(long long)arg1 ;
-(void)setHierarchyToken:(id)arg1 ;
-(void)setServiceIdentifier:(NSString *)arg1 ;
-(NSDictionary *)additionalUserInfo;
-(int)clientType;
-(long long)clientVersion;
-(id)hierarchyToken;
-(void)setAdditionalUserInfo:(NSDictionary *)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(void)execute;
-(NSString *)serviceIdentifier;
-(NSString *)clientName;
-(void)setClientName:(NSString *)arg1 ;
-(long long)sessionID;
-(void)setSessionID:(long long)arg1 ;
@end
