//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAssetManagerDelegate-Protocol.h>
#import <CoreSpeech/CSEndpointAnalyzerImpl-Protocol.h>
#import <CoreSpeech/CSFirstUnlockMonitorDelegate-Protocol.h>
#import <CoreSpeech/EARCaesuraSilencePosteriorGeneratorDelegate-Protocol.h>

@class CSAsset, CSServerEndpointFeatures, EARCaesuraSilencePosteriorGenerator, EARClientSilenceFeatures, NSDate, NSDictionary, NSMutableArray, NSString, _EAREndpointer;
@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, OS_dispatch_queue;

@interface CSHybridEndpointAnalyzer : NSObject <CSAssetManagerDelegate, CSFirstUnlockMonitorDelegate, EARCaesuraSilencePosteriorGeneratorDelegate, CSEndpointAnalyzerImpl>
{
    BOOL _saveSamplesSeenInReset;
    BOOL _canProcessCurrentRequest;
    BOOL _didAddAudio;
    BOOL _didReceiveServerFeatures;
    BOOL _useDefaultServerFeaturesOnClientLag;
    BOOL _didCommunicateEndpoint;
    BOOL _didTimestampFirstAudioPacket;
    BOOL _recordingDidStop;
    BOOL _didDetectSpeech;
    id <CSEndpointAnalyzerDelegate> _delegate;
    id <CSEndpointAnalyzerImplDelegate> _implDelegate;
    NSUInteger _activeChannel;
    long long _endpointStyle;
    long long _endpointMode;
    double _startWaitTime;
    double _endWaitTime;
    double _interspeechWaitTime;
    double _delay;
    double _automaticEndpointingSuspensionEndTime;
    double _minimumDurationForEndpointer;
    CSAsset *_currentAsset;
    NSObject<OS_dispatch_queue> *_apQueue;
    NSUInteger _numSamplesProcessed;
    EARCaesuraSilencePosteriorGenerator *_caesuraSPG;
    EARClientSilenceFeatures *_clientSilenceFeaturesAtEndpoint;
    _EAREndpointer *_hybridClassifier;
    NSString *_endpointerModelVersion;
    NSObject<OS_dispatch_queue> *_serverFeaturesQueue;
    CSServerEndpointFeatures *_lastKnownServerEPFeatures;
    NSMutableArray *_serverFeatureLatencies;
    double _serverFeaturesWarmupLatency;
    NSDate *_lastServerFeatureTimestamp;
    double _clientLagThresholdMs;
    double _clampedSFLatencyMsForClientLag;
    NSObject<OS_dispatch_queue> *_hybridClassifierQueue;
    double _lastReportedEndpointTimeMs;
    NSObject<OS_dispatch_queue> *_stateSerialQueue;
    NSUInteger _currentRequestSampleRate;
    double _vtExtraAudioAtStartInMs;
    NSUInteger _vtEndInSampleCount;
    double _hepAudioOriginInMs;
    NSDictionary *_recordContext;
    NSDate *_firstAudioPacketTimestamp;
    NSObject<OS_dispatch_queue> *_silencePosteriorGeneratorQueue;
    double _elapsedTimeWithNoSpeech;
    double _trailingSilenceDurationAtEndpoint;
}

