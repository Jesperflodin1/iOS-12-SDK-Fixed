/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:48:53 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Twitter.framework/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@interface TWTweetComposeViewController : UIViewController

@property (nonatomic,copy) id completionHandler; 
+(BOOL)canSendTweet;
-(BOOL)addURL:(id)arg1 ;
-(/*^block*/id)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1 ;
-(void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3 ;
-(BOOL)removeAllImages;
-(BOOL)addImage:(id)arg1 ;
-(BOOL)setInitialText:(id)arg1 ;
-(BOOL)removeAllURLs;
-(/*^block*/id)addURLWithProxyPreviewImage:(id)arg1 ;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end
