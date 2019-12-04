//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSArray, NSMutableArray;

@interface DKDrawing : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_strokes;
    struct CGRect _canvasBounds;
    struct CGRect _strokesFrame;
}

+ (void)resizeDrawing:(id)arg1 toFitInBounds:(struct CGRect)arg2;
+ (id)copyOfDrawing:(id)arg1 toFitInBounds:(struct CGRect)arg2;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct CGRect strokesFrame; // @synthesize strokesFrame=_strokesFrame;
@property(nonatomic) struct CGRect canvasBounds; // @synthesize canvasBounds=_canvasBounds;
@property(retain, nonatomic) NSArray *strokes; // @synthesize strokes=_strokes;
- (void)removeLastBrushStroke;
- (void)addBrushStroke:(id)arg1;
- (id)mutableStrokes;
- (id)decodedBrushStrokesWithArchiverEncodedBrushStrokes:(id)arg1;
- (id)encodeBrushStrokesForArchiving;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) long long totalPoints;
- (void)reset;
- (id)init;

@end
