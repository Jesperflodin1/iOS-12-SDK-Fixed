/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:35:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFContactsSearchOperation.h>

@class NSString;

@interface MFRecentsSearchOperation : MFContactsSearchOperation {

	NSString* _bundleIdentifier;
	unsigned long long _implicitGroupThreshold;
	unsigned long long _queryOptions;

}
+(id)operationWithAddressBook:(void*)arg1 owner:(id)arg2 text:(id)arg3 taskID:(id)arg4 properties:(id)arg5 bundleIdentifier:(id)arg6 implicitGroupThreshold:(unsigned long long)arg7 queryOptions:(unsigned long long)arg8 ;
-(void)dealloc;
-(unsigned long long)type;
-(void)main;
@end

