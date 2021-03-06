//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FTServices/FTMessageDelivery.h>

#import <FTServices/FTMessageQueueDelegate-Protocol.h>

@class IDSServerBag;
@protocol FTMessageDeliveryHTTPMobileNetworkManager, FTMessageDeliveryRemoteURLConnection, FTMessageDeliveryRemoteURLConnectionFactory;

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate>
{
    id <FTMessageDeliveryRemoteURLConnectionFactory> _remoteConnectionFactory;
    id <FTMessageDeliveryRemoteURLConnection> _remoteConnection;
    id <FTMessageDeliveryHTTPMobileNetworkManager> _mobileNetworkManager;
    BOOL _pendingRetryAfterAirplaneMode;
    double _retryTimeAfterAirplaneMode;
    id /* CDUnknownBlockType */ _retryBackoffProvider;
    IDSServerBag *_idsServerBag;
    IDSServerBag *_iMessageServerBag;
}

// - (void).cxx_destruct;
- (void)networkStateChanged;
- (void)_serverBagLoaded:(id)arg1;
- (BOOL)sendMessageAtTopOfTheQueue:(id)arg1;
- (BOOL)sendMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (BOOL)_tryRetryMessageWithTimeInterval:(double)arg1;
- (BOOL)busy;
- (void)_cleanupURLConnection;
- (void)_dequeueIfNeeded;
- (BOOL)_sendMessageAsynchronously:(id)arg1 error:(id )arg2;
- (void)invalidate;
- (void)_clearRetryTimer;
- (void)_informDelegatesOfMessage:(id)arg1 result:(id)arg2 resultCode:(long long)arg3 error:(id)arg4;
- (void)_notifyDelegateAboutError:(id)arg1;
- (void)_updateWiFiAssertions;
- (id)_processResultData:(id)arg1 forMessage:(id)arg2 error:(id )arg3;
- (void)_urlRequestWithURL:(id)arg1 andData:(id)arg2 message:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithIDSServerBag:(id)arg1 iMessageServerBag:(id)arg2 remoteConnectionFactory:(id)arg3 mobileNetworkManager:(id)arg4 retryBackoffProvider:(CDUnknownBlockType)arg5;
- (id)init;

@end

