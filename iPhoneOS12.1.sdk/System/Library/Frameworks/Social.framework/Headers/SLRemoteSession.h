/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:35 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, SLDatabase;

@interface SLRemoteSession : NSObject {

	NSXPCConnection* _connection;
	SLDatabase* _database;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) SLDatabase * database;                     //@synthesize database=_database - In the implementation block
-(id)initWithConnection:(id)arg1 database:(id)arg2 ;
-(BOOL)clientHasEntitlement:(id)arg1 ;
-(SLDatabase *)database;
-(void)setDatabase:(SLDatabase *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end
