/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:55:37 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.vvservice/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAP/IMAP-Structs.h>
#import <IMAP/MFLibraryIMAPStore.h>

@interface IMAPServiceStore : MFLibraryIMAPStore {

	struct {
		unsigned settingLocalValidity : 1;
	}  _imapServiceStoreFlags;

}
-(id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)doCompact;
-(id)newObjectCache;
-(unsigned)connectionBodyDataReadChunkSize:(id)arg1 ;
-(void)setMailboxUidValidity:(unsigned)arg1 ;
-(BOOL)shouldRetryEmptyBodyDownloadForMessage:(id)arg1 ;
-(void)updateDeletedCount;
-(void)messagesAdded:(id)arg1 ;
@end
