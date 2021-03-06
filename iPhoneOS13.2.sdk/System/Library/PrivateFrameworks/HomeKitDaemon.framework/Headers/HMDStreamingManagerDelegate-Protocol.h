//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HMDStreamingManager, NSError, NSNumber;

@protocol HMDStreamingManagerDelegate <NSObject>
- (void)streamingManagerDidUpdateConfiguration:(HMDStreamingManager *)arg1;
- (void)streamingManagerDidNetworkDeteriorate:(HMDStreamingManager *)arg1;
- (void)streamingManagerDidNetworkImprove:(HMDStreamingManager *)arg1;
- (void)streamingManagerDidStopStream:(HMDStreamingManager *)arg1 error:(NSError *)arg2;
- (void)streamingManagerDidReceiveFirstFrame:(HMDStreamingManager *)arg1 audioStreamSetting:(NSUInteger)arg2 aspectRatio:(NSNumber *)arg3 slotIdentifier:(NSNumber *)arg4;
- (void)streamingManager:(HMDStreamingManager *)arg1 didStartStream:(NSError *)arg2 slotIdentifier:(NSNumber *)arg3;

@optional
- (void)streamingManager:(HMDStreamingManager *)arg1 didStartRelay:(NSError *)arg2;
@end

