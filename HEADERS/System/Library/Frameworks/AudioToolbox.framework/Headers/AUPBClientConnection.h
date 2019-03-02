/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:23:17 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AUPBInspecting;
@class NSXPCConnection;

@interface AUPBClientConnection : NSObject {

	NSXPCConnection* xpcconnection;
	id<AUPBInspecting> proxyInterface;

}

@property (nonatomic,retain) NSXPCConnection * xpcconnection; 
@property (nonatomic,retain) id<AUPBInspecting> proxyInterface; 
-(id<AUPBInspecting>)proxyInterface;
-(void)setProxyInterface:(id<AUPBInspecting>)arg1 ;
-(NSXPCConnection *)xpcconnection;
-(void)setXpcconnection:(NSXPCConnection *)arg1 ;
@end
