//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate, NSString;
@protocol CALNTravelEngineDelegate;

@protocol CALNTravelEngine <NSObject>
@property(nonatomic) __weak id <CALNTravelEngineDelegate> delegate;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(NSString *)arg1;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(NSString *)arg1;
- (void)ceaseMonitoringForEventWithExternalURL:(NSString *)arg1;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(NSString *)arg1;
- (void)requestHypothesisRefreshAtDate:(NSDate *)arg1 forEventWithExternalURL:(NSString *)arg2;
@end

