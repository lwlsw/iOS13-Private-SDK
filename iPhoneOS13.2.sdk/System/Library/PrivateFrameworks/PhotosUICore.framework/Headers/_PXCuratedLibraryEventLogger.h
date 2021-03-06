//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCuratedLibraryEventLogger-Protocol.h>

@class NSTimer, PXCuratedLibraryLayout, PXCuratedLibraryViewModel, PXUpdater;

@interface _PXCuratedLibraryEventLogger : PXObservable <PXCuratedLibraryEventLogger, PXChangeObserver>
{
    NSObject _sender;
    BOOL _loggedFirstTimeExperience;
    NSTimer *_slowScrollRegimeTimer;
    double _lastUserInteractionTime;
    float _analysisProgress;
    float _firstTimeExperienceAnalysisProgress;
    PXCuratedLibraryViewModel *_viewModel;
    PXCuratedLibraryLayout *_layout;
    PXUpdater *_updater;
    NSUInteger _userEventSource;
    long long _libraryItemsCount;
    long long _firstTimeExperienceLibraryItemsCount;
    id _lastViewedDominantModelObject;
}

@property(retain, nonatomic) id lastViewedDominantModelObject; // @synthesize lastViewedDominantModelObject=_lastViewedDominantModelObject;
@property(nonatomic) long long firstTimeExperienceLibraryItemsCount; // @synthesize firstTimeExperienceLibraryItemsCount=_firstTimeExperienceLibraryItemsCount;
@property(nonatomic) float firstTimeExperienceAnalysisProgress; // @synthesize firstTimeExperienceAnalysisProgress=_firstTimeExperienceAnalysisProgress;
@property(nonatomic) float analysisProgress; // @synthesize analysisProgress=_analysisProgress;
@property(nonatomic) long long libraryItemsCount; // @synthesize libraryItemsCount=_libraryItemsCount;
@property(nonatomic) NSUInteger userEventSource; // @synthesize userEventSource=_userEventSource;
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(readonly, nonatomic) PXCuratedLibraryLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // @synthesize viewModel=_viewModel;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_setNeedsUpdate;
- (void)didPerformChanges;
- (void)_logImpressionWithLastViewedDominantModelObject:(id)arg1 lastUserInteractionTime:(double)arg2;
- (void)_eventSenderDidChange;
- (void)_eventSenderDidDisappear:(NSObject )arg1;
- (void)_eventSenderWillAppear:(NSObject )arg1;
- (void)logAnalysisProgress:(float)arg1;
- (void)logLibraryItemsCount:(long long)arg1;
- (void)logViewControllerDidDisappear:(NSObject )arg1;
- (void)logViewControllerWillAppear:(NSObject )arg1;
- (void)_scheduleImpressionLogging;
- (void)_configureTimerForSlowScrollRegimeUpdatesIfNeeded;
- (void)_updateDominantModelObject;
- (void)_invalidateDominantModelObject;
- (BOOL)_isSettled;
- (void)_updateFirstTimeExperienceReadinessLogging;
- (void)_invalidateFirstTimeExperienceReadinessLogging;
- (void)_updateUserEventSource;
- (void)_invalidateUserEventSource;
- (id)userEventTracker;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 layout:(id)arg2;
- (id)init;

@end

