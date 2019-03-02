/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:35 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SLComposeSheetConfigurationItemObserving;
@class NSString;

@interface SLComposeSheetConfigurationItem : NSObject {

	id<SLComposeSheetConfigurationItemObserving> _changeObserver;
	BOOL _valuePending;
	NSString* _title;
	NSString* _value;
	/*^block*/id _tapHandler;

}

@property (nonatomic,copy) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * value;                 //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL valuePending;              //@synthesize valuePending=_valuePending - In the implementation block
@property (nonatomic,copy) id tapHandler;                    //@synthesize tapHandler=_tapHandler - In the implementation block
-(id)tapHandler;
-(void)setValuePending:(BOOL)arg1 ;
-(BOOL)valuePending;
-(void)setTapHandler:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setChangeObserver:(id)arg1 ;
-(id)changeObserver;
@end
