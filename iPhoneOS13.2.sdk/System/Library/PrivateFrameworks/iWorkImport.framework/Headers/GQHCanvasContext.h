//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQHContext-Protocol.h>

@class GQDAffineGeometry, NSMutableString;

__attribute__((visibility("hidden")))
@interface GQHCanvasContext : NSObject <GQHContext>
{
    GQDAffineGeometry *mGeometry;
    NSMutableString *mFunctionName;
    BOOL mHasFill;
    BOOL mHasStroke;
//     struct __CFString mBezierStr;
}

- (void)setCGPath:(CGPathRef)arg1 state:(id)arg2;
- (void)addPathForLineEndStyle:(int)arg1 graphicStyle:(id)arg2 atPoint:(CGPoint)arg3 neighboringCP:(CGPoint)arg4 filledPath:(CGPathRef)arg5 strokedPath:(CGPathRef)arg6;
- (id)strokeColorWithGraphicStyle:(id)arg1;
- (float)strokeWidthWithGraphicStyle:(id)arg1;
// - (struct GQHPathEndPointInfo)endPointInfoForPath:(CGPathRef)arg1;
- (void)mapLineEndStrokeStyle:(id)arg1 state:(id)arg2;
- (void)mapLineEndFillStyle:(id)arg1 state:(id)arg2;
- (void)mapStroke:(id)arg1 state:(id)arg2;
- (void)mapFill:(id)arg1 state:(id)arg2;
- (void)mapStyle:(id)arg1 state:(id)arg2;
- (void)translate:(CGSize)arg1 state:(id)arg2;
- (void)setBezierPath:(char )arg1 state:(id)arg2;
// - (void)setImageFill:(struct __CFURL )arg1 srcSize:(CGSize)arg2 mode:(int)arg3 state:(id)arg4;
- (void)setGradient:(id)arg1 state:(id)arg2;
- (void)setFillColor:(id)arg1 state:(id)arg2;
- (void)setStrokeColor:(id)arg1 width:(float)arg2 state:(id)arg3;
- (void)setContextOpacity:(float)arg1 state:(id)arg2;
// - (void)createMaskedImageWithId:(struct __CFString )arg1 geometry:(id)arg2 imageBinary:(id)arg3 cropGeometry:(id)arg4 maskingShapePath:(id)arg5 alphaMaskBezier:(CGPathRef)arg6 graphicStyle:(id)arg7 isFloating:(BOOL)arg8 state:(id)arg9;
// - (void)createShapeWithId:(struct __CFString )arg1 path:(id)arg2 geometry:(id)arg3 graphicStyle:(id)arg4 isFloating:(BOOL)arg5 state:(id)arg6;
- (void)teardownContext:(id)arg1;
- (void)prepareContext:(id)arg1;
- (void)addScriptTagToHtml:(id)arg1 state:(id)arg2;
- (void)dealloc;

@end

