//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HDSQLiteQueryPlan : NSObject
{
    BOOL _includesTableScan;
    BOOL _usesIndex;
    BOOL _usesCoveringIndex;
    NSArray *_queryPlanRows;
    NSArray *_indices;
}

@property(readonly, nonatomic) NSArray *indices; // @synthesize indices=_indices;
@property(readonly, nonatomic) BOOL usesCoveringIndex; // @synthesize usesCoveringIndex=_usesCoveringIndex;
@property(readonly, nonatomic) BOOL usesIndex; // @synthesize usesIndex=_usesIndex;
@property(readonly, nonatomic) BOOL includesTableScan; // @synthesize includesTableScan=_includesTableScan;
@property(readonly, copy, nonatomic) NSArray *queryPlanRows; // @synthesize queryPlanRows=_queryPlanRows;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithQueryPlanRows:(id)arg1;

@end

