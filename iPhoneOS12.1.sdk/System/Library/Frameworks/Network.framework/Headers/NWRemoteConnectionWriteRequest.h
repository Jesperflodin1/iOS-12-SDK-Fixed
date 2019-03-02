/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:58:55 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSUUID;

@interface NWRemoteConnectionWriteRequest : NSObject {

	NSData* _data;
	NSUUID* _clientID;

}

@property (retain) NSData * data;                  //@synthesize data=_data - In the implementation block
@property (retain) NSUUID * clientID;              //@synthesize clientID=_clientID - In the implementation block
-(NSUUID *)clientID;
-(void)setClientID:(NSUUID *)arg1 ;
-(id)initWithData:(id)arg1 clientID:(id)arg2 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end
