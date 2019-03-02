/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ECMimePart <NSObject>
@property (nonatomic,copy,readonly) NSString * mimeSubtype; 
@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,readonly) unsigned long long totalTextSize; 
@required
-(NSString *)mimeSubtype;
-(unsigned long long)totalTextSize;
-(NSString *)mimeType;

@end
