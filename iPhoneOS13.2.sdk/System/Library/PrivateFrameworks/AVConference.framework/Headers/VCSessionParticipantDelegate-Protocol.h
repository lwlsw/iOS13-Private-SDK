//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, NSString, VCSessionParticipant;

@protocol VCSessionParticipantDelegate <NSObject>
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 spatialAudioSourceIDDidChange:(NSUInteger)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didDetectError:(NSError *)arg2;
- (void)vcSessionParticipantDidMediaDecryptionTimeOut:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantDidChangeReceivingStreams:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantDidChangeSendingStreams:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didRequestVideoRedundancy:(BOOL)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
- (void)vcSessionParticipantDidChangeActualNetworkBitrateAudio:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipantDidChangeActualNetworkBitrateVideo:(VCSessionParticipant *)arg1;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 didChangeProminence:(unsigned char)arg2 description:(NSString *)arg3;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteVideoPausedDidChange:(BOOL)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteAudioPausedDidChange:(BOOL)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 videoPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 audioPaused:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteVideoEnabledDidChange:(BOOL)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 remoteAudioEnabledDidChange:(BOOL)arg2;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 videoEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(NSError *)arg4;
- (void)vcSessionParticipant:(VCSessionParticipant *)arg1 audioEnabled:(BOOL)arg2 didSucceed:(BOOL)arg3 error:(NSError *)arg4;
@end

