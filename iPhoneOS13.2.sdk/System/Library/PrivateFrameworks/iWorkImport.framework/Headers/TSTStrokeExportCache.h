//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSDStroke, TSTStrokeLayerMergedStack;

__attribute__((visibility("hidden")))
@interface TSTStrokeExportCache : NSObject
{
    TSTStrokeLayerMergedStack *_mergedStrokes;
    TSDStroke *_stroke;
//     struct TSTSimpleRange _range;
}

@property(retain, nonatomic) TSDStroke *stroke; // @synthesize stroke=_stroke;
// @property(nonatomic) struct TSTSimpleRange range; // @synthesize range=_range;
@property(retain, nonatomic) TSTStrokeLayerMergedStack *mergedStrokes; // @synthesize mergedStrokes=_mergedStrokes;
- (id)strokeAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithMergedStack:(id)arg1;

@end

