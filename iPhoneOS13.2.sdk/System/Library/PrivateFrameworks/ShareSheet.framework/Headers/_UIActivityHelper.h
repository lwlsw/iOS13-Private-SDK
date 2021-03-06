//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _UIActivityApplicationExtensionDiscovery;
@protocol _UIActivityHelperDelegate;

@interface _UIActivityHelper : NSObject
{
    BOOL _primed;
    id <_UIActivityHelperDelegate> _delegate;
    NSString *_sessionID;
    _UIActivityApplicationExtensionDiscovery *_applicationExtensionDiscovery;
    NSArray *_cachedBuiltinActivities;
    id /* CDUnknownBlockType */ _fetchShortcutsBlock;
}

+ (id)builtinActivityClasses;
@property(copy, nonatomic) id /* CDUnknownBlockType */ fetchShortcutsBlock; // @synthesize fetchShortcutsBlock=_fetchShortcutsBlock;
@property(nonatomic) BOOL primed; // @synthesize primed=_primed;
@property(readonly, nonatomic) NSArray *cachedBuiltinActivities; // @synthesize cachedBuiltinActivities=_cachedBuiltinActivities;
@property(retain, nonatomic) _UIActivityApplicationExtensionDiscovery *applicationExtensionDiscovery; // @synthesize applicationExtensionDiscovery=_applicationExtensionDiscovery;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) __weak id <_UIActivityHelperDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)_activitiesByDuetOrderingActivities:(id)arg1;
- (id)_activitiesByApplyingFavoriteOrderingToActivities:(id)arg1 favoriteActivityTypes:(id)arg2;
- (id)_activitiesByTypeOrderingActivities:(id)arg1 activityTypeOrdering:(id)arg2;
- (id)_activitiesByApplyingBeforeTypePinningToActivities:(id)arg1 activitiesToBeforeTypePin:(id)arg2;
- (id)_defaultSortOrderForOtherActivity:(id)arg1;
- (id)_defaultSortOrderForShortcutActivity:(id)arg1;
- (id)_defaultSortOrderForOpenInAppActivity:(id)arg1;
- (id)_defaultSortOrderForApplicationDefinedActivity:(id)arg1;
- (id)_defaultSortOrderForExtensionBasedActivity:(id)arg1;
- (id)_defaultSortItemForBuiltinActivity:(id)arg1;
- (id)_defaultSortOrderForBuiltInElevatedActivity:(id)arg1;
- (id)_defaultOrderingDescriptorForActivity:(id)arg1;
- (id)_activitiesByApplyingDefaultOrdering:(id)arg1;
- (id)activitiesByOrderingActivities:(id)arg1 applyDefaultOrdering:(BOOL)arg2 applyBeforeTypePinning:(BOOL)arg3 activityTypeOrdering:(id)arg4;
- (id)orderedAvailableActivitiesForMatchingContext:(id)arg1;
- (void)preheatAvailableActivitiesForMatchingContext:(id)arg1;
- (void)_enumerateAvailableActivitiesForMatchingContext:(id)arg1 intoMatchingResults:(id)arg2 matchingResultsUpdateBlock:(CDUnknownBlockType)arg3 enumerateActivityBlock:(CDUnknownBlockType)arg4;
- (void)primeWithDiscoveryContext:(id)arg1;
- (id)initWithDelegate:(id)arg1 sessionID:(id)arg2 fetchShortcutsBlock:(CDUnknownBlockType)arg3;

@end

