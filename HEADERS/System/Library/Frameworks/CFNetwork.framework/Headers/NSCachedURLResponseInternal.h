/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:20:42 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLResponse, NSData, NSDictionary;

@interface NSCachedURLResponseInternal : NSObject {

	NSURLResponse* response;
	NSData* data;
	NSDictionary* userInfo;
	unsigned long long storagePolicy;
	CFCachedURLResponse* _cachedURLResponse;

}
-(void)dealloc;
@end
