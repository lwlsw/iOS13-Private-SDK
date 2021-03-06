//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTSnapshotScheduler.h>

#import <MobileTimer/MTTimerObserver-Protocol.h>

@class MTTimerStorage;

@interface MTTimerSnapshot : MTSnapshotScheduler <MTTimerObserver>
{
    MTTimerStorage *_storage;
}

@property(readonly, nonatomic) MTTimerStorage *storage; // @synthesize storage=_storage;
// - (void).cxx_destruct;
- (void)nextTimerDidChange:(id)arg1;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (id)initWithStorage:(id)arg1;

@end

