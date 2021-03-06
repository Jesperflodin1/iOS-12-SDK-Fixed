//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutOperationFactory-Protocol.h>

@class NSString;
@protocol SXComponentSizerEngine, SXLayoutBlueprintFactory;

@interface SXLayoutOperationFactory : NSObject <SXLayoutOperationFactory>
{
    id <SXComponentSizerEngine> _componentSizerEngine;
    id <SXLayoutBlueprintFactory> _layoutBlueprintFactory;
}

@property(readonly, nonatomic) id <SXLayoutBlueprintFactory> layoutBlueprintFactory; // @synthesize layoutBlueprintFactory=_layoutBlueprintFactory;
@property(readonly, nonatomic) id <SXComponentSizerEngine> componentSizerEngine; // @synthesize componentSizerEngine=_componentSizerEngine;
- (void).cxx_destruct;
- (id)layoutOperationWithViewportSize:(struct CGSize)arg1 constrainedToWidth:(double)arg2 layoutDataProvider:(id)arg3;
- (id)initWithComponentSizerEngine:(id)arg1 layoutBlueprintFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

