//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMInvitationsDataSourceManager.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableOrderedSet, NSObject, PXCMMSharedAlbumsInvitationsDataSourceState;
@protocol OS_dispatch_queue;

@interface PXCMMSharedAlbumsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
    PXCMMSharedAlbumsInvitationsDataSourceState *__state;
    NSMutableOrderedSet *__remainingSharedAlbumObjectIDsToFetch;
}

+ (id)mockDataSourceManagerFromCMMDebugSharedAlbums;
@property(retain) NSMutableOrderedSet *_remainingSharedAlbumObjectIDsToFetch; // @synthesize _remainingSharedAlbumObjectIDsToFetch=__remainingSharedAlbumObjectIDsToFetch;
@property(retain, nonatomic) PXCMMSharedAlbumsInvitationsDataSourceState *_state; // @synthesize _state=__state;
// - (void).cxx_destruct;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3;
- (void)_workerQueue_fetchRemainingSharedAlbumsInBatches;
- (void)startLoadingIfNeeded;
- (id)_createSuggestionsDataSourceFromCurrentState;
- (id)createInitialDataSource;
- (id)sharedAlbums;
- (void)dealloc;
- (id)initWithAssetCollectionsFetchResult:(id)arg1;

@end

