//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TVTextElement;

@interface WLKUITextViewElementRenderer : NSObject
{
    TVTextElement *_element;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) TVTextElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (struct CGSize)textSize;
- (void)drawElementInRect:(struct CGRect)arg1;
- (id)initWithElement:(id)arg1;

@end

