/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:41:53 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface RPStoreInfo : NSObject {

	NSString* _bundleID;
	NSString* _appName;
	NSString* _author;
	NSString* _itemURL;
	NSArray* _categories;

}

@property (nonatomic,retain) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * appName;                //@synthesize appName=_appName - In the implementation block
@property (nonatomic,retain) NSString * author;                 //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSString * itemURL;                //@synthesize itemURL=_itemURL - In the implementation block
@property (nonatomic,retain) NSArray * categories;              //@synthesize categories=_categories - In the implementation block
-(NSString *)author;
-(void)setCategories:(NSArray *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)itemURL;
-(void)setItemURL:(NSString *)arg1 ;
-(void)setAppName:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(id)dictionary;
-(NSString *)bundleID;
-(NSArray *)categories;
-(NSString *)appName;
@end
