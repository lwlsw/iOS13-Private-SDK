//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/WFApplicationStateObserver-Protocol.h>

@interface WFWaitToReturnAction : WFAction <WFApplicationStateObserver>
{
}

- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)finishRunningWithError:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

