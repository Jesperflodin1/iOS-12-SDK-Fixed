/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:38:20 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@class NSData;

@interface HMDeviceSetupResponseMessage : TRResponseMessage {

	NSData* _payload;

}

@property (nonatomic,copy,readonly) NSData * payload;              //@synthesize payload=_payload - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)payload;
-(id)initWithPayload:(id)arg1 ;
@end