@property(nonatomic) double trailingSilenceDurationAtEndpoint; // @synthesize trailingSilenceDurationAtEndpoint=_trailingSilenceDurationAtEndpoint;
@property(nonatomic) double elapsedTimeWithNoSpeech; // @synthesize elapsedTimeWithNoSpeech=_elapsedTimeWithNoSpeech;
@property(nonatomic) BOOL didDetectSpeech; // @synthesize didDetectSpeech=_didDetectSpeech;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *silencePosteriorGeneratorQueue; // @synthesize silencePosteriorGeneratorQueue=_silencePosteriorGeneratorQueue;
@property(nonatomic) BOOL recordingDidStop; // @synthesize recordingDidStop=_recordingDidStop;
@property(nonatomic) BOOL didTimestampFirstAudioPacket; // @synthesize didTimestampFirstAudioPacket=_didTimestampFirstAudioPacket;
@property(retain, nonatomic) NSDate *firstAudioPacketTimestamp; // @synthesize firstAudioPacketTimestamp=_firstAudioPacketTimestamp;
@property(retain, nonatomic) NSDictionary *recordContext; // @synthesize recordContext=_recordContext;
@property(nonatomic) double hepAudioOriginInMs; // @synthesize hepAudioOriginInMs=_hepAudioOriginInMs;
@property(nonatomic) NSUInteger vtEndInSampleCount; // @synthesize vtEndInSampleCount=_vtEndInSampleCount;
@property(nonatomic) double vtExtraAudioAtStartInMs; // @synthesize vtExtraAudioAtStartInMs=_vtExtraAudioAtStartInMs;
@property(nonatomic) NSUInteger currentRequestSampleRate; // @synthesize currentRequestSampleRate=_currentRequestSampleRate;
@property(nonatomic) BOOL didCommunicateEndpoint; // @synthesize didCommunicateEndpoint=_didCommunicateEndpoint;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *stateSerialQueue; // @synthesize stateSerialQueue=_stateSerialQueue;
@property(nonatomic) double lastReportedEndpointTimeMs; // @synthesize lastReportedEndpointTimeMs=_lastReportedEndpointTimeMs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *hybridClassifierQueue; // @synthesize hybridClassifierQueue=_hybridClassifierQueue;
@property(nonatomic) BOOL useDefaultServerFeaturesOnClientLag; // @synthesize useDefaultServerFeaturesOnClientLag=_useDefaultServerFeaturesOnClientLag;
@property(nonatomic) double clampedSFLatencyMsForClientLag; // @synthesize clampedSFLatencyMsForClientLag=_clampedSFLatencyMsForClientLag;
@property(nonatomic) double clientLagThresholdMs; // @synthesize clientLagThresholdMs=_clientLagThresholdMs;
@property(nonatomic) BOOL didReceiveServerFeatures; // @synthesize didReceiveServerFeatures=_didReceiveServerFeatures;
@property(retain, nonatomic) NSDate *lastServerFeatureTimestamp; // @synthesize lastServerFeatureTimestamp=_lastServerFeatureTimestamp;
@property(nonatomic) double serverFeaturesWarmupLatency; // @synthesize serverFeaturesWarmupLatency=_serverFeaturesWarmupLatency;
@property(retain, nonatomic) NSMutableArray *serverFeatureLatencies; // @synthesize serverFeatureLatencies=_serverFeatureLatencies;
@property(retain, nonatomic) CSServerEndpointFeatures *lastKnownServerEPFeatures; // @synthesize lastKnownServerEPFeatures=_lastKnownServerEPFeatures;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverFeaturesQueue; // @synthesize serverFeaturesQueue=_serverFeaturesQueue;
@property(retain, nonatomic) NSString *endpointerModelVersion; // @synthesize endpointerModelVersion=_endpointerModelVersion;
@property(retain, nonatomic) _EAREndpointer *hybridClassifier; // @synthesize hybridClassifier=_hybridClassifier;
@property(retain, nonatomic) EARClientSilenceFeatures *clientSilenceFeaturesAtEndpoint; // @synthesize clientSilenceFeaturesAtEndpoint=_clientSilenceFeaturesAtEndpoint;
@property(retain, nonatomic) EARCaesuraSilencePosteriorGenerator *caesuraSPG; // @synthesize caesuraSPG=_caesuraSPG;
@property(nonatomic) BOOL didAddAudio; // @synthesize didAddAudio=_didAddAudio;
@property(nonatomic) NSUInteger numSamplesProcessed; // @synthesize numSamplesProcessed=_numSamplesProcessed;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *apQueue; // @synthesize apQueue=_apQueue;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(nonatomic) BOOL canProcessCurrentRequest; // @synthesize canProcessCurrentRequest=_canProcessCurrentRequest;
@property(nonatomic) BOOL saveSamplesSeenInReset; // @synthesize saveSamplesSeenInReset=_saveSamplesSeenInReset;
@property(nonatomic) double minimumDurationForEndpointer; // @synthesize minimumDurationForEndpointer=_minimumDurationForEndpointer;
@property(nonatomic) double automaticEndpointingSuspensionEndTime; // @synthesize automaticEndpointingSuspensionEndTime=_automaticEndpointingSuspensionEndTime;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double interspeechWaitTime; // @synthesize interspeechWaitTime=_interspeechWaitTime;
@property(nonatomic) double endWaitTime; // @synthesize endWaitTime=_endWaitTime;
@property(nonatomic) double startWaitTime; // @synthesize startWaitTime=_startWaitTime;
@property(nonatomic) long long endpointMode; // @synthesize endpointMode=_endpointMode;
@property(nonatomic) long long endpointStyle; // @synthesize endpointStyle=_endpointStyle;
@property(nonatomic) NSUInteger activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) __weak id <CSEndpointAnalyzerImplDelegate> implDelegate; // @synthesize implDelegate=_implDelegate;
@property(nonatomic) __weak id <CSEndpointAnalyzerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (BOOL)_shouldUsePhaticWithRecordContext;
- (id)_getCSHybridEndpointerConfigForAsset:(id)arg1;
- (void)_updateAssetWithCurrentLanguage;
- (void)_updateAssetWithLanguage:(id)arg1;
- (void)CSFirstUnlockMonitor:(id)arg1 didReceiveFirstUnlock:(BOOL)arg2;
- (void)CSAssetManagerDidDownloadNewAsset:(id)arg1;
- (void)CSLanguageCodeUpdateMonitor:(id)arg1 didReceiveLanguageCodeChanged:(id)arg2;
@property(readonly, nonatomic) double lastStartOfVoiceActivityTime;
@property(readonly, nonatomic) double lastEndOfVoiceActivityTime;
- (void)reset;
- (void)_readClientLagParametersFromHEPAsset:(id)arg1;
- (void)resetForNewRequestWithSampleRate:(NSUInteger)arg1 recordContext:(id)arg2 recordSettings:(id)arg3;
- (void)stopEndpointer;
- (void)recordingStoppedForReason:(long long)arg1;
- (void)terminateProcessing;
- (void)preheat;
- (void)handleVoiceTriggerWithActivationInfo:(id)arg1;
- (id)serverFeaturesLatencyDistributionDictionary;
- (void)clientSilenceFeaturesAvailable:(id)arg1;
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(CDUnknownBlockType)arg2;
- (void)processServerEndpointFeatures:(id)arg1;
- (void)updateEndpointerDelayedTrigger:(BOOL)arg1;
- (void)updateEndpointerThreshold:(float)arg1;
- (void)processAudioSamplesAsynchronously:(id)arg1;
- (id)init;

@end

