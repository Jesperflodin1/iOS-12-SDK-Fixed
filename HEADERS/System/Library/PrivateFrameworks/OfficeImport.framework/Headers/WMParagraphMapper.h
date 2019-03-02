//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class OIXMLElement, WDParagraph;

@interface WMParagraphMapper : CMMapper
{
    WDParagraph *wdParagraph;
    OIXMLElement *mActiveNode;
    _Bool mIsDeleted;
}

+ (void)mapPlaceholderAt:(id)arg1 rect:(struct CGRect)arg2 withState:(id)arg3;
- (void).cxx_destruct;
- (id)runAtIndex:(unsigned long long)arg1;
- (void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3;
- (void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3;
- (void)mapParagraphBodyWithState:(id)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)activeNode;
- (id)initWithBlock:(id)arg1 parent:(id)arg2;
- (_Bool)isTextFrame;
- (_Bool)containsOfficeArt;
- (_Bool)isCollapsable:(id)arg1;

@end
