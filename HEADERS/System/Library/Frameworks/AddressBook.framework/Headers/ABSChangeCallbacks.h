/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:27:12 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABSAddressBook, NSMutableArray;

@interface ABSChangeCallbacks : NSObject {

	ABSAddressBook* _addressBook;
	NSMutableArray* _externalCallbacks;
	NSMutableArray* _externalCallBackThreads;
	NSMutableArray* _externalCallbackContexts;
	long long _initialAccessStatus;

}
-(void)contactStoreChanged:(id)arg1 ;
-(BOOL)hasExternalCallback:(/*function pointer*/void*)arg1 onThread:(id)arg2 withContext:(void*)arg3 ;
-(void)addExternalCallback:(/*function pointer*/void*)arg1 onThread:(id)arg2 withContext:(void*)arg3 ;
-(void)removeExternalCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
-(id)initWithAddressBook:(id)arg1 ;
-(void)dealloc;
@end

