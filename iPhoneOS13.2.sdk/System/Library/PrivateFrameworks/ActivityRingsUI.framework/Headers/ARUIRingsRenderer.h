//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface ARUIRingsRenderer : NSObject
{
    id <MTLBuffer> _vertexPositionsBuffer;
    id <MTLBuffer> _indexBuffer;
    NSUInteger _indexCount;
}

+ (void)clearCaches;
// - (void).cxx_destruct;
- (void)_renderRingsFollowingPercent:(id)arg1 withCommandEncoder:(id)arg2 forState:(id)arg3;
- (void)_renderEntireRings:(id)arg1 withCommandEncoder:(id)arg2 forState:(id)arg3;
- (void)renderRings:(id)arg1 withCommandEncoder:(id)arg2 forState:(id)arg3;
- (void)beginRenderingWithCommandEncoder:(id)arg1;
- (id)initWithDevice:(id)arg1 maximumRingCount:(NSUInteger)arg2;

@end

