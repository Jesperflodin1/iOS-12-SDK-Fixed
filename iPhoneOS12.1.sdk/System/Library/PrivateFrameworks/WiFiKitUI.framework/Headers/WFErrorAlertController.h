/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:43:02 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>

@interface WFErrorAlertController : UIAlertController {

	/*^block*/id _completionHandler;
	long long _type;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) long long type;                  //@synthesize type=_type - In the implementation block
+(id)_titleForType:(long long)arg1 networkName:(id)arg2 ;
+(id)_messageForType:(long long)arg1 networkName:(id)arg2 ;
+(id)_defaultButtonTitleForType:(long long)arg1 ;
+(id)errorAlertControllerWithType:(long long)arg1 networkName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end
