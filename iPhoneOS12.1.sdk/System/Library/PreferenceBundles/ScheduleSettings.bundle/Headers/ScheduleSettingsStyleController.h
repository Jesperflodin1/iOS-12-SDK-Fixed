/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:49:22 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PreferenceBundles/ScheduleSettings.bundle/ScheduleSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListItemsController.h>

@class ACAccount, NSString, NSArray, NSMutableSet;

@interface ScheduleSettingsStyleController : PSListItemsController {

	ACAccount* _account;
	NSString* _mailAccountUniqueId;
	NSArray* _mailboxInfos;
	NSMutableSet* _monitored;
	BOOL _supportsUserPushedMailboxes;
	BOOL _isExchangeAccount;
	BOOL _ignoringNotifications;

}
-(void)listItemSelected:(id)arg1 ;
-(void)_accountsChanged;
-(id)notAvailableText;
-(BOOL)shouldShowMailboxes;
-(void)reloadFolders;
-(void)_reloadFoldersAndSpecifiersForced:(BOOL)arg1 ;
-(void)_reloadFoldersAndSpecifiers;
-(void)setPushStateForMailbox:(id)arg1 state:(BOOL)arg2 ;
-(id)specifiers;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end
