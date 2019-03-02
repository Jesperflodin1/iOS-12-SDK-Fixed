/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 5:03:04 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKitCore/_UIActivityGroupViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDataSourcePrefetching.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UIActivityGroupViewControllerDelegate, UIActivityGroupViewControllerDataSource;
@class NSArray, _UIPlaceholderActivity, _UIActivityUserDefaults, _UIUserDefaultsActivity, UILongPressGestureRecognizer, NSIndexPath, NSString;

@interface UIActivityGroupViewController : UICollectionViewController <_UIActivityGroupViewDelegateFlowLayout, UICollectionViewDataSourcePrefetching, UIGestureRecognizerDelegate> {

	BOOL _hasActivities;
	BOOL _activityIndexDidChangeWhileDragging;
	BOOL _allowsUserCustomization;
	BOOL _darkStyleOnLegacyApp;
	BOOL _embedded;
	BOOL _picker;
	id<UIActivityGroupViewControllerDelegate> _delegate;
	long long _activityCategory;
	NSArray* _activities;
	NSArray* _visibleActivities;
	_UIPlaceholderActivity* _placeholderGroupActivity;
	_UIActivityUserDefaults* _userDefaults;
	_UIUserDefaultsActivity* _userDefaultsActivity;
	UILongPressGestureRecognizer* _editingGestureRecognizer;
	NSIndexPath* _indexPathForMenuActivity;
	id<UIActivityGroupViewControllerDataSource> _dataSource;
	CGPoint _initialDraggingLocation;
	UIEdgeInsets _externalSafeInset;

}

