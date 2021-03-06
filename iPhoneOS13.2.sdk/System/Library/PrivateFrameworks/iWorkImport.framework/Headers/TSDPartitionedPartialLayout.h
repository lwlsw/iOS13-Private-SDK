//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDLayout.h>

@class TSDDefaultPartitioner;

__attribute__((visibility("hidden")))
@interface TSDPartitionedPartialLayout : TSDLayout
{
    CGRect mBounds;
    TSDDefaultPartitioner *mPartitioner;
}

@property(readonly, nonatomic) TSDDefaultPartitioner *partitioner; // @synthesize partitioner=mPartitioner;
@property(readonly, nonatomic) CGRect bounds; // @synthesize bounds=mBounds;
- (void)processChanges:(id)arg1;
- (id)computeLayoutGeometry;
- (Class)repClassOverride;
- (id)initWithInfo:(id)arg1 bounds:(CGRect)arg2 partitioner:(id)arg3;

@end

