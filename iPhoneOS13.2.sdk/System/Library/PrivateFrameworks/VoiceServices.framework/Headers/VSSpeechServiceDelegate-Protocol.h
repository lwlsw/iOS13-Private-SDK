//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSError, NSString, VSInstrumentMetrics, VSSpeechRequest;

@protocol VSSpeechServiceDelegate <NSObject>
- (oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(VSInstrumentMetrics *)arg1 error:(NSError *)arg2;
- (oneway void)presynthesizedAudioRequestDidStopAtEnd:(BOOL)arg1 error:(NSError *)arg2;
- (oneway void)presynthesizedAudioRequestDidStart;
- (oneway void)synthesisRequest:(VSSpeechRequest *)arg1 didFinishWithInstrumentMetrics:(VSInstrumentMetrics *)arg2 error:(NSError *)arg3;
- (oneway void)synthesisRequest:(VSSpeechRequest *)arg1 didReceiveTimingInfo:(NSArray *)arg2;
- (oneway void)speechRequestDidReceiveTimingInfo:(NSArray *)arg1;
- (oneway void)speechRequestSuccessWithInstrumentMetrics:(VSInstrumentMetrics *)arg1;
- (oneway void)speechRequestDidStopWithSuccess:(BOOL)arg1 phonemesSpoken:(NSString *)arg2 error:(NSError *)arg3;
- (oneway void)speechRequestMark:(long long)arg1 didStartForRange:(NSRange *)arg2;
- (oneway void)speechRequestDidContinue;
- (oneway void)speechRequestDidPause;
- (oneway void)speechRequestDidStart;
@end

