//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXSectionedChangeDetailsRepository : NSObject
{
    NSMutableArray *_allChangeDetails;
    NSObject<OS_dispatch_queue> *_internalQueue;
    long long _historyLimit;
}

@property(readonly, nonatomic) long long historyLimit; // @synthesize historyLimit=_historyLimit;
// - (void).cxx_destruct;
- (id)coalescedChangeDetailsFromDataSourceIdentifier:(NSUInteger)arg1 toDataSourceIdentifier:(NSUInteger)arg2;
- (id)changeDetailsFromDataSourceIdentifier:(NSUInteger)arg1 toDataSourceIdentifier:(NSUInteger)arg2;
- (void)addChangeDetails:(id)arg1;
- (id)initWithChangeHistoryLimit:(long long)arg1;
- (id)init;

@end

