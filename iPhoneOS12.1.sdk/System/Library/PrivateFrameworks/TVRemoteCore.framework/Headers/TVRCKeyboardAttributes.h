/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TVRCPINEntryAttributes, RTIDataPayload;

@interface TVRCKeyboardAttributes : NSObject <NSSecureCoding> {

	BOOL _likelyPINEntry;
	BOOL _secure;
	BOOL _enablesReturnKeyAutomatically;
	NSString* _title;
	TVRCPINEntryAttributes* _PINEntryAttributes;
	NSString* _prompt;
	RTIDataPayload* _rtiDataPayload;
	long long _keyboardType;
	long long _returnKeyType;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	long long _spellCheckingType;

}

@property (nonatomic,copy) NSString * title;                                                                                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * prompt;                                                                                                                 //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,retain) TVRCPINEntryAttributes * PINEntryAttributes;                                                                                     //@synthesize PINEntryAttributes=_PINEntryAttributes - In the implementation block
@property (nonatomic,retain) RTIDataPayload * rtiDataPayload;                                                                                                 //@synthesize rtiDataPayload=_rtiDataPayload - In the implementation block
@property (assign,setter=_setLikelyPINEntry:,getter=_isLikelyPINEntry,nonatomic) BOOL likelyPINEntry;                                                         //@synthesize likelyPINEntry=_likelyPINEntry - In the implementation block
@property (assign,setter=_setSecure:,getter=_isSecure,nonatomic) BOOL secure;                                                                                 //@synthesize secure=_secure - In the implementation block
@property (assign,setter=_setEnablesReturnKeyAutomatically:,getter=_enablesReturnKeyAutomatically,nonatomic) BOOL enablesReturnKeyAutomatically;              //@synthesize enablesReturnKeyAutomatically=_enablesReturnKeyAutomatically - In the implementation block
@property (assign,setter=_setKeyboardType:,getter=_keyboardType,nonatomic) long long keyboardType;                                                            //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,setter=_setReturnKeyType:,getter=_returnKeyType,nonatomic) long long returnKeyType;                                                         //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (assign,setter=_setAutocapitalizationType:,getter=_autocapitalizationType,nonatomic) long long autocapitalizationType;                              //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,setter=_setAutocorrectionType:,getter=_autocorrectionType,nonatomic) long long autocorrectionType;                                          //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (assign,setter=_setSpellCheckingType:,getter=_spellCheckingType,nonatomic) long long spellCheckingType;                                             //@synthesize spellCheckingType=_spellCheckingType - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)_autocapitalizationType;
-(long long)_autocorrectionType;
-(long long)_keyboardType;
-(long long)_returnKeyType;
-(BOOL)isEqualToAttributes:(id)arg1 ;
-(RTIDataPayload *)rtiDataPayload;
-(void)setRtiDataPayload:(RTIDataPayload *)arg1 ;
-(BOOL)_isLikelyPINEntry;
-(void)_setLikelyPINEntry:(BOOL)arg1 ;
-(BOOL)_enablesReturnKeyAutomatically;
-(void)_setEnablesReturnKeyAutomatically:(BOOL)arg1 ;
-(void)_setKeyboardType:(long long)arg1 ;
-(void)_setReturnKeyType:(long long)arg1 ;
-(void)_setAutocapitalizationType:(long long)arg1 ;
-(void)_setAutocorrectionType:(long long)arg1 ;
-(long long)_spellCheckingType;
-(void)_setSpellCheckingType:(long long)arg1 ;
-(void)applyToTextField:(id)arg1 ;
-(TVRCPINEntryAttributes *)PINEntryAttributes;
-(void)setPINEntryAttributes:(TVRCPINEntryAttributes *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(id)_init;
-(BOOL)_isSecure;
-(void)_setSecure:(BOOL)arg1 ;
@end
