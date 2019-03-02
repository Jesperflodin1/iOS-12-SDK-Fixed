//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKDigitalTimeComplicationDataSource : NTKComplicationDataSource
{
}

+ (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
+ (_Bool)acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;
+ (Class)richComplicationDisplayViewClassForType:(unsigned long long)arg1 family:(long long)arg2 forDevice:(id)arg3;
- (id)_templateWithShouldDisplayIdealizeState:(_Bool)arg1;
- (id)complicationApplicationIdentifier;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getCurrentTimelineEntryWithHandler:(CDUnknownBlockType)arg1;
- (void)getSupportedTimeTravelDirectionsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)alwaysShowIdealizedTemplateInSwitcher;
- (id)currentSwitcherTemplate;
- (unsigned long long)timelineAnimationBehavior;
- (void)resume;
- (_Bool)supportsTapAction;

@end
