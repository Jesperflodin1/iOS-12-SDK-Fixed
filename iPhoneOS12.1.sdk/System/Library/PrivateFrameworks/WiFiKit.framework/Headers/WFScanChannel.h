/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:45:41 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFScanChannel : NSObject {

	long long _channel;
	long long _flags;

}

@property (assign,nonatomic) long long channel;              //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) long long flags;                //@synthesize flags=_flags - In the implementation block
-(long long)flags;
-(void)setFlags:(long long)arg1 ;
-(id)initWithChannel:(long long)arg1 flags:(long long)arg2 ;
-(id)init;
-(id)description;
-(void)setChannel:(long long)arg1 ;
-(long long)channel;
@end

