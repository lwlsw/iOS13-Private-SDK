//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/SUAutoInstallFailureNotification-Protocol.h>

@interface SUAutoInstallFailureNotification : NSObject <SUAutoInstallFailureNotification>
{
//    struct __CFUserNotification _notification;
}

- (void)dismissNotification;
- (void)postNotificationForError:(id)arg1 withUpdateBuildNumber:(id)arg2;
- (void)postNotificationForError:(id)arg1;
- (void)dealloc;
- (id)init;

@end

