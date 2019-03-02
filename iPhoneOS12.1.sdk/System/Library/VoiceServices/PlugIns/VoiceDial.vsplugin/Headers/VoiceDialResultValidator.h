/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:57:28 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/VoiceServices/PlugIns/VoiceDial.vsplugin/VoiceDial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSRecognitionResultValidator.h>

@class VoiceDialNameDataSource, NSString;

@interface VoiceDialResultValidator : NSObject <VSRecognitionResultValidator> {

	void* _addressBook;
	VoiceDialNameDataSource* _nameSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void*)_addressBook;
-(id)_nameSource;
-(id)validRecognitionResultFromRecognitionResult:(id)arg1 ;
-(id)validRecognitionResultFromRecognitionResult:(id)arg1 knownDisambiguationValues:(id)arg2 ;
-(void)dealloc;
@end
