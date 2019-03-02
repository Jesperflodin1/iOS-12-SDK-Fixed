/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:59 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AXHearingSupport/AXHearingSupport-Structs.h>
@class NSObject;

@interface TTYUtilities : NSObject {

	BOOL _inUnitTestMode;
	BOOL _headphoneJackSupportsTTY;
	NSObject*<OS_dispatch_queue> _callCenterQueue;

}

@property (assign,nonatomic) BOOL headphoneJackSupportsTTY;                             //@synthesize headphoneJackSupportsTTY=_headphoneJackSupportsTTY - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callCenterQueue;              //@synthesize callCenterQueue=_callCenterQueue - In the implementation block
@property (assign,nonatomic) BOOL inUnitTestMode;                                       //@synthesize inUnitTestMode=_inUnitTestMode - In the implementation block
+(BOOL)softwareTTYIsSupported;
+(BOOL)hardwareTTYIsSupported;
+(id)sharedUtilityProvider;
+(BOOL)ttyShouldBeRealtimeForCall:(id)arg1 ;
+(id)sharedCallCenter;
+(void)performCallCenterTask:(/*^block*/id)arg1 ;
+(BOOL)contactIsTTYContact:(id)arg1 ;
+(BOOL)isOnlyRTTSupported;
+(BOOL)shouldUseRTT;
+(BOOL)relayIsSupported;
+(id)relayPhoneNumber;
+(id)ASCIINumericStringFromString:(CFStringRef)arg1 ;
+(void)displayCallPromptForContact:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)cancelCallPromptDisplay;
+(BOOL)isAppleInternalBuild;
+(void)contactIsTTYContact:(id)arg1 resultBlock:(/*^block*/id)arg2 ;
+(id)phoneNumberStringFromString:(id)arg1 ;
+(BOOL)isRTTSupported;
-(void)setInUnitTestMode:(BOOL)arg1 ;
-(BOOL)inUnitTestMode;
-(unsigned long long)currentPreferredTransportMethod;
-(UIEdgeInsets)bubbleInsetForMe:(BOOL)arg1 ;
-(long long)textAlignmentForMe:(BOOL)arg1 ;
-(UIEdgeInsets)textInsetForMe:(BOOL)arg1 ;
-(id)bubbleFillForMe:(BOOL)arg1 ;
-(id)contactPathForCall:(id)arg1 ;
-(void)setTTYDictionaryAvailability:(BOOL)arg1 ;
-(id)conversationForCallUID:(id)arg1 ;
-(BOOL)deleteConversationWithCallUID:(id)arg1 ;
-(BOOL)contactIsTTYContact:(id)arg1 ;
-(void)setCallCenterQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)myPhoneNumber;
-(id)ttyIconWithTint:(id)arg1 ;
-(id)bubbleColorForMe:(BOOL)arg1 ;
-(id)ttyMeContact;
-(id)largeTTYIconWithTint:(id)arg1 ;
-(id)tintedTTYIcon;
-(BOOL)headphoneJackSupportsTTY;
-(void)setHeadphoneJackSupportsTTY:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)callCenterQueue;
-(id)init;
@end
