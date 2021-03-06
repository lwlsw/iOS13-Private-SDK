//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, WFAction, WFContentCollection, WFRunWorkflowToolbar, WFRunWorkflowViewController, WFWorkflowControllerState;

@protocol WFRunWorkflowViewControllerDelegate <NSObject>

@optional
- (WFRunWorkflowToolbar *)runWorkflowToolbarForWorkflowViewController:(WFRunWorkflowViewController *)arg1;
- (BOOL)workflowViewController:(WFRunWorkflowViewController *)arg1 handleUnsupportedUserInterfaceForAction:(WFAction *)arg2 currentState:(WFWorkflowControllerState *)arg3 completionHandler:(void (^)(void))arg4;
- (BOOL)workflowViewController:(WFRunWorkflowViewController *)arg1 handleUnsupportedEnvironmentForAction:(WFAction *)arg2 currentState:(WFWorkflowControllerState *)arg3 completionHandler:(void (^)(WFContentCollection *, NSError *))arg4;
- (void)workflowViewControllerDidRun:(WFRunWorkflowViewController *)arg1 withOutput:(WFContentCollection *)arg2 error:(NSError *)arg3 cancelled:(BOOL)arg4 continueHandler:(void (^)(void))arg5;
- (void)workflowViewControllerWillRun:(WFRunWorkflowViewController *)arg1 continueHandler:(void (^)(void))arg2;
- (void)workflowViewControllerRequestsDismissal:(WFRunWorkflowViewController *)arg1 withCompletionHandler:(void (^)(void))arg2;
- (BOOL)isDrawerAvailableForWorkflowViewController:(WFRunWorkflowViewController *)arg1;
- (void)workflowViewControllerRequestsActionDrawer:(WFRunWorkflowViewController *)arg1;
@end

