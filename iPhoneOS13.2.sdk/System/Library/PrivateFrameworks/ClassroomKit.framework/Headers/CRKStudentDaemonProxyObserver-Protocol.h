//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CRKStudentDaemonProxy, NSDictionary, NSString;

@protocol CRKStudentDaemonProxyObserver <NSObject>

@optional
- (void)daemonProxy:(CRKStudentDaemonProxy *)arg1 didReceiveNotificationWithName:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)daemonProxyDidDisconnect:(CRKStudentDaemonProxy *)arg1;
- (void)daemonProxyDidConnect:(CRKStudentDaemonProxy *)arg1;
@end

