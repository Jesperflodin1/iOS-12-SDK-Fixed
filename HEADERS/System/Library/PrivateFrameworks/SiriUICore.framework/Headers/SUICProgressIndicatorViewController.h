//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SiriUICore/SUICProgressStateMachineObserving-Protocol.h>

@class NSString, SUICProgressIndicatorView;
@protocol SUICProgressIndicatorViewControllerDataSource;

@interface SUICProgressIndicatorViewController : UIViewController <SUICProgressStateMachineObserving>
{
    SUICProgressIndicatorView *_progressIndicatorView;
    id <SUICProgressIndicatorViewControllerDataSource> _dataSource;
}

@property(nonatomic) __weak id <SUICProgressIndicatorViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic, getter=_progressIndicatorView, setter=_setProgressIndicatorView:) SUICProgressIndicatorView *progressIndicatorView; // @synthesize progressIndicatorView=_progressIndicatorView;
- (void).cxx_destruct;
- (void)progressStateMachine:(id)arg1 ignoredEvent:(unsigned long long)arg2;
- (void)progressStateMachine:(id)arg1 didTransitionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 forEvent:(unsigned long long)arg4;
- (void)loadView;
- (_Bool)_shouldAcceptEventsFromStateMachine:(id)arg1;
- (id)_stateMachine;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
