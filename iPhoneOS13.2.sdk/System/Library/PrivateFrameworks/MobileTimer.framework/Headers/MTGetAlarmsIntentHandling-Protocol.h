//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MTGetAlarmsIntent;

@protocol MTGetAlarmsIntentHandling <NSObject>
- (void)handleGetAlarms:(MTGetAlarmsIntent *)arg1 completion:(void (^)(MTGetAlarmsIntentResponse *))arg2;

@optional
- (void)confirmGetAlarms:(MTGetAlarmsIntent *)arg1 completion:(void (^)(MTGetAlarmsIntentResponse *))arg2;
@end

