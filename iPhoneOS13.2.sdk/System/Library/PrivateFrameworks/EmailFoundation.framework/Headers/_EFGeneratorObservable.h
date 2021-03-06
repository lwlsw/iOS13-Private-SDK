//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailFoundation/EFObservable.h>

@class EFCancelationToken;
@protocol EFScheduler;

@interface _EFGeneratorObservable : EFObservable
{
    id <EFScheduler> _scheduler;
    EFCancelationToken *_cancelable;
    id _state;
    id /* CDUnknownBlockType */ _condition;
    id /* CDUnknownBlockType */ _nextStateForState;
    id /* CDUnknownBlockType */ _resultFromState;
    id /* CDUnknownBlockType */ _delayForState;
}

// - (void).cxx_destruct;
- (void)_updateState;
- (BOOL)_isFinished;
- (void)_scheduleNextResultForObserver:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithInitialState:(id)arg1 condition:(CDUnknownBlockType)arg2 nextState:(CDUnknownBlockType)arg3 resultSelector:(CDUnknownBlockType)arg4 delay:(CDUnknownBlockType)arg5 scheduler:(id)arg6;

@end

