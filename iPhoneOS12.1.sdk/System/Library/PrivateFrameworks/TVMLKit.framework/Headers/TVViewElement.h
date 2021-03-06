//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/NSCopying-Protocol.h>

@class IKViewElement, NSArray, NSDictionary, NSString, TVViewElementStyle;

@interface TVViewElement : NSObject <NSCopying>
{
    _Bool _disabled;
    _Bool _parsedOnce;
    IKViewElement *_element;
}

@property(nonatomic, getter=isParsedOnce) _Bool parsedOnce; // @synthesize parsedOnce=_parsedOnce;
@property(readonly, nonatomic) __weak IKViewElement *element; // @synthesize element=_element;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
- (void).cxx_destruct;
- (void)dispatchEventWithName:(id)arg1 canBubble:(_Bool)arg2 cancellable:(_Bool)arg3 extraInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dispatchEventOfType:(long long)arg1 canBubble:(_Bool)arg2 cancellable:(_Bool)arg3 extraInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)resetProperty:(long long)arg1;
@property(readonly, nonatomic) long long updateType;
@property(readonly, nonatomic) long long semanticContentAttribute;
@property(readonly, nonatomic) NSString *autoHighlightIdentifier;
@property(readonly, nonatomic) TVViewElementStyle *style;
@property(readonly, nonatomic) NSDictionary *attributes;
@property(readonly, nonatomic) NSArray *childViewElements;
@property(readonly, nonatomic) __weak TVViewElement *parentViewElement;
@property(readonly, nonatomic) NSString *elementName;
@property(readonly, nonatomic) NSString *elementIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithViewElement:(id)arg1;

@end

