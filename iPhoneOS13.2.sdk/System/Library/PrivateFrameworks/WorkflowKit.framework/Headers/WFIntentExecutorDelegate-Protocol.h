//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class INInteraction, WFIntentExecutor;

@protocol WFIntentExecutorDelegate <NSObject>

@optional
- (void)intentExecutor:(WFIntentExecutor *)arg1 showConfirmationForInteraction:(INInteraction *)arg2 confirmationRequired:(BOOL)arg3 authenticationRequired:(BOOL)arg4 completionHandler:(void (^)(BOOL, NSError *))arg5;
- (void)intentExecutorRequestsContinueInApp:(WFIntentExecutor *)arg1;
@end

