//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BRCAppLibrary, BRCNotificationPipe;

@protocol BRCNotificationPipeDelegate <NSObject>
- (void)notificationPipe:(BRCNotificationPipe *)arg1 didObserveAppLibrary:(BRCAppLibrary *)arg2;
- (void)notificationPipe:(BRCNotificationPipe *)arg1 willObserveAppLibrary:(BRCAppLibrary *)arg2;
@end

