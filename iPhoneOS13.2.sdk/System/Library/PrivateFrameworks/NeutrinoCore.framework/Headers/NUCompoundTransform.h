//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUGeometryTransform.h>

@class NSArray;

@interface NUCompoundTransform : NUGeometryTransform
{
    NSArray *_transforms;
}

// - (void).cxx_destruct;
- (id)description;
// - (CDStruct_14d5dc5e)transformMatrix:(CDStruct_14d5dc5e)arg1;
// - (CDStruct_1b6d18a9)transformTime:(CDStruct_1b6d18a9)arg1;
- (CGPoint)transformPoint:(CGPoint)arg1;
- (id)inverseTransform;
- (id)initWithTransforms:(id)arg1;
- (id)initWithSrcTransforms:(id)arg1 dstTransforms:(id)arg2;

@end

