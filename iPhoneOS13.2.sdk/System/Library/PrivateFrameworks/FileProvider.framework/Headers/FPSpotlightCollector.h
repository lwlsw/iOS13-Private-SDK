//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPSpotlightQueryDescriptor, NSDate, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol FPSpotlightCollectorDelegate, OS_dispatch_queue;

@interface FPSpotlightCollector : NSObject
{
    NSMutableDictionary *_itemsByBundleAndCSID;
    BOOL _suspended;
    NSUInteger _numberOfRecoveryAttempts;
    NSDate *_lastStartOfRecovery;
    NSMapTable *_queryToMountPoint;
    BOOL _gathering;
    id <FPSpotlightCollectorDelegate> _delegate;
    FPSpotlightQueryDescriptor *_queryDescriptor;
    NSUInteger _itemsOrigin;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSMutableSet *_observers;
    NSMutableArray *_queries;
}

+ (id)processingQueue;
@property(nonatomic, getter=isGathering) BOOL gathering; // @synthesize gathering=_gathering;
@property(retain, nonatomic) NSMutableArray *queries; // @synthesize queries=_queries;
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(nonatomic) NSUInteger itemsOrigin; // @synthesize itemsOrigin=_itemsOrigin;
@property(readonly, nonatomic) FPSpotlightQueryDescriptor *queryDescriptor; // @synthesize queryDescriptor=_queryDescriptor;
@property(nonatomic) __weak id <FPSpotlightCollectorDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)_areItemsTransientFromBundleIdentifier:(id)arg1;
- (void)_removeItemsForQuery:(id)arg1 mountPoint:(id)arg2;
- (NSUInteger)_itemsOriginForItems:(id)arg1;
- (void)_regather;
- (void)_start;
- (id)_createQueryForMountPoint:(id)arg1;
- (id)_createQueriesForMountPoints:(id)arg1;
- (void)query:(id)arg1 didFinishWithError:(id)arg2;
- (void)queryDidFinishGathering:(id)arg1;
- (void)query:(id)arg1 didUpdateItems:(id)arg2;
- (void)query:(id)arg1 didRemoveItemsWithCSIdentifiers:(id)arg2 inBundle:(id)arg3;
- (BOOL)isQueryCancelled:(id)arg1;
- (id)allItemsForObserver:(id)arg1;
- (id)_allItemsForMountPoint:(id)arg1;
- (id)allItems;
- (void)setNeedsItemsOriginUpdate;
- (id)filterItems:(id)arg1 forObserver:(id)arg2 excludedItemIDs:(id )arg3;
- (id)_mountPointsForDescriptor;
- (id)_mountPointForExistingSearchQuery:(id)arg1;
- (BOOL)_shouldRemoveItemsFromObserver:(id)arg1;
- (BOOL)_shouldFilterUpdatesForObserver:(id)arg1;
- (void)mountPointsDidChange:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)_stop;
- (id)allObservers;
- (void)removeObserver:(id)arg1;
- (void)_removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
@property(readonly, nonatomic, getter=isSuspended) BOOL suspended;
- (id)description;
- (void)_clear;
- (id)initWithDescriptor:(id)arg1;
- (id)init;

@end

