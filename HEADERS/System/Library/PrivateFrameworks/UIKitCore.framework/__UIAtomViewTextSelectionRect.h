//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UITextSelectionRect.h>

__attribute__((visibility("hidden")))
@interface __UIAtomViewTextSelectionRect : UITextSelectionRect
{
    _Bool containsStart;
    _Bool containsEnd;
    _Bool isVertical;
    long long writingDirection;
    struct CGRect rect;
}

@property(nonatomic) _Bool isVertical; // @synthesize isVertical;
@property(nonatomic) _Bool containsEnd; // @synthesize containsEnd;
@property(nonatomic) _Bool containsStart; // @synthesize containsStart;
@property(nonatomic) long long writingDirection; // @synthesize writingDirection;
@property(nonatomic) struct CGRect rect; // @synthesize rect;

@end
