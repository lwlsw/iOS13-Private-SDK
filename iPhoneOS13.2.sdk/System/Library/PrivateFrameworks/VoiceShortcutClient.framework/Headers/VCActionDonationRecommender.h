//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCActionDonationRecommender : NSObject
{
}

+ (id)disabledSpotlightApps;
+ (id)getDonationsFromActionResponse:(id)arg1;
+ (id)filterDonationsForTitleLength:(id)arg1;
+ (id)filteredActionDonations:(id)arg1 byApplicationAppIdentifier:(id)arg2;
+ (BOOL)actionDonation:(id)arg1 matchesQuery:(id)arg2;
+ (id)donationsByRemovingDuplicatesFromDonations:(id)arg1 query:(id)arg2 excludingAppIdentifiers:(id)arg3 includingSingleDonationPerApp:(BOOL)arg4;
+ (void)fetchPredictedDonationsWithLimit:(NSUInteger)arg1 applicationBundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)fetchRecentDonationsWithLimit:(NSUInteger)arg1 applicationBundleIdentifier:(id)arg2 filteringForTopLevel:(BOOL)arg3 filteringForIsEligibleForPrediction:(BOOL)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (void)fetchSuggestedDonationsForApplicationBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchSuggestedDonationsForAllAppsWithLimit:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchRecommendedDonationsByAppIdentifierWithLimit:(NSUInteger)arg1 query:(id)arg2 filteringForIsEligibleForPrediction:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 limit:(NSUInteger)arg2 query:(id)arg3 filteringForIsEligibleForPrediction:(BOOL)arg4 filteringActiveShortcuts:(BOOL)arg5 actionDonationCategory:(NSUInteger)arg6 completionHandler:(CDUnknownBlockType)arg7;
+ (void)fetchRecommendedDonationsForAppPredictionsWithLimit:(NSUInteger)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 limit:(NSUInteger)arg2 query:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)initialize;

@end

