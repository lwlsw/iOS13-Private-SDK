//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, AVPlayerItem, NSString, PLMoviePlayerView, PLTVOutWindow;
@protocol PLMoviePlayerControllerDelegate;

@interface PLMoviePlayerController : NSObject
{
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    PLMoviePlayerView *_view;
    PLTVOutWindow *_tvOutWindow;
    BOOL _hasPendingTime;
    double _pendingTime;
    NSUInteger _pendingTimeSnapOption;
    BOOL _forceUpdateCurrentTime;
    BOOL _isExternalPlayback;
    BOOL _exited;
    double _lastSetCurrentTimeTime;
    BOOL _isSeeking;
    NSUInteger _backgroundTaskId;
    BOOL _audioSessionActive;
    NSString *_originalAudioCategory;
    BOOL _TVOutEnabled;
    BOOL _forceDisableTVOut;
    BOOL _isPreparedForPlayback;
    BOOL _isActiveController;
    id <PLMoviePlayerControllerDelegate> _delegate;
    NSUInteger _bufferingState;
    NSUInteger _playbackState;
}

+ (BOOL)_isNetworkSupportedPath:(id)arg1;
+ (BOOL)_isStreamableAsset:(id)arg1;
+ (id)AVAssetURLWithPath:(id)arg1;
@property(nonatomic) BOOL isActiveController; // @synthesize isActiveController=_isActiveController;
@property(readonly, nonatomic) BOOL isPreparedForPlayback; // @synthesize isPreparedForPlayback=_isPreparedForPlayback;
@property(nonatomic, setter=_setForceDisableTVOut:) BOOL forceDisableTVOut; // @synthesize forceDisableTVOut=_forceDisableTVOut;
@property(nonatomic) BOOL TVOutEnabled; // @synthesize TVOutEnabled=_TVOutEnabled;
@property(readonly, nonatomic) NSUInteger playbackState; // @synthesize playbackState=_playbackState;
@property(readonly, nonatomic) NSUInteger bufferingState; // @synthesize bufferingState=_bufferingState;
@property(readonly, retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(readonly, retain, nonatomic) PLMoviePlayerView *view; // @synthesize view=_view;
@property(nonatomic) id <PLMoviePlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_serverConnectionDidDie:(id)arg1;
- (void)_exitPlayer:(int)arg1;
- (void)_playbackFailedWithError:(id)arg1;
- (void)_playerItemFailedToPlayToEnd:(id)arg1;
- (void)_playerItemFailedToPlayToEndNotification:(id)arg1;
- (void)_playerItemDidReachEndNotification:(id)arg1;
- (void)willResignAsActiveController;
- (void)didBecomeActiveController;
- (void)requestToResignAsActiveController;
- (void)requestToBecomeActiveController;
- (void)_updateBackgroundViewInformation;
- (long long)externalPlaybackType;
- (BOOL)isExternalPlayback;
- (void)_updateDisableAirPlayMirroringDuringPlayback;
- (BOOL)_allowsExternalPlayback;
- (void)_tearDownTVOutWindow;
- (void)_setupTVOutWindow;
- (void)_displayVideoView;
- (void)_restoreTVOutVideoIfNecessary;
- (void)_updateTVOutEnabled;
- (void)tearDownTVOutWindow;
- (BOOL)videoOutActive;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_willResignNotification:(id)arg1;
- (void)_willBeginSuspendAnimationNotification:(id)arg1;
- (void)_willSuspendNotification:(id)arg1;
- (void)_pausePlaybackForNotification;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)_setPlaybackState:(NSUInteger)arg1;
- (void)_setBufferingState:(NSUInteger)arg1;
- (void)_streamUnlikelyToKeepUp;
- (void)_streamRanDry;
- (void)_streamLikelyToKeepUp;
- (void)_streamBufferFull;
@property(nonatomic) double currentTime;
@property(readonly, nonatomic) float playbackRate;
@property(readonly, nonatomic) double duration;
- (void)_delayedUpdateFromPendingTime;
- (void)_updateFromPendingTime;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(NSUInteger)arg2 forceUpdate:(BOOL)arg3;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(NSUInteger)arg2;
- (void)resetPlayer;
- (void)stop;
- (void)pauseDueToInsufficientData;
- (void)pause;
- (void)playDueToEnoughData;
- (void)playFromBeginning;
- (void)play;
- (void)_playerRateDidChange:(id)arg1;
- (void)_dispatchOnMainThreadWithBlock:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)_didLoadValueOfKey:(id)arg1 forAsset:(id)arg2;
- (void)_loadAsset:(id)arg1;
- (void)_setPlayerItem:(id)arg1;
- (void)setPlayerItem:(id)arg1 startTime:(double)arg2;
- (id)_asset;
- (void)_tearDownPlayer;
- (void)_setupPlayer;
- (id)_playerKeysToObserve;
- (void)_unregisterForNotifications;
- (void)_registerForNotifications;
- (void)dealloc;
- (id)init;

@end

