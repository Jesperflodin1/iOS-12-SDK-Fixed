/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:44 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTPStartDataPacket : NSObject {

	unsigned _transactionID;
	unsigned long long _totalDataSize;

}
-(id)initWithTCPBuffer:(void*)arg1 ;
-(id)contentForTCP;
-(id)initWithTransactionID:(unsigned)arg1 totalDataSize:(unsigned long long)arg2 ;
-(unsigned long long)totalDataSize;
-(void)setTotalDataSize:(unsigned long long)arg1 ;
-(void)setTransactionID:(unsigned)arg1 ;
-(unsigned)transactionID;
-(id)description;
@end
