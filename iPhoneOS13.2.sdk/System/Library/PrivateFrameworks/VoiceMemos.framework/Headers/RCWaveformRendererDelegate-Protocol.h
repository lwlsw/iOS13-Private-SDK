//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class RCWaveformRenderer;
@protocol RCTimeController;

@protocol RCWaveformRendererDelegate <NSObject>
@property(nonatomic) double desiredTimeDeltaForVisibleTimeRange;
@property(readonly, nonatomic) id <RCTimeController> activeTimeController;
@property(nonatomic) double currentTime;
- (BOOL)isZooming;
- (double)duration;
- (void)waveformRenderer:(RCWaveformRenderer *)arg1 contentWidthDidChange:(double)arg2;
@end

