//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableOrderedSet, NSMutableString, NSString;

@interface SKUIMetricsImpressionSession : NSObject
{
    NSMutableArray *_impressionIdentifiers;
    NSMutableString *_impressionsString;
    NSMutableOrderedSet *_impressionableViewElements;
    NSMapTable *_impressionableViewElementsTimerMap;
}

@property(readonly, copy, nonatomic) NSString *impressionsString; // @synthesize impressionsString=_impressionsString;
@property(readonly, copy, nonatomic) NSArray *impressionIdentifiers; // @synthesize impressionIdentifiers=_impressionIdentifiers;
// - (void).cxx_destruct;
- (void)_clearTimerForViewElement:(id)arg1;
- (void)_setTimer:(id)arg1 forViewElement:(id)arg2;
- (id)_getTimerForViewElement:(id)arg1;
- (id)_allViewElementsInTimerMap;
- (void)endAllPendingActiveImpression;
- (void)endActiveImpressionForViewElement:(id)arg1;
- (void)beginActiveImpressionForViewElement:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *impressionableViewElements;
- (void)addItemViewElement:(id)arg1;
- (void)addItemIdentifier:(long long)arg1;
- (id)init;

@end

