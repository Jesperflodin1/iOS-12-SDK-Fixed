//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@interface CLKComplicationTemplateActivity : CLKComplicationTemplate
{
    long long _family;
    _Bool _hideDots;
    double _energyPercentComplete;
    double _briskMinutesPercentComplete;
    double _standHoursPercentComplete;
}

+ (id)activityTemplateWithFamily:(long long)arg1;
@property(nonatomic, getter=dotsAreHidden) _Bool hideDots; // @synthesize hideDots=_hideDots;
@property(nonatomic) double standHoursPercentComplete; // @synthesize standHoursPercentComplete=_standHoursPercentComplete;
@property(nonatomic) double briskMinutesPercentComplete; // @synthesize briskMinutesPercentComplete=_briskMinutesPercentComplete;
@property(nonatomic) double energyPercentComplete; // @synthesize energyPercentComplete=_energyPercentComplete;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;
- (void)_enumerateBOOLKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateFloatKeysWithBlock:(CDUnknownBlockType)arg1;

@end
