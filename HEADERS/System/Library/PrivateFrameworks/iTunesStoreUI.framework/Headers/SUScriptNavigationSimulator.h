//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

#import <iTunesStoreUI/UINavigationControllerDelegate-Protocol.h>

@class NSMutableArray, NSString, UINavigationController, WebScriptObject;

@interface SUScriptNavigationSimulator : SUScriptObject <UINavigationControllerDelegate>
{
    WebScriptObject *_transitionCallback;
    long long _initialIndex;
    long long _lastVisibleIndex;
    UINavigationController *_navigationController;
    NSMutableArray *_enqueuedTransitions;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)stopTransition;
+ (void)startTransition;
+ (_Bool)transitioning;
@property(retain, nonatomic) NSMutableArray *enqueuedTransitions; // @synthesize enqueuedTransitions=_enqueuedTransitions;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) long long lastVisibleIndex; // @synthesize lastVisibleIndex=_lastVisibleIndex;
@property(nonatomic) long long initialIndex; // @synthesize initialIndex=_initialIndex;
- (void).cxx_destruct;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_className;
- (long long)_relativeIndexFromIndex:(long long)arg1;
- (void)_startNextTransition;
- (CDUnknownBlockType)_popHandler;
- (void)_handlePopFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)_enqueueLoadingState:(id)arg1;
- (void)pushViewWithCompletion:(id)arg1;
- (void)popToViewAtIndex:(long long)arg1 completion:(id)arg2;
- (void)popViewWithCompletion:(id)arg1;
- (void)setVisibleIndex:(long long)arg1;
- (void)setIndexCount:(long long)arg1;
@property(retain, nonatomic) WebScriptObject *transitionCallback;
@property(readonly, nonatomic) long long visibleIndex;
@property(readonly, nonatomic) long long indexCount;
- (id)initWithNavigationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
