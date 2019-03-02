//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UITextDraggableGeometrySameViewDropOperation-Protocol.h>

@class NSArray, NSAttributedString, NSString, UITextRange;

__attribute__((visibility("hidden")))
@interface _UITextDraggableGeometrySameViewDropOperation : NSObject <UITextDraggableGeometrySameViewDropOperation>
{
    NSArray *_sourceRanges;
    UITextRange *_targetRange;
    NSAttributedString *_text;
    unsigned long long _operation;
}

@property(nonatomic) unsigned long long operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
@property(retain, nonatomic) UITextRange *targetRange; // @synthesize targetRange=_targetRange;
@property(retain, nonatomic) NSArray *sourceRanges; // @synthesize sourceRanges=_sourceRanges;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
