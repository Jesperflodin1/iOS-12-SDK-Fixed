/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:51 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSNumber;

@interface SFAnalyticsActivityTracker : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;
	Class _clientClass;
	NSNumber* _measurement;
	unsigned long long _start;
	BOOL _canceled;

}
-(id)initWithName:(id)arg1 clientClass:(Class)arg2 ;
-(void)performAction:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)cancel;
-(void)start;
@end
