//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MNMapPointsArray : NSObject
{
    NSUInteger _count;
//     CDStruct_c3b9c2ee _mapPoints;
}

// @property(readonly, nonatomic) CDStruct_c3b9c2ee mapPoints; // @synthesize mapPoints=_mapPoints;
@property(readonly, nonatomic) NSUInteger count; // @synthesize count=_count;
- (void)dealloc;
- (id)initWithCapacity:(NSUInteger)arg1;
@property(readonly, nonatomic) Matrix_2bdd42a3 points;

@end

