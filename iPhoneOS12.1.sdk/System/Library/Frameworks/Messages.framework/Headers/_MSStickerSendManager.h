/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:55 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messages/Messages-Structs.h>
#import <libobjc.A.dylib/_MSStickerSendManagerDelegate.h>

@protocol _MSStickerSendManagerDelegate;
@class NSString;

@interface _MSStickerSendManager : NSObject <_MSStickerSendManagerDelegate> {

	id<_MSStickerSendManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_MSStickerSendManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)insertSticker:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startDragSticker:(id)arg1 frameInRemoteView:(CGRect)arg2 fence:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setDelegate:(id<_MSStickerSendManagerDelegate>)arg1 ;
-(id<_MSStickerSendManagerDelegate>)delegate;
@end
