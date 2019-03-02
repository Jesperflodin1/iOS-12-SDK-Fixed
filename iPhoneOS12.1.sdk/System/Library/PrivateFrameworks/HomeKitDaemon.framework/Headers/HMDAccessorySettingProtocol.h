/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:52:19 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol HMDAccessorySettingProtocol <NSObject>
@property (readonly) long long type; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSArray * constraints; 
@property (copy,readonly) id value; 
@required
-(NSString *)name;
-(long long)type;
-(NSArray *)constraints;
-(id)value;

@end
