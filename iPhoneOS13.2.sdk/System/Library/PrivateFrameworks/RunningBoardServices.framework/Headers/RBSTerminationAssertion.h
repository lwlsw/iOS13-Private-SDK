//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, RBSAssertion, RBSProcessMonitor, RBSTarget, RBSTerminateContext;

@interface RBSTerminationAssertion : NSObject
{
//     struct os_unfair_lock_s _lock;
    RBSAssertion *_assertion;
    RBSProcessMonitor *_monitor;
    RBSTerminateContext *_terminateContext;
    RBSTarget *_target;
    NSUInteger _state;
    BOOL _processExists;
    NSHashTable *_observers;
}

// - (void).cxx_destruct;
- (void)_notifyObserversOfProcessExit;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)invalidate;
- (BOOL)invalidateWithError:(out id )arg1;
- (BOOL)acquireWithError:(out id )arg1;
@property(readonly, nonatomic) BOOL processExists;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)explanation;
- (id)initWithTarget:(id)arg1 context:(id)arg2;

@end

