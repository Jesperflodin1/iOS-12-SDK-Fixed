//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVCornerUtilities : NSObject
{
}

+ (struct CGPath *)createPathForRadii:(struct TVCornerRadii)arg1 inRect:(struct CGRect)arg2 isContinuous:(_Bool)arg3;
+ (struct CGPath *)createPathForRadii:(struct TVCornerRadii)arg1 inRect:(struct CGRect)arg2;
+ (double)radiusFromCornerRadii:(struct TVCornerRadii)arg1;
+ (struct TVCornerRadii)flipCGOriginRadii:(struct TVCornerRadii)arg1;
+ (struct TVCornerRadii)radiiFromRadius:(double)arg1;
+ (_Bool)radiiIsZero:(struct TVCornerRadii)arg1;

@end
