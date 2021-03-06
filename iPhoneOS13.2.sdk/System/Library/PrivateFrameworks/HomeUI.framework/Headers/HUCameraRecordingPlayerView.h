//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVPlayer, AVPlayerLayer, UIProgressView;

@interface HUCameraRecordingPlayerView : UIView
{
    AVPlayer *_player;
    UIProgressView *_progressView;
}

+ (Class)layerClass;
@property(readonly, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
// - (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1 displayingProgressView:(BOOL)arg2;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;

@end

