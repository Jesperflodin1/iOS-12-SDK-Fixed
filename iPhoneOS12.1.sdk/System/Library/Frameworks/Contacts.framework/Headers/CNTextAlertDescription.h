/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:26:23 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNAbstractActivityAlertDescription.h>
#import <libobjc.A.dylib/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNTextAlertDescription : CNAbstractActivityAlertDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(BOOL)abPropertyID:(int*)arg1 ;
-(BOOL)applyABMultivalueValueBytes:(char*)arg1 length:(unsigned long long)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 toCNMultivalueRepresentation:(id)arg6 ;
-(void*)ABValueForABPerson:(void*)arg1 ;
-(BOOL)setABValue:(void*)arg1 onABPerson:(void*)arg2 error:(_CFError*)arg3 ;
-(id)CNValueForContact:(id)arg1 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(id)init;
@end
