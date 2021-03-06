//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthToolbox/WDAddDataViewController.h>

#import <HealthToolbox/WDAddDataManualEntryItemDelegate-Protocol.h>

@class HKValueRange, WDAddDataManualEntryItem;

__attribute__((visibility("hidden")))
@interface WDCategoryAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate>
{
    WDAddDataManualEntryItem *_categoryValueEntryItem;
    WDAddDataManualEntryItem *_dateEntryItem;
}

@property(readonly, nonatomic) WDAddDataManualEntryItem *dateEntryItem; // @synthesize dateEntryItem=_dateEntryItem;
@property(readonly, nonatomic) WDAddDataManualEntryItem *categoryValueEntryItem; // @synthesize categoryValueEntryItem=_categoryValueEntryItem;
// - (void).cxx_destruct;
- (void)manualEntryItemDidUpdate:(id)arg1;
- (void)validateDataWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) HKValueRange *selectedDateRange;
- (id)generateHKObjects;
- (id)manualEntryItemsForSection:(long long)arg1;
- (long long)numberOfSections;
- (BOOL)_hasCategoryValueEntryItem;
- (id)_categoryCells;
- (BOOL)useSingleStartAndEndDate;
- (long long)_defaultSelectedIndex;
- (id)_orderedTitlesForCategoryValuePicker;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2 unitController:(id)arg3 initialStartDate:(id)arg4;

@end

