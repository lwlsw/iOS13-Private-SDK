//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CSAudioDecoder, NSData;

@protocol CSAudioDecoderDelegate 
- (void)audioDecoderDidDecodePackets:(CSAudioDecoder *)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(NSData *)arg3 remoteVAD:(NSData *)arg4 timestamp:(unsigned long long)arg5 receivedNumChannels:(unsigned int)arg6;
@end
