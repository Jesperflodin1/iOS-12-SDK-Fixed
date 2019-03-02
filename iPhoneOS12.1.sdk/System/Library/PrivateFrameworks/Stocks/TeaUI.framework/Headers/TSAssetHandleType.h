/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:02:25 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Stocks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIImage;


@protocol TSAssetHandleType
@property (readonly,nonatomic) NSString * filePath; 
@property (readonly,nonatomic) UIImage * fallbackImage; 
@property (readonly,nonatomic) NSString * uniqueKey; 
@required
-(UIImage *)fallbackImage;
-(NSString *)uniqueKey;
-(void)downloadWithGroup:(id)arg1;
-(NSString *)filePath;

@end
