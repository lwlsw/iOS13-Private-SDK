//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsKit/NCNotificationDestinationDelegate-Protocol.h>

@class NCNotificationRequest;
@protocol NCNotificationAlertDestination, NCNotificationDestination;

@protocol NCNotificationAlertDestinationDelegate <NCNotificationDestinationDelegate>
- (void)destination:(id <NCNotificationDestination>)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationDestination>)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(BOOL (^)(NCNotificationRequest *))arg2;
- (void)destinationDidBecomeReadyToReceiveNotifications:(id <NCNotificationDestination>)arg1;

@optional
- (void)destination:(id <NCNotificationAlertDestination>)arg1 didDismissNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 willDismissNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 didPresentNotificationRequest:(NCNotificationRequest *)arg2;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 willPresentNotificationRequest:(NCNotificationRequest *)arg2 suppressAlerts:(BOOL)arg3;
- (void)destination:(id <NCNotificationAlertDestination>)arg1 willPresentNotificationRequest:(NCNotificationRequest *)arg2;
@end

