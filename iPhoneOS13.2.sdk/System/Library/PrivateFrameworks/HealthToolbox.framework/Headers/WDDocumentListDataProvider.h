//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDSampleListDataProvider.h>

__attribute__((visibility("hidden")))
@interface WDDocumentListDataProvider : WDSampleListDataProvider
{
}

- (void)refineSamplesWithCompletion:(CDUnknownBlockType)arg1;
- (id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;
- (id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
- (double)customEstimatedCellHeight;
- (double)customCellHeight;
- (long long)cellStyle;
- (id)titleForSection:(NSUInteger)arg1;
- (id)sampleTypes;

@end

