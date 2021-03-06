//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol FCBundleSubscriptionProviderType, FCChannelProviding, FCPurchaseProviderType;

@protocol FCPaidAccessCheckerType
@property(nonatomic, readonly) id <FCPurchaseProviderType> purchaseProvider;
@property(nonatomic, readonly) id <FCBundleSubscriptionProviderType> bundleSubscriptionProvider;
- (void)prepareForUseWithCompletion:(void (^)(void))arg1;
- (BOOL)isPreparedForUse;
- (BOOL)canGetBundleSubscriptionToChannel:(id <FCChannelProviding>)arg1;
- (BOOL)canGetSubscriptionToChannel:(id <FCChannelProviding>)arg1;
- (BOOL)canGetAccessToItemPaid:(BOOL)arg1 bundlePaid:(BOOL)arg2 channel:(id <FCChannelProviding>)arg3;
@end

