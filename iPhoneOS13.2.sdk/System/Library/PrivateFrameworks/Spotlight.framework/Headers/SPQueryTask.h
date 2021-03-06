//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SPQueryResponse;
@protocol OS_dispatch_queue, SPQueryTaskDelegate;

@interface SPQueryTask : NSObject
{
    NSObject<OS_dispatch_queue> *_queryProcessor;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SPQueryResponse *_delayedResponse;
    int _unsafeState;
    NSArray *_supportedAppScopes;
    BOOL _sentSuggestions;
    _Atomic int _updatesDisabled;
//     _Atomic struct WaitingResults_s _deferredUpdate;
    BOOL _forceStableResults;
    BOOL _finished;
    BOOL _live;
    int _state;
    NSObject<SPQueryTaskDelegate> *_delegate;
    NSUInteger _whyQuery;
    NSUInteger _maxTopHitAppResults;
    NSString *_rankingDebugLog;
    NSString *_sessionEntityString;
    NSArray *_sections;
}

+ (void)initialize;
@property(readonly, nonatomic) int unsafeState; // @synthesize unsafeState=_unsafeState;
@property(nonatomic) BOOL live; // @synthesize live=_live;
@property(nonatomic) BOOL finished; // @synthesize finished=_finished;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) NSString *sessionEntityString; // @synthesize sessionEntityString=_sessionEntityString;
@property(retain, nonatomic) NSString *rankingDebugLog; // @synthesize rankingDebugLog=_rankingDebugLog;
@property(nonatomic) NSUInteger maxTopHitAppResults; // @synthesize maxTopHitAppResults=_maxTopHitAppResults;
@property(nonatomic) NSUInteger whyQuery; // @synthesize whyQuery=_whyQuery;
@property(nonatomic) BOOL forceStableResults; // @synthesize forceStableResults=_forceStableResults;
@property(nonatomic) __weak NSObject<SPQueryTaskDelegate> *delegate; // @synthesize delegate=_delegate;
@property(readonly) NSObject<OS_dispatch_queue> *queryProcessor; // @synthesize queryProcessor=_queryProcessor;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *suggestionsDebugLog;
- (id)unsafeCombinedSuggestions;
- (BOOL)_shouldPromptUserToOpenTTR;
- (void)updateResultsThroughDelegate:(BOOL)arg1 state:(int)arg2 sections:(id)arg3;
- (void)updateResultsThroughDelegate:(BOOL)arg1 state:(int)arg2 unchanged:(BOOL)arg3 sections:(id)arg4;
- (BOOL)readyToUpdate;
- (void)pushAndPostUpdates;
- (void)postSearchAgentUpdatedResultsToDelegate:(id)arg1;
- (void)disableUpdates;
- (void)enableUpdates;
@property(readonly) NSString *searchString;
- (void)clear;
- (void)cancel;
- (void)startAtUIPriority;
- (void)start;
- (id)init;

@end

