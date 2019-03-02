/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:54:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol RMSTouchRemoteSocketDelegate;
@class NSOutputStream, NSString;

@interface RMSTouchRemoteSocket : NSObject <NSStreamDelegate> {

	NSOutputStream* _outputStream;
	NSString* _host;
	unsigned _port;
	unsigned _encryptionKey;
	id<RMSTouchRemoteSocketDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RMSTouchRemoteSocketDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(id)_encryptData:(id)arg1 ;
-(id)initWithHost:(id)arg1 port:(int)arg2 encryptionKey:(int)arg3 ;
-(BOOL)sendTouchCode:(long long)arg1 timeInMilliseconds:(unsigned)arg2 location:(CGPoint)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id<RMSTouchRemoteSocketDelegate>)arg1 ;
-(id<RMSTouchRemoteSocketDelegate>)delegate;
-(void)connect;
-(void)disconnect;
@end
