/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:27:37 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSPDNSQuery : NSObject {

	NSString* _name;
	long long _recordType;
	long long _recordClass;

}

@property (readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (readonly) long long recordType;               //@synthesize recordType=_recordType - In the implementation block
@property (readonly) long long recordClass;              //@synthesize recordClass=_recordClass - In the implementation block
-(id)copyStateDictionary;
-(id)initWithName:(id)arg1 recordType:(long long)arg2 recordClass:(long long)arg3 ;
-(long long)recordClass;
-(long long)recordType;
-(NSString *)name;
@end
