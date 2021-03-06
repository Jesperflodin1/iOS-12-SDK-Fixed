//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ScreenTimeUI/STGroupSpecifierProvider.h>

@class NSObject, STUsageDetailsViewModel;
@protocol STRootViewModelCoordinator;

@interface STCategoryDetailsGroupSpecifierProvider : STGroupSpecifierProvider
{
    STUsageDetailsViewModel *_usageDetailsViewModel;
    NSObject<STRootViewModelCoordinator> *_coordinator;
}

@property(readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
@property(readonly, nonatomic) STUsageDetailsViewModel *usageDetailsViewModel; // @synthesize usageDetailsViewModel=_usageDetailsViewModel;
- (void).cxx_destruct;
- (void)showMostUsedDetailListController:(id)arg1;
- (id)totalUsageDescription:(id)arg1;
- (id)initWithCategoryUsageItem:(id)arg1 coordinator:(id)arg2;

@end

