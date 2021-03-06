//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STUsageGroupSpecifierProvider.h>

@class NSArray, PSSpecifier;

__attribute__((visibility("hidden")))
@interface STShowMoreUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider
{
    PSSpecifier *_summarySpecifier;
    NSArray *_usageItems;
    NSUInteger _numberOfItemsToShow;
    PSSpecifier *_showMoreSpecifier;
    NSUInteger _totalNumberOfItemsToShow;
}

@property(nonatomic) NSUInteger totalNumberOfItemsToShow; // @synthesize totalNumberOfItemsToShow=_totalNumberOfItemsToShow;
@property(readonly, nonatomic) PSSpecifier *showMoreSpecifier; // @synthesize showMoreSpecifier=_showMoreSpecifier;
@property(nonatomic) NSUInteger numberOfItemsToShow; // @synthesize numberOfItemsToShow=_numberOfItemsToShow;
@property(copy, nonatomic) NSArray *usageItems; // @synthesize usageItems=_usageItems;
@property(retain, nonatomic) PSSpecifier *summarySpecifier; // @synthesize summarySpecifier=_summarySpecifier;
// - (void).cxx_destruct;
- (void)showMoreItems:(id)arg1;
- (void)updateSpecifier:(id)arg1 usageItem:(id)arg2;
- (id)newSpecifierWithUsageItem:(id)arg1;
- (void)refreshUsageSpecifiersWithUpdates:(BOOL)arg1;
- (id)init;

@end

