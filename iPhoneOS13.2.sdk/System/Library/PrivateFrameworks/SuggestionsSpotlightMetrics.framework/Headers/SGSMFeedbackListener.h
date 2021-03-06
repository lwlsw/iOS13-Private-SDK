//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SuggestionsSpotlightMetrics/SFFeedbackListener-Protocol.h>

@class NSCache, SGSMMutableSearchState;
@protocol SGSuggestionsServiceEventsProtocol;

@interface SGSMFeedbackListener : NSObject <SFFeedbackListener>
{
    SGSMMutableSearchState *_searchState;
    SGSMMutableSearchState *_previousState;
    id <SGSuggestionsServiceEventsProtocol> _suggestionsService;
    NSCache *_eventLastInteractionTime;
}

// - (void).cxx_destruct;
- (void)searchViewDidDisappear:(id)arg1;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageSuggestion:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didRankSections:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (id)_eventIdentifierFromSearchResult:(id)arg1;
- (void)_resetState;
- (void)_restoreStateIfUnset;
- (void)_saveAndUnsetState;
- (id)init;

@end

