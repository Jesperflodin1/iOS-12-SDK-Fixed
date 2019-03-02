/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:55 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messages/Messages-Structs.h>
@interface MSStickerBrowserViewLayoutSpec : NSObject {

	long long _stickerSize;
	long long _interfaceOrientation;
	CGSize _itemSize;

}

@property (nonatomic,readonly) long long stickerSize;                       //@synthesize stickerSize=_stickerSize - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,readonly) CGSize itemSize;                             //@synthesize itemSize=_itemSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets sectionInset; 
@property (nonatomic,readonly) double minimumInteritemSpacing; 
@property (nonatomic,readonly) double minimumLineSpacing; 
+(id)specWithSizeClass:(long long)arg1 interfaceOrientation:(long long)arg2 ;
-(long long)stickerSize;
-(id)initWithSize:(long long)arg1 interfaceOrientation:(long long)arg2 ;
-(long long)interfaceOrientation;
-(CGSize)itemSize;
-(double)minimumInteritemSpacing;
-(double)minimumLineSpacing;
-(UIEdgeInsets)sectionInset;
@end
