//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoSkipHandling-Protocol.h>

@protocol SVVideoQueueProviding, SVVideoViewControllerProviding, SVVideoVisiblePercentageManager, SVVisibilityReporting;

@interface SVPlaylistSkipHandler : NSObject <SVVideoSkipHandling>
{
    id <SVVideoQueueProviding> _queueProvider;
    id <SVVisibilityReporting> _visiblityReporter;
    id <SVVideoVisiblePercentageManager> _visiblePercentageManager;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
}

@property(readonly, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
@property(readonly, nonatomic) id <SVVideoVisiblePercentageManager> visiblePercentageManager; // @synthesize visiblePercentageManager=_visiblePercentageManager;
@property(readonly, nonatomic) __weak id <SVVisibilityReporting> visiblityReporter; // @synthesize visiblityReporter=_visiblityReporter;
@property(readonly, nonatomic) id <SVVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
// - (void).cxx_destruct;
- (long long)contentTransitionTypeForVideo:(id)arg1;
- (void)skipToVideo:(id)arg1 animated:(BOOL)arg2;
- (id)initWithQueueProvider:(id)arg1 visibiltyReporter:(id)arg2 visiblePercentageManager:(id)arg3 videoViewControllerProvider:(id)arg4;

@end

