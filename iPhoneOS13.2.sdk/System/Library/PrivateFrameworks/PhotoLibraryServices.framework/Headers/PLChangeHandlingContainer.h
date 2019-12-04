//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL, PLChangeNode, PLCoreDataChangeMerger, PLPersistentHistoryChangeDistributor;
@protocol PLChangePublisher;

@interface PLChangeHandlingContainer : NSObject
{
    PLChangeNode *_changeNode;
    PLCoreDataChangeMerger *_changeMerger;
    id <PLChangePublisher> _changePublisher;
    PLPersistentHistoryChangeDistributor *_persistentHistoryChangeDistributor;
    NSURL *_libraryURL;
}

@property(readonly, copy) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
@property(readonly, copy, nonatomic) NSDictionary *allDidSaveObjectIDsUserInfo;
@property(readonly, nonatomic) _Bool isMergingCoalescedSaveNotification;
- (void)handleUnknownMergeEvent;
- (void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 reply:(id /* block */)arg3;
- (void)registerToReceiveCoreDataChanges:(id)arg1;
- (void)disconnectManagedObjectContext:(id)arg1;
- (void)connectManagedObjectContext:(id)arg1;
- (void)unpauseLaunchEventNotifications;
- (void)pauseLaunchEventNotifications;
- (void)stop;
- (void)start;
- (id)initWithLibraryURL:(id)arg1 changePublisher:(id)arg2 libraryServicesManager:(id)arg3 persistentStoreCoordinator:(id)arg4;

@end
