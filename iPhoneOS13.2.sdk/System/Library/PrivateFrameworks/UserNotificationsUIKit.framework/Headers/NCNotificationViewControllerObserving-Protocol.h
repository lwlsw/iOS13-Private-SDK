//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NCNotificationViewController;

@protocol NCNotificationViewControllerObserving <NSObject>

@optional
- (void)longLookDidDismissForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)longLookWillDismissForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)longLookDidPresentForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)longLookWillPresentForNotificationViewController:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerDidDismiss:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerWillDismiss:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerDidPresent:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerWillPresent:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerDidEndUserInteraction:(NCNotificationViewController *)arg1;
- (void)notificationViewControllerWillBeginUserInteraction:(NCNotificationViewController *)arg1;
@end

