//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMPeopleSuggestionsDataSourceManager.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableOrderedSet, PHAssetCollection, PXCMMPhotoKitPeopleSuggestionsDataSourceState, PXUpdater;

@interface PXCMMPhotoKitPeopleSuggestionsDataSourceManager : PXCMMPeopleSuggestionsDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    BOOL _isPrefetching;
    BOOL _hasCreatedInitialDataSource;
    BOOL _needsDeferredLoading;
    BOOL _hasStartedLoadingFinalDataSource;
    BOOL _hasFinishedLoadingFinalDataSource;
    PXCMMPhotoKitPeopleSuggestionsDataSourceState *__state;
    NSMutableOrderedSet *__remainingPeopleToFetch;
    PHAssetCollection *_assetCollection;
    PXUpdater *_updater;
}

+ (id)photosGraphPeopleSuggestionsDataSourceManagerWithAssetCollection:(id)arg1;
+ (id)mockDataSourceManagerFromPeopleInPhotosInAssetCollection:(id)arg1;
+ (id)sharedWorkerQueue;
@property(nonatomic) BOOL hasFinishedLoadingFinalDataSource; // @synthesize hasFinishedLoadingFinalDataSource=_hasFinishedLoadingFinalDataSource;
@property(nonatomic) BOOL hasStartedLoadingFinalDataSource; // @synthesize hasStartedLoadingFinalDataSource=_hasStartedLoadingFinalDataSource;
@property(retain, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(retain, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property(retain) NSMutableOrderedSet *_remainingPeopleToFetch; // @synthesize _remainingPeopleToFetch=__remainingPeopleToFetch;
@property(retain, nonatomic) PXCMMPhotoKitPeopleSuggestionsDataSourceState *_state; // @synthesize _state=__state;
// - (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;
- (void)_workerQueue_fetchRemainingPeopleInBatches;
- (void)startPrefetchingIfNeeded;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (id)createInitialDataSource;
- (id)people;
- (void)_handleFinishedLoadingFinalDataSourceFetchResult:(id)arg1;
- (void)_loadFinalDataSource;
- (BOOL)isLoading;
- (void)cancelLoading;
- (void)boostLoading;
- (void)startLoading;
- (id)_initWithAssetCollection:(id)arg1;
- (id)initWithPeopleFetchResult:(id)arg1;

@end

