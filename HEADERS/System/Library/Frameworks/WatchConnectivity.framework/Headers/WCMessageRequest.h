/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:48:57 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchConnectivity/WCMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WCMessageRequest : WCMessage <NSSecureCoding> {

	BOOL _expectsResponse;

}

@property (assign) BOOL expectsResponse;              //@synthesize expectsResponse=_expectsResponse - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)expectsResponse;
-(void)setExpectsResponse:(BOOL)arg1 ;
-(id)initWithPairingID:(id)arg1 identifier:(id)arg2 data:(id)arg3 dictionaryMessage:(BOOL)arg4 expectsResponse:(BOOL)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
