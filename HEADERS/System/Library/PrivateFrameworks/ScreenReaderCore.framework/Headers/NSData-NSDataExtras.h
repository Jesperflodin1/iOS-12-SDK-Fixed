//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (NSDataExtras)
+ (id)dataWithCGPoint:(struct CGPoint)arg1;
+ (id)dataWithCGSize:(struct CGSize)arg1;
+ (id)dataWithCGRect:(struct CGRect)arg1;
+ (id)dataWithPSN:(struct ProcessSerialNumber)arg1;
+ (id)dataWithRange:(struct _NSRange)arg1;
- (struct CGPoint)CGPointValue;
- (struct CGSize)CGSizeValue;
- (struct CGRect)CGRectValue;
- (struct ProcessSerialNumber)psn;
- (struct _NSRange)range;
@end
