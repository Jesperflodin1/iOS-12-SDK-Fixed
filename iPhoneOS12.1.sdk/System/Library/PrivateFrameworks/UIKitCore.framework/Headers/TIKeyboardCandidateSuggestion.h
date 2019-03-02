/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:00 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <TextInput/TIKeyboardCandidate.h>

@class UITextSuggestion;

@interface TIKeyboardCandidateSuggestion : TIKeyboardCandidate {

	unsigned long long _customInfoType;
	UITextSuggestion* _textSuggestion;

}

@property (nonatomic,readonly) UITextSuggestion * textSuggestion;              //@synthesize textSuggestion=_textSuggestion - In the implementation block
+(id)candidateWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2 ;
+(id)candidateWithSuggestion:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(unsigned long long)customInfoType;
-(id)candidate;
-(UITextSuggestion *)textSuggestion;
-(id)input;
-(id)initWithSuggestion:(id)arg1 customInfoType:(unsigned long long)arg2 ;
@end
