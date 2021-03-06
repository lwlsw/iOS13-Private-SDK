//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightDaemon/SDEventHandlerProvider-Protocol.h>

@protocol OS_dispatch_queue;

@interface SDMigrationMonitor : NSObject <SDEventHandlerProvider>
{
    BOOL _unlocked;
    BOOL _foundExtensions;
    BOOL _finishedDataMigration;
    NSObject<OS_dispatch_queue> *_queue;
    id /* CDUnknownBlockType */ _completionBlock;
    id /* CDUnknownBlockType */ _eventHandler;
}

+ (id)sharedInstance;
@property(copy, nonatomic) id /* CDUnknownBlockType */ eventHandler; // @synthesize eventHandler=_eventHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) BOOL finishedDataMigration; // @synthesize finishedDataMigration=_finishedDataMigration;
@property(nonatomic) BOOL foundExtensions; // @synthesize foundExtensions=_foundExtensions;
@property(nonatomic) BOOL unlocked; // @synthesize unlocked=_unlocked;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)registerHandlerWithEventMonitor:(id)arg1;
- (void)monitorDataMigrationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)unlock;
- (void)_finishMigration;
- (void)_didFindExtensions:(id)arg1;
- (void)resumeMigrationQueue;
- (void)suspendMigrationQueue;
- (void)dealloc;
- (id)init;

@end

