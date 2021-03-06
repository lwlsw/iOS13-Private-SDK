//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSDate, NSError, TVPSecureKeyDeliveryCoordinator, TVPSecureKeyRequest;

@protocol TVPSecureKeyDeliveryCoordinatorDelegate
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 didReceiveUpdatedRentalExpirationDate:(NSDate *)arg2;
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 willFailWithError:(NSError *)arg2;
- (void)secureKeyDeliveryCoordinatorWillSucceed:(TVPSecureKeyDeliveryCoordinator *)arg1;

@optional
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 didReceiveUpdatedRentalExpirationDate:(NSDate *)arg2 playbackStartDate:(NSDate *)arg3;
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 didReceiveUpdatedRentalPlaybackStartDate:(NSDate *)arg2;
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 didReceiveOfflineKeyData:(NSData *)arg2 forKeyRequest:(TVPSecureKeyRequest *)arg3;
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 willFailWithError:(NSError *)arg2 forKeyRequest:(TVPSecureKeyRequest *)arg3;
- (void)secureKeyDeliveryCoordinatorWillSucceed:(TVPSecureKeyDeliveryCoordinator *)arg1 forKeyRequest:(TVPSecureKeyRequest *)arg2;
@end

