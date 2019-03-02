/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:47:31 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/AccessibilityBundles/Memories.axbundle/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSString;

@interface AXMemoriesSlider : UIAccessibilityElement {

	long long _sliderType;
	NSString* _selectedDescription;

}

@property (assign,nonatomic) long long sliderType;                        //@synthesize sliderType=_sliderType - In the implementation block
@property (nonatomic,retain) NSString * selectedDescription;              //@synthesize selectedDescription=_selectedDescription - In the implementation block
-(id)_accessibilityUserTestingElementBaseType;
-(long long)sliderType;
-(NSString *)selectedDescription;
-(id)_axContainingCollectionView;
-(long long)_axContainingSelectedItem;
-(void)setSelectedDescription:(NSString *)arg1 ;
-(void)setSliderType:(long long)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
@end
