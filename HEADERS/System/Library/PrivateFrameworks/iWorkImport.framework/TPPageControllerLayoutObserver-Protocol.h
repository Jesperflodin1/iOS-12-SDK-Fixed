//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class TPPageController;

@protocol TPPageControllerLayoutObserver <NSObject>

@optional
- (void)pageController:(TPPageController *)arg1 didInvalidateFromPageIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3;
- (void)pageController:(TPPageController *)arg1 didLayoutPageAtIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3 syncing:(_Bool)arg4;
- (void)pageController:(TPPageController *)arg1 willLayoutPageAtIndex:(unsigned long long)arg2 sectionIndex:(unsigned long long)arg3 syncing:(_Bool)arg4;
@end
