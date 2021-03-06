//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeSharing/HSCloudAvailability-Protocol.h>

@class ICCloudClient, ICConnectionConfiguration;

@interface HSCloudClient : NSObject <HSCloudAvailability>
{
    BOOL _active;
    ICConnectionConfiguration *_configuration;
    NSUInteger _daemonConfiguration;
    long long _preferredVideoQuality;
    ICCloudClient *_icCloudClient;
    id /* CDUnknownBlockType */ _updateInProgressChangedHandler;
    id /* CDUnknownBlockType */ _updateSagaInProgressChangedHandler;
    id /* CDUnknownBlockType */ _updateJaliscoInProgressChangedHandler;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ updateJaliscoInProgressChangedHandler; // @synthesize updateJaliscoInProgressChangedHandler=_updateJaliscoInProgressChangedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ updateSagaInProgressChangedHandler; // @synthesize updateSagaInProgressChangedHandler=_updateSagaInProgressChangedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ updateInProgressChangedHandler; // @synthesize updateInProgressChangedHandler=_updateInProgressChangedHandler;
// - (void).cxx_destruct;
- (id)_ICConnectionConfigurationFromHSConnectionConfiguration:(id)arg1;
- (id)_ICCloudItemIDListFromHSCloudItemIDList:(id)arg1;
- (void)_serverJaliscoUpdateInProgressDidChange;
- (void)_serverSagaUpdateInProgressDidChange;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (BOOL)isCellularDataRestricted;
- (BOOL)canShowCloudVideo;
- (BOOL)canShowCloudMusic;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateArtistHeroImages;
- (void)setAlbumProperties:(id)arg1 forAlbumPersistentID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)uploadCloudPlaylistProperties;
- (void)uploadCloudItemProperties;
- (void)uploadItemProperties;
- (void)setItemProperties:(id)arg1 forSagaID:(NSUInteger)arg2;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(NSUInteger)arg2;
- (BOOL)canSetItemProperty:(id)arg1;
- (void)setPreferredVideoQuality:(long long)arg1;
- (void)setDaemonConfiguration:(NSUInteger)arg1;
- (void)resignActive;
- (void)resetConfiguration:(id)arg1;
- (void)loadJaliscoUpdateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadSagaUpdateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadIsJaliscoUpdateInProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadIsSagaUpdateInProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadUpdateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadGeniusItemsForSagaID:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForSubscriptionContainerPersistentID:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadScreenshotInfoForSubscriptionPersistentID:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForSubscriptionItemPersistentID:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadScreenshotInfoForSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadScreenshotInfoForSagaID:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForContainerSagaID:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForSagaID:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadScreenshotInfoForPurchaseHistoryID:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForPurchaseHistoryID:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1;
- (void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1;
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1;
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1;
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1;
- (void)deprioritizeContainerArtworkForSagaID:(NSUInteger)arg1;
- (void)deprioritizeScreenshotForSagaID:(NSUInteger)arg1;
- (void)deprioritizeItemArtworkForSagaID:(NSUInteger)arg1;
- (void)deprioritizeScreenshotForPurchaseHistoryID:(NSUInteger)arg1;
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(NSUInteger)arg1;
- (void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importSubscriptionContainerArtworkForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importSubscriptionScreenshotForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importSubscriptionItemArtworkForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importContainerArtworkForSagaID:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importScreenshotForSagaID:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importItemArtworkForSagaID:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importScreenshotForPurchaseHistoryID:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importItemArtworkForPurchaseHistoryID:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadLastKnownEnableICMLErrorStatusWithCompletionHander:(CDUnknownBlockType)arg1;
- (void)isAuthenticatedWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)isAuthenticatedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)disableJaliscoGeniusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelUpdateJaliscoGeniusDataInProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateJaliscoGeniusDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableJaliscoGeniusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadJaliscoGeniusCUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deauthenticateAndDisableActiveLockerAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deauthenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateSagaLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSagaLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateJaliscoLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)isMediaKindDisabledForJaliscoLibrary:(long long)arg1;
- (void)removeJaliscoLibraryWithCompletionHander:(CDUnknownBlockType)arg1;
- (void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)becomeActive;
- (void)authenticateAndStartInitialImport:(BOOL)arg1 mergeWithCloudLibrary:(BOOL)arg2 isExplicitUserAction:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)authenticateAndStartInitialImport:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)publishPlaylistWithSagaID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)canSetPlaylistProperty:(id)arg1;
- (void)sdk_createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 tracklist:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)cloudAddToPlaylistBehavior;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

