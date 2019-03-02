//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LinkPresentation/LPHTMLComponent.h>

@class LPCaptionBarPresentationProperties, LPVerticalTextStackViewStyle;

__attribute__((visibility("hidden")))
@interface LPHTMLVerticalTextStackComponent : LPHTMLComponent
{
    LPVerticalTextStackViewStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
}

+ (id)styleSet;
+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)additionalRulesForStyle:(id)arg1;
+ (id)baseRules;
- (void).cxx_destruct;
- (void)buildComponents;
- (id)componentForRow:(id)arg1 style:(id)arg2 name:(id)arg3 firstLineLeading:(double)arg4;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 themePath:(id)arg3 generator:(id)arg4;

@end
