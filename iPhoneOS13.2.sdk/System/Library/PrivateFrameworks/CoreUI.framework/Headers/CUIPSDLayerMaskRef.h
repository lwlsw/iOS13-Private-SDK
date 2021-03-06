//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUIPSDLayerRef;

@interface CUIPSDLayerMaskRef : NSObject
{
    CUIPSDLayerRef *_layerRef;
    BOOL _isVectorMask;
}

- (CGImageRef)createCGImageMask;
- (CGPathRef)newBezierPathAtScale:(double)arg1;
- (CGPathRef)newBezierPath;
- (CGRect)bounds;
- (BOOL)isInvertedWhenBlending;
- (BOOL)isEnabled;
- (BOOL)isLinked;
- (id)layerRef;
- (void)dealloc;
- (id)initVectorMaskWithLayerRef:(id)arg1;
- (id)initLayerMaskWithLayerRef:(id)arg1;

@end

