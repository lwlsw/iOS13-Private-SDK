//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVSkipToNextButtonManager-Protocol.h>
#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class NSMutableSet;
@protocol SVVideoQueueObserving, SVVideoQueueProviding, SVVideoSkipLockObserverFactory, SVVideoSkipLockObserving, SVVideoViewControllerProviding;

@interface SVSkipToNextButtonManager : NSObject <SVVideoTransitionObserver, SVSkipToNextButtonManager>
{
    NSMutableSet *_controls;
    id <SVVideoSkipLockObserverFactory> _skipLockObserverFactory;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
    id <SVVideoQueueProviding> _queueProvider;
    id <SVVideoQueueObserving> _queueObserver;
    id <SVVideoSkipLockObserving> _skipLockObserver;
}

@property(retain, nonatomic) id <SVVideoSkipLockObserving> skipLockObserver; // @synthesize skipLockObserver=_skipLockObserver;
@property(readonly, nonatomic) id <SVVideoQueueObserving> queueObserver; // @synthesize queueObserver=_queueObserver;
@property(readonly, nonatomic) id <SVVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
@property(readonly, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
@property(readonly, nonatomic) id <SVVideoSkipLockObserverFactory> skipLockObserverFactory; // @synthesize skipLockObserverFactory=_skipLockObserverFactory;
@property(readonly, nonatomic) NSMutableSet *controls; // @synthesize controls=_controls;
// - (void).cxx_destruct;
- (void)conditionsChanged;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)addControl:(id)arg1;
- (id)initWithSkipLockObserverFactory:(id)arg1 videoViewControllerProvider:(id)arg2 queueProvider:(id)arg3 queueObserver:(id)arg4;

@end

