//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NCNotificationManagementViewPresenter, NCNotificationRequest, NCNotificationSectionSettings, NSString;

@protocol NCNotificationManagementViewPresenterDelegate <NSObject>
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setAllowsCriticalAlerts:(BOOL)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setDeliverQuietly:(BOOL)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (void)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 setAllowsNotifications:(BOOL)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withSectionIdentifier:(NSString *)arg4;
- (NCNotificationSectionSettings *)notificationManagementViewPresenter:(NCNotificationManagementViewPresenter *)arg1 sectionSettingsForSectionIdentifier:(NSString *)arg2;

@optional
- (void)notificationManagementViewPresenterDidDismissManagementView:(NCNotificationManagementViewPresenter *)arg1;
- (void)notificationManagementViewPresenterWillPresentManagementView:(NCNotificationManagementViewPresenter *)arg1;
@end

