//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@class CPLRUDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MPCRadioArtworkDataSource : MPAbstractNetworkArtworkDataSource
{
    NSUInteger _backgroundCacheSize;
    NSUInteger _cacheSize;
    CPLRUDictionary *_cachedArtworkRepresentations;
    NSObject<OS_dispatch_queue> *_cachedArtworkRepresentationsAccessQueue;
    long long _resumeToForegroundCacheSize;
}

+ (id)sharedRadioArtworkDataSource;
// - (void).cxx_destruct;
- (void)_setCacheSize:(NSUInteger)arg1 preserveExisting:(BOOL)arg2;
- (void)_clearCache;
- (void)_cacheArtworkRepresentation:(id)arg1 forKey:(id)arg2;
- (void)_handleWillEnterForegroundNotification:(id)arg1;
- (void)_handleDidReceiveMemoryWarningNotification:(id)arg1;
- (void)_handleDidEnterBackgroundNotification:(id)arg1;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)requestForCatalog:(id)arg1 size:(CGSize)arg2;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (BOOL)areRepresentationsAvailableForCatalog:(id)arg1;
- (void)dealloc;
- (id)init;

@end

