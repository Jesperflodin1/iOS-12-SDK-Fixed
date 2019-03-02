/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:31:24 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/EKEventAttendeePickerDelegate.h>

@protocol EKShareePickerViewControllerDelegate;
@class EKCalendarShareePicker, NSArray, NSString;

@interface EKShareePickerViewController : UIViewController <EKEventAttendeePickerDelegate> {

	EKCalendarShareePicker* _picker;
	id<EKShareePickerViewControllerDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * sharees; 
@property (assign,nonatomic,__weak) id<EKShareePickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)setSearchAccountID:(id)arg1 ;
-(NSArray *)sharees;
-(void)setSharees:(NSArray *)arg1 ;
-(void)add;
-(id)_createShareeFromRecipient:(id)arg1 ;
-(id)_createRecipientFromSharee:(id)arg1 ;
-(id)_shareeFromRecipient:(id)arg1 ;
-(id)_recipientFromSharee:(id)arg1 ;
-(void)eventAttendeePicker:(id)arg1 cacheValidationStatus:(unsigned long long)arg2 forAddress:(id)arg3 ;
-(unsigned long long)eventAttendeePicker:(id)arg1 getValidationStatusForAddress:(id)arg2 ;
-(void)setDelegate:(id<EKShareePickerViewControllerDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<EKShareePickerViewControllerDelegate>)delegate;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)cancel;
@end
