//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIKBKeyplaneChangeContext : NSObject
{
    _Bool _sizeDidChange;
    _Bool _splitWidthsChanged;
    _Bool _selfSizingChanged;
    _Bool _updateAssistantView;
    struct CGSize _size;
}

+ (id)keyplaneChangeContextWithSize:(struct CGSize)arg1;
+ (id)keyplaneChangeContext;
@property(nonatomic) _Bool updateAssistantView; // @synthesize updateAssistantView=_updateAssistantView;
@property(nonatomic) _Bool selfSizingChanged; // @synthesize selfSizingChanged=_selfSizingChanged;
@property(nonatomic) _Bool splitWidthsChanged; // @synthesize splitWidthsChanged=_splitWidthsChanged;
@property(readonly, nonatomic) _Bool sizeDidChange; // @synthesize sizeDidChange=_sizeDidChange;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;

@end
