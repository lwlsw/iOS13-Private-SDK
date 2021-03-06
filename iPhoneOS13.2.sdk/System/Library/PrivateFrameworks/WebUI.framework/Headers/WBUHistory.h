//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSHistory.h>

@interface WBUHistory : WBSHistory
{
    BOOL _shouldScheduleMaintenance;
}

@property(nonatomic) BOOL shouldScheduleMaintenance; // @synthesize shouldScheduleMaintenance=_shouldScheduleMaintenance;
- (BOOL)historyStoreShouldScheduleMaintenance:(id)arg1;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
- (BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
- (Class)_historyItemClass;
- (void)_addVisitedLinksForItemsIfNeeded:(id)arg1;
- (void)_removeAllVisitedLinks;
- (id)_createHistoryStore;
- (id)init;

@end

