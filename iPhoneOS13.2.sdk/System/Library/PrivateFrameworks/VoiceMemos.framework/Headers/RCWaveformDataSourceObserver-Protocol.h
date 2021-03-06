//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class RCWaveformDataSource, RCWaveformSegment;

@protocol RCWaveformDataSourceObserver <NSObject>
- (void)waveformDataSource:(RCWaveformDataSource *)arg1 didLoadWaveformSegment:(RCWaveformSegment *)arg2;
- (void)waveformDataSourceDidFinishLoading:(RCWaveformDataSource *)arg1;

@optional
- (void)waveformDataSourceRequiresUpdate:(RCWaveformDataSource *)arg1;
@end

