//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate;

@protocol PKSpendingSummaryFetcherObserver <NSObject>

@optional
- (void)invalidatedSummariesAvailable;
- (void)invalidatedSpendingSummariesOfType:(NSUInteger)arg1;
- (void)invalidatedSpendingSummaryOfType:(NSUInteger)arg1 startingWithDate:(NSDate *)arg2;
@end

