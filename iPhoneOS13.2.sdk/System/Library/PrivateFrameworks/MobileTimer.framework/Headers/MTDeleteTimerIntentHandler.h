//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MobileTimer/MTTimerIntentHandler.h>

#import <MobileTimer/INDeleteTimerIntentHandling-Protocol.h>

@class NSString;

@interface MTDeleteTimerIntentHandler : MTTimerIntentHandler <INDeleteTimerIntentHandling>
{
}

- (id)_timerFromIntentTargetTimer:(id)arg1 defaultState:(long long)arg2;
- (void)_deleteTimer:(id)arg1 multiple:(_Bool)arg2 dryRun:(_Bool)arg3 completion:(id /* block */)arg4;
- (id)_responseToDeleteTimerIntent:(id)arg1 withDeletedTimers:(id)arg2 error:(id)arg3 dryRun:(_Bool)arg4;
- (void)handleDeleteTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmDeleteTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)resolveDeleteMultipleForDeleteTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTargetTimerForDeleteTimer:(id)arg1 withCompletion:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