@property (assign,nonatomic) BOOL hasActivities;                                                         //@synthesize hasActivities=_hasActivities - In the implementation block
@property (nonatomic,copy) NSArray * visibleActivities;                                                  //@synthesize visibleActivities=_visibleActivities - In the implementation block
@property (nonatomic,readonly) BOOL isPlaceholderGroup; 
@property (nonatomic,retain) _UIPlaceholderActivity * placeholderGroupActivity;                          //@synthesize placeholderGroupActivity=_placeholderGroupActivity - In the implementation block
@property (nonatomic,retain) _UIActivityUserDefaults * userDefaults;                                     //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) _UIUserDefaultsActivity * userDefaultsActivity;                             //@synthesize userDefaultsActivity=_userDefaultsActivity - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * editingGestureRecognizer;                    //@synthesize editingGestureRecognizer=_editingGestureRecognizer - In the implementation block
@property (assign,nonatomic) CGPoint initialDraggingLocation;                                            //@synthesize initialDraggingLocation=_initialDraggingLocation - In the implementation block
@property (assign,nonatomic) BOOL activityIndexDidChangeWhileDragging;                                   //@synthesize activityIndexDidChangeWhileDragging=_activityIndexDidChangeWhileDragging - In the implementation block
@property (nonatomic,copy) NSIndexPath * indexPathForMenuActivity;                                       //@synthesize indexPathForMenuActivity=_indexPathForMenuActivity - In the implementation block
@property (assign,nonatomic) BOOL allowsUserCustomization;                                               //@synthesize allowsUserCustomization=_allowsUserCustomization - In the implementation block
@property (assign,nonatomic) BOOL darkStyleOnLegacyApp;                                                  //@synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp - In the implementation block
@property (assign,getter=isEmbedded,nonatomic) BOOL embedded;                                            //@synthesize embedded=_embedded - In the implementation block
@property (assign,getter=isPicker,nonatomic) BOOL picker;                                                //@synthesize picker=_picker - In the implementation block
@property (assign,nonatomic) UIEdgeInsets externalSafeInset;                                             //@synthesize externalSafeInset=_externalSafeInset - In the implementation block
@property (assign,nonatomic,__weak) id<UIActivityGroupViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<UIActivityGroupViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long activityCategory;                                                 //@synthesize activityCategory=_activityCategory - In the implementation block
@property (nonatomic,copy) NSArray * activities;                                                         //@synthesize activities=_activities - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIActivityGroupViewControllerDelegate>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id<UIActivityGroupViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)viewDidLoad;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id<UIActivityGroupViewControllerDataSource>)dataSource;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)setDataSource:(id<UIActivityGroupViewControllerDataSource>)arg1 ;
-(void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2 ;
-(long long)activityCategory;
-(void)setUserDefaults:(_UIActivityUserDefaults *)arg1 ;
-(_UIActivityUserDefaults *)userDefaults;
-(void)setActivities:(NSArray *)arg1 ;
-(NSArray *)activities;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3 ;
-(BOOL)darkStyleOnLegacyApp;
-(void)setDarkStyleOnLegacyApp:(BOOL)arg1 ;
-(id)initWithActivityCategory:(long long)arg1 userDefaults:(id)arg2 ;
-(id)initWithActivityCategory:(long long)arg1 userDefaults:(id)arg2 userDefaultsIdentifier:(id)arg3 ;
-(void)setPlaceholderGroupActivity:(_UIPlaceholderActivity *)arg1 ;
-(void)setAllowsUserCustomization:(BOOL)arg1 ;
-(void)setPicker:(BOOL)arg1 ;
-(void)setActivityCategory:(long long)arg1 ;
-(BOOL)allowsUserCustomization;
-(void)setUserDefaultsActivity:(_UIUserDefaultsActivity *)arg1 ;
-(void)registerClassForContentSizeCategoryChanges;
-(void)unregisterForActivityUserDefaultsChanges;
-(void)handleEditingGesture:(id)arg1 ;
-(id)activityGroupViewLayout;
-(void)setEditingGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)registerForActivityUserDefaultsChanges;
-(BOOL)isPlaceholderGroup;
-(void)setExternalSafeInset:(UIEdgeInsets)arg1 ;
-(_UIPlaceholderActivity *)placeholderGroupActivity;
-(void)setActivities:(id)arg1 animated:(BOOL)arg2 ;
-(_UIUserDefaultsActivity *)userDefaultsActivity;
-(void)_setActivities:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateVisibleActivitiesAnimated:(BOOL)arg1 ;
-(void)_setVisibleActivities:(id)arg1 animated:(BOOL)arg2 ;
-(NSIndexPath *)indexPathForMenuActivity;
-(void)hideItemAtIndexPath:(id)arg1 ;
-(id)activityForItemAtIndexPath:(id)arg1 ;
-(id)_titleTextForActivity:(id)arg1 ;
-(void)_updateItemSizeIfNeeded;
-(void)_dismissPresentedMenuControllers;
-(UILongPressGestureRecognizer *)editingGestureRecognizer;
-(void)setIndexPathForMenuActivity:(NSIndexPath *)arg1 ;
-(void)setActivityIndexDidChangeWhileDragging:(BOOL)arg1 ;
-(BOOL)activityIndexDidChangeWhileDragging;
-(void)_performHideActivityForMenuController:(id)arg1 ;
-(id)targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2 ;
-(void)ignoreUserDefaultsChangesWhileUsingBlock:(/*^block*/id)arg1 ;
-(void)activityUserDefaultsDidChange:(id)arg1 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 moveItemAtIndexPath:(id)arg3 toIndexPath:(id)arg4 ;
-(id)collectionView:(id)arg1 layout:(id)arg2 needsContainerViewForDraggingItemAtIndexPath:(id)arg3 ;
-(id)initPlaceholderGroupWithActivityCategory:(long long)arg1 ;
-(BOOL)hasActivities;
-(void)setHasActivities:(BOOL)arg1 ;
-(NSArray *)visibleActivities;
-(void)setVisibleActivities:(NSArray *)arg1 ;
-(CGPoint)initialDraggingLocation;
-(void)setInitialDraggingLocation:(CGPoint)arg1 ;
-(BOOL)isEmbedded;
-(void)setEmbedded:(BOOL)arg1 ;
-(BOOL)isPicker;
-(UIEdgeInsets)externalSafeInset;
@end
