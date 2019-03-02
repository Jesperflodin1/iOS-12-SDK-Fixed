/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:26 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>
#import <libobjc.A.dylib/EKRecurrenceTypeEditItemViewControllerDelegate.h>
#import <libobjc.A.dylib/EKCellShortener.h>

@class NSDate, NSString, PreferencesValueCell, EKRecurrenceTypeEditItemViewController, EKCalendarItemRecurrenceEndCell;

@interface EKCalendarItemRecurrenceEditItem : EKCalendarItemEditItem <EKRecurrenceTypeEditItemViewControllerDelegate, EKCellShortener> {

	long long _repeatType;
	long long _originalRepeatType;
	NSDate* _repeatEnd;
	NSDate* _originalRepeatEnd;
	NSString* _customRepeatDescription;
	unsigned long long _disclosedSubitem;
	int _shorteningStatus;
	PreferencesValueCell* _repeatEndDateCell;
	EKRecurrenceTypeEditItemViewController* _recurrenceTypeVC;
	EKCalendarItemRecurrenceEndCell* _repeatEndPickerCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_neverLocalizedString;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(void)shortenCell:(id)arg1 ;
-(long long)repeatTypeForRecurrenceRule:(id)arg1 ;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(id)stringForDate:(id)arg1 ;
-(id)recurrenceDate;
-(id)recurrenceTimeZone;
-(id)minRecurrenceEndDate;
-(id)_recurrenceTypeVC;
-(BOOL)_validateRecurrenceType:(id)arg1 ;
-(void)_updateRepeatEndDateCell;
-(BOOL)editItemViewControllerSave:(id)arg1 notify:(BOOL)arg2 ;
-(void)_repeatEndDateChanged:(id)arg1 ;
-(void)_neverRepeatButtonTapped:(id)arg1 ;
-(id)_repeatEndPickerCell;
-(id)init;
-(void)dealloc;
-(void)_contentSizeCategoryChanged:(id)arg1 ;
-(void)reset;
@end
