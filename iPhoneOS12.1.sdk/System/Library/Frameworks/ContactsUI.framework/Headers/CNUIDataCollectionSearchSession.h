/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:57 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNUIDataCollectionSearchSession : NSObject {

	BOOL _pendingResults;
	BOOL _pendingSuggestionsResults;

}

@property (assign,nonatomic) BOOL pendingResults;                         //@synthesize pendingResults=_pendingResults - In the implementation block
@property (assign,nonatomic) BOOL pendingSuggestionsResults;              //@synthesize pendingSuggestionsResults=_pendingSuggestionsResults - In the implementation block
+(void)begin;
+(id)currentSession;
+(void)end;
-(void)searchStringDidChange;
-(void)didSelectResult:(id)arg1 ;
-(void)setPendingResults:(BOOL)arg1 ;
-(void)setPendingSuggestionsResults:(BOOL)arg1 ;
-(BOOL)pendingResults;
-(BOOL)pendingSuggestionsResults;
-(void)didFetchResultSuggested:(BOOL)arg1 ;
@end
