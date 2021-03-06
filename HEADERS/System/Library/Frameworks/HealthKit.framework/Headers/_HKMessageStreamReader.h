/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:32:27 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSInputStream, NSObject, NSMutableData, NSError, NSString;

@interface _HKMessageStreamReader : NSObject <NSStreamDelegate> {

	NSInputStream* _inputStream;
	NSObject*<OS_dispatch_queue> _streamQueue;
	NSObject*<OS_dispatch_queue> _clientQueue;
	unsigned _headerValue;
	unsigned long long _headerOffset;
	unsigned _streamVersion;
	NSMutableData* _messageData;
	unsigned long long _messageDataOffset;
	NSError* _error;
	long long _state;
	int _invalidated;
	/*^block*/id _messageHandler;

}

@property (nonatomic,copy) id messageHandler;                       //@synthesize messageHandler=_messageHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)_streamQueue_close;
-(long long)_streamQueue_readHeader;
-(long long)_streamQueue_readMessage;
-(void)_streamQueue_finish;
-(void)_streamQueue_transistionToReadingMessageLength;
-(void)_streamQueue_transistionToError:(id)arg1 ;
-(void)_streamQueue_transistionToReadingMessageBytesWithLength:(unsigned long long)arg1 ;
-(void)_invokeMessageHandlerWithData:(id)arg1 finished:(BOOL)arg2 error:(id)arg3 ;
-(void)_streamQueue_readBytes;
-(void)setMessageHandler:(id)arg1 ;
-(id)messageHandler;
-(id)initWithInputStream:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)open;
-(id)initWithData:(id)arg1 ;
@end

