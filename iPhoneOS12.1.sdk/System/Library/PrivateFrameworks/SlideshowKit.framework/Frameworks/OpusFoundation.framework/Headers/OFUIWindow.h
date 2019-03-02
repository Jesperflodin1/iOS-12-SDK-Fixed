//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import <OpusFoundation/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableDictionary, NSString, OFUIWindowDraggingAutoscroll, OFUIWindowDraggingGestureRecognizer, OFUIWindowDraggingSession;

@interface OFUIWindow : UIWindow <UIGestureRecognizerDelegate>
{
    OFUIWindowDraggingSession *_draggingSession;
    OFUIWindowDraggingGestureRecognizer *_draggingGestureRecognizer;
    OFUIWindowDraggingAutoscroll *_draggingAutoscroll;
    NSMutableDictionary *_eventsTracking;
    _Bool _showTouches;
}

@property(nonatomic) _Bool showTouches; // @synthesize showTouches=_showTouches;
@property(retain, nonatomic) OFUIWindowDraggingAutoscroll *draggingAutoscroll; // @synthesize draggingAutoscroll=_draggingAutoscroll;
@property(retain, nonatomic) OFUIWindowDraggingGestureRecognizer *draggingGestureRecognizer; // @synthesize draggingGestureRecognizer=_draggingGestureRecognizer;
@property(retain, nonatomic) OFUIWindowDraggingSession *draggingSession; // @synthesize draggingSession=_draggingSession;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleDragging:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)cancelDragging;
- (_Bool)isDragging;
- (id)beginDraggingItems:(id)arg1 position:(struct CGPoint)arg2 source:(id)arg3;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
