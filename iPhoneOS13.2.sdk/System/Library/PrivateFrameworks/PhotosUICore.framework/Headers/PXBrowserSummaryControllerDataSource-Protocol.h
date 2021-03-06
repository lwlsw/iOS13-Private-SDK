//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDateInterval, NSString, PXBrowserSummaryController;
@protocol PXBrowserSelectionSnapshot, PXBrowserVisibleContentSnapshot;

@protocol PXBrowserSummaryControllerDataSource <NSObject>

@optional
@property(readonly, nonatomic) BOOL shouldShowImportDates;
- (BOOL)isFilteringContainerContentForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (id <PXBrowserSelectionSnapshot>)selectionSnapshotForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (id <PXBrowserVisibleContentSnapshot>)visibleContentSnapshotForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (NSDateInterval *)containerDateIntervalForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (NSString *)localizedContainerItemsCountForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
- (NSString *)containerTitleForBrowserSummaryController:(PXBrowserSummaryController *)arg1;
@end

