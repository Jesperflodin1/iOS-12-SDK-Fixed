/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:50:10 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySender.framework/AirPlaySender
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRCarPlayPreferencesDelegate.h>

@protocol APCarPlayPreferencesDelegate;
@class CRCarPlayPreferences, NSString;

@interface APCarPlayPreferences : NSObject <CRCarPlayPreferencesDelegate> {

	CRCarPlayPreferences* _preferences;
	id<APCarPlayPreferencesDelegate> _delegate;

}

@property (assign,nonatomic) id<APCarPlayPreferencesDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (getter=isCarPlayEnabled,nonatomic,readonly) BOOL carPlayEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleCarPlayAllowedDidChange;
-(BOOL)isCarPlayEnabled;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<APCarPlayPreferencesDelegate>)arg1 ;
-(id<APCarPlayPreferencesDelegate>)delegate;
@end

