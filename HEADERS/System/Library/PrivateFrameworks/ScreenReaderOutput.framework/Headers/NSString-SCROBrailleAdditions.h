//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SCROBrailleAdditions)
- (struct _NSRange)_nsRangeForCFRange:(CDStruct_912cb5d2)arg1;
- (long long)_indexAdjustedForWhitespace:(long long)arg1;
- (struct _NSRange)rangeOfWordAfterWordAtIndex:(long long)arg1;
- (struct _NSRange)rangeOfWordBeforeWordAtIndex:(long long)arg1;
- (struct _NSRange)rangeOfWordContainingIndex:(long long)arg1;
- (struct _NSRange)_rangeIsolatingIllegalCharacters:(struct _NSRange)arg1 forwards:(_Bool)arg2;
- (id)_legalWhiteSpaceSet;
- (id)_illegalCharacterSet;
@end
