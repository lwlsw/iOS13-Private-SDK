//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGCurationTrait.h>

@class NSArray;

@interface PGCurationArrayTrait : PGCurationTrait
{
    NSArray *_items;
    NSArray *_negativeItems;
}

@property(readonly, nonatomic) NSArray *negativeItems; // @synthesize negativeItems=_negativeItems;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
// - (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isActive;
- (id)initWithItems:(id)arg1 negativeItems:(id)arg2;
- (id)initWithItems:(id)arg1;

@end

