//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SPSchedulerInformation;

@protocol SPSchedulerXPCProtocol <NSObject>
- (oneway void)publishImmediatelyWithCompletion:(void (^)(NSError *))arg1;
- (oneway void)schedulePublishWakeWithInformation:(SPSchedulerInformation *)arg1 completion:(void (^)(NSError *))arg2;
@end

