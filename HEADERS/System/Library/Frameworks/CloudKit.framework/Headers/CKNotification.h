/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:06 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKNotificationID, NSString, NSArray, NSNumber;

@interface CKNotification : NSObject <NSSecureCoding> {

	BOOL _isPruned;
	long long _notificationType;
	CKNotificationID* _notificationID;
	NSString* _containerIdentifier;
	NSString* _alertBody;
	NSString* _alertLocalizationKey;
	NSArray* _alertLocalizationArgs;
	NSString* _title;
	NSString* _titleLocalizationKey;
	NSArray* _titleLocalizationArgs;
	NSString* _subtitle;
	NSString* _subtitleLocalizationKey;
	NSArray* _subtitleLocalizationArgs;
	NSString* _alertActionLocalizationKey;
	NSString* _alertLaunchImage;
	NSNumber* _badge;
	NSString* _soundName;
	NSString* _subscriptionID;
	NSString* _category;

}

@property (assign,nonatomic) long long notificationType;                       //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,copy) CKNotificationID * notificationID;                  //@synthesize notificationID=_notificationID - In the implementation block
@property (nonatomic,copy) NSString * containerIdentifier;                     //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isPruned;                                    //@synthesize isPruned=_isPruned - In the implementation block
@property (nonatomic,copy) NSString * alertBody;                               //@synthesize alertBody=_alertBody - In the implementation block
@property (nonatomic,copy) NSString * alertLocalizationKey;                    //@synthesize alertLocalizationKey=_alertLocalizationKey - In the implementation block
@property (nonatomic,copy) NSArray * alertLocalizationArgs;                    //@synthesize alertLocalizationArgs=_alertLocalizationArgs - In the implementation block
@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * titleLocalizationKey;                    //@synthesize titleLocalizationKey=_titleLocalizationKey - In the implementation block
@property (nonatomic,copy) NSArray * titleLocalizationArgs;                    //@synthesize titleLocalizationArgs=_titleLocalizationArgs - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * subtitleLocalizationKey;                 //@synthesize subtitleLocalizationKey=_subtitleLocalizationKey - In the implementation block
@property (nonatomic,copy) NSArray * subtitleLocalizationArgs;                 //@synthesize subtitleLocalizationArgs=_subtitleLocalizationArgs - In the implementation block
@property (nonatomic,copy) NSString * alertActionLocalizationKey;              //@synthesize alertActionLocalizationKey=_alertActionLocalizationKey - In the implementation block
@property (nonatomic,copy) NSString * alertLaunchImage;                        //@synthesize alertLaunchImage=_alertLaunchImage - In the implementation block
@property (nonatomic,copy) NSNumber * badge;                                   //@synthesize badge=_badge - In the implementation block
@property (nonatomic,copy) NSString * soundName;                               //@synthesize soundName=_soundName - In the implementation block
@property (nonatomic,copy) NSString * subscriptionID;                          //@synthesize subscriptionID=_subscriptionID - In the implementation block
@property (nonatomic,copy) NSString * category;                                //@synthesize category=_category - In the implementation block
+(id)_realNotificationFromRemoteNotificationDictionary:(id)arg1 ;
+(id)notificationFromRemoteNotificationDictionary:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(void)setIsPruned:(BOOL)arg1 ;
-(BOOL)isPruned;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(void)setSubscriptionID:(NSString *)arg1 ;
-(BOOL)isRead;
-(NSString *)containerIdentifier;
-(long long)notificationType;
-(void)setNotificationType:(long long)arg1 ;
-(id)CKPropertiesDescription;
-(CKNotificationID *)notificationID;
-(id)_initBare;
-(NSString *)alertLocalizationKey;
-(NSArray *)alertLocalizationArgs;
-(NSString *)titleLocalizationKey;
-(NSArray *)titleLocalizationArgs;
-(NSString *)subtitleLocalizationKey;
-(NSArray *)subtitleLocalizationArgs;
-(NSString *)alertActionLocalizationKey;
-(void)setNotificationID:(CKNotificationID *)arg1 ;
-(void)setAlertLocalizationKey:(NSString *)arg1 ;
-(void)setAlertLocalizationArgs:(NSArray *)arg1 ;
-(void)setTitleLocalizationKey:(NSString *)arg1 ;
-(void)setTitleLocalizationArgs:(NSArray *)arg1 ;
-(void)setSubtitleLocalizationKey:(NSString *)arg1 ;
-(void)setSubtitleLocalizationArgs:(NSArray *)arg1 ;
-(void)setAlertActionLocalizationKey:(NSString *)arg1 ;
-(NSString *)subscriptionID;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(void)setAlertBody:(NSString *)arg1 ;
-(void)setAlertLaunchImage:(NSString *)arg1 ;
-(void)setSoundName:(NSString *)arg1 ;
-(NSString *)alertBody;
-(NSString *)alertLaunchImage;
-(NSString *)soundName;
-(void)setBadge:(NSNumber *)arg1 ;
-(NSNumber *)badge;
@end
