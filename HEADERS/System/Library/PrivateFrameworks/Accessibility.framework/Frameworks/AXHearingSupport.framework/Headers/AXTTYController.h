/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:40:59 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXUIClientDelegate.h>
#import <libobjc.A.dylib/TTYCallDelegate.h>
#import <libobjc.A.dylib/TUCallCapabilitiesDelegate.h>

@class AXUIClient, NSMutableArray, NSString;

@interface AXTTYController : NSObject <AXUIClientDelegate, TTYCallDelegate, TUCallCapabilitiesDelegate> {

	AXUIClient* _actionUIClient;
	BOOL _shouldSuppressIncomingNotification;
	NSMutableArray* _ttyCalls;
	/*^block*/id _actionCompletionBlock;

}

@property (nonatomic,copy) id actionCompletionBlock;                               //@synthesize actionCompletionBlock=_actionCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldSuppressIncomingNotification;              //@synthesize shouldSuppressIncomingNotification=_shouldSuppressIncomingNotification - In the implementation block
@property (nonatomic,retain) NSMutableArray * ttyCalls;                            //@synthesize ttyCalls=_ttyCalls - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)didChangeTelephonyCallingSupport;
-(void)didChangeFaceTimeAudioCallingSupport;
-(void)didChangeFaceTimeVideoCallingSupport;
-(void)callDidConnect:(id)arg1 ;
-(void)setShouldSuppressIncomingNotification:(BOOL)arg1 ;
-(id)displayCallPrompt:(id)arg1 ;
-(id)handleDatabaseRequest:(id)arg1 ;
-(id)handleDictionaryRequest:(id)arg1 ;
-(id)handleSettingsRequest:(id)arg1 ;
-(id)handleIncomingNotificationSuppressionChange:(id)arg1 ;
-(void)setActionCompletionBlock:(id)arg1 ;
-(id)actionCompletionBlock;
-(void)setTtyCalls:(NSMutableArray *)arg1 ;
-(void)telephonySupportDidChange:(id)arg1 ;
-(NSMutableArray *)ttyCalls;
-(void)handleUpdatedCalls:(id)arg1 ;
-(id)callForUUID:(id)arg1 ;
-(void)displayRTTFirstUseAlert;
-(id)actionClient;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)ttyCall:(id)arg1 didReceiveString:(id)arg2 forUtterance:(id)arg3 ;
-(void)dismissRTTFirstUseAlert;
-(BOOL)shouldSuppressIncomingNotification;
-(id)init;
-(void)dealloc;
@end
