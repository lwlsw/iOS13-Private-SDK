//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSError;

@protocol CSVTUIAudioSessionDelegate <NSObject>
- (void)audioSessionErrorDidOccur:(NSError *)arg1;
- (void)audioSessionUnsupportedAudioRoute;
- (void)audioSessionRecordBufferAvailable:(NSData *)arg1;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionDidStartRecording:(BOOL)arg1 error:(NSError *)arg2;
@end

