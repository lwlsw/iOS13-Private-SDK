//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IMAudioPlayer;

@protocol IMAudioPlayerDelegate <NSObject>
- (void)audioPlayerCurrentTimeDidChange:(IMAudioPlayer *)arg1;

@optional
- (void)audioPlayerDidPrepareAudioToPlay:(IMAudioPlayer *)arg1 successfully:(BOOL)arg2;
@end

