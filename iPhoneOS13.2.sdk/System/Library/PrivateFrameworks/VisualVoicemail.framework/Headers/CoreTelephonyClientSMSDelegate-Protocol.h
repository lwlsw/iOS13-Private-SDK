//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CTMmsRegistrationFailureInfoType, CTXPCServiceSubscriptionContext, NSData, NSDictionary, NSString;

@protocol CoreTelephonyClientSMSDelegate <NSObject>

@optional
- (void)postSmscAddressAvailable:(CTXPCServiceSubscriptionContext *)arg1 smsc:(NSString *)arg2;
- (void)postSUPLInitNotification:(CTXPCServiceSubscriptionContext *)arg1 data:(NSData *)arg2;
- (void)postSUPLInitNotification:(CTXPCServiceSubscriptionContext *)arg1 body:(NSString *)arg2;
- (void)postMessageProgressNotification:(CTXPCServiceSubscriptionContext *)arg1 messageID:(long long)arg2 totalBytesSent:(long long)arg3 dataLength:(long long)arg4;
- (void)postMmsDataActivationFailed:(CTXPCServiceSubscriptionContext *)arg1 failureNotification:(CTMmsRegistrationFailureInfoType *)arg2;
- (void)postMMSMessageSent:(CTXPCServiceSubscriptionContext *)arg1 success:(BOOL)arg2 messageID:(long long)arg3 err1:(long long)arg4 err2:(long long)arg5;
- (void)postSMSMessageSent:(CTXPCServiceSubscriptionContext *)arg1 success:(BOOL)arg2 messageID:(long long)arg3 err1:(long long)arg4 err2:(long long)arg5;
- (void)mmsConfigurationChangedNotification:(CTXPCServiceSubscriptionContext *)arg1 changed:(BOOL)arg2;
- (void)mmsMessageReceivedDeferred:(CTXPCServiceSubscriptionContext *)arg1 msgID:(long long)arg2;
- (void)smsMessageReceivedDeferred:(CTXPCServiceSubscriptionContext *)arg1 msgID:(long long)arg2;
- (void)mmsMessageReceived:(CTXPCServiceSubscriptionContext *)arg1 msgID:(long long)arg2;
- (void)smsMessageReceived:(CTXPCServiceSubscriptionContext *)arg1 msgID:(long long)arg2;
- (void)smsMessageTestMessageReceived:(CTXPCServiceSubscriptionContext *)arg1 body:(NSString *)arg2 address:(NSString *)arg3;
- (void)smsMessageCellBroadcastReceived:(CTXPCServiceSubscriptionContext *)arg1 notificationDict:(NSDictionary *)arg2 additionalDict:(NSDictionary *)arg3;
- (void)smsMessageClass0Received:(CTXPCServiceSubscriptionContext *)arg1 body:(NSString *)arg2 address:(NSString *)arg3;
- (void)smsReadyStateChanged:(CTXPCServiceSubscriptionContext *)arg1 info:(BOOL)arg2;
@end

