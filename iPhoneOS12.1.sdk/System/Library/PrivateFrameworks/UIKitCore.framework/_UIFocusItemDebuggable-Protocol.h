//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@protocol _UIDebugIssueReporting;

@protocol _UIFocusItemDebuggable <NSObject>

@optional
- (void)_diagnoseFocusInteractionEligibilityForReport:(id <_UIDebugIssueReporting>)arg1;
- (_Bool)_shouldAlwaysDiagnoseFocusInteractionEligibility;
- (void)_diagnoseFocusabilityForReport:(id <_UIDebugIssueReporting>)arg1;
@end
