//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/PLExpandedPlatterViewDelegate-Protocol.h>

@class NCNotificationLongLookView, NSURL, UITouch;

@protocol NCNotificationLongLookViewDelegate <PLExpandedPlatterViewDelegate>
- (BOOL)notificationLongLookView:(NCNotificationLongLookView *)arg1 tapGestureRecognizerShouldReceiveTouch:(UITouch *)arg2;
- (void)notificationLongLookView:(NCNotificationLongLookView *)arg1 willInteractWithURL:(NSURL *)arg2;
@end

