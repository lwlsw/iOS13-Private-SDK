//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPQuickTypeServantProtocol-Protocol.h>

@class NSCache, PPLocalContactStore, _PASLock;
@protocol OS_dispatch_semaphore;

@interface PPQuickTypeContactsServant : NSObject <PPQuickTypeServantProtocol>
{
    PPLocalContactStore *_localContactStore;
    _PASLock *_meCardCacheLock;
    _PASLock *_meContactDataLock;
    NSCache *_meQuickTypeItemCache;
    NSCache *_cachedNameLookups;
    NSObject<OS_dispatch_semaphore> *_initializationComplete;
}

+ (id)_supportedPeopleSemanticTypes;
- (id)_updateMeCardFromSource;
- (id)_loadMeCard;
- (id)_selfContactQueryqueryFromSemanticTagquery:(id)arg1;
- (_Bool)_isSemanticTagEligible:(unsigned char)arg1;
- (id)_lookupPeopleWithNamePrefix:(id)arg1 recipients:(id)arg2 explanationSet:(id)arg3 justPreloadCache:(_Bool)arg4;
- (id)_lookupScoredPeopleWithNamePrefix:(id)arg1 recipients:(id)arg2 explanationSet:(id)arg3 justPreloadCache:(_Bool)arg4;
- (id)_predictMeCardDetailForQuery:(id)arg1 limit:(unsigned long long)arg2 fromSemanticTextField:(_Bool)arg3 explanationSet:(id)arg4;
- (id)_predictMeCardDetailForQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (id)_mePredictionCacheKeyForQuery:(id)arg1;
- (_Bool)_isMeCardQuery:(id)arg1;
- (id)_predictionForPeopleQuery:(id)arg1 fromEligibleSemanticTextField:(_Bool)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4;
- (id)_applySmartLimitingToCandidates:(id)arg1 clientLimit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (void)_preloadMeCardAndItemCacheWithMeContact:(id)arg1;
- (id)_scoredMeContactWithMeContact:(id)arg1;
- (void)_registerForNotifications;
- (void)setCachedNameLookup:(id)arg1;
- (void)_warmUpFormatters;
- (id)initWithOptions:(unsigned char)arg1;
- (id)init;
- (void)clearCaches;

@end
