//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/EQKitBox.h>

__attribute__((visibility("hidden")))
@interface EQKitPathBox : EQKitBox
{
    CGPathRef mCGPath;
    double mHeight;
    double mPaddingLeft;
    double mPaddingRight;
    double mDepth;
    double mWidth;
    BOOL mDimensionsValid;
    CGRect mErasableBounds;
    BOOL mErasableBoundsValid;
    CGColorRef mCGColor;
    int mDrawingMode;
    double mLineWidth;
}

@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=mLineWidth;
@property(readonly, nonatomic) int drawingMode; // @synthesize drawingMode=mDrawingMode;
@property(readonly, nonatomic) CGColorRef color; // @synthesize color=mCGColor;
@property(readonly, nonatomic) double paddingRight; // @synthesize paddingRight=mPaddingRight;
@property(readonly, nonatomic) double paddingLeft; // @synthesize paddingLeft=mPaddingLeft;
@property(readonly, nonatomic) double height; // @synthesize height=mHeight;
@property(readonly, nonatomic) CGPathRef cgPath; // @synthesize cgPath=mCGPath;
- (CGRect)p_cacheErasableBounds;
- (void)p_cacheDimensions;
- (id)description;
// - (BOOL)appendOpticalAlignToSpec:(struct Spec )arg1 offset:(CGPoint)arg2;
- (void)renderIntoContext:(CGContextRef )arg1 offset:(CGPoint)arg2;
- (CGRect)erasableBounds;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double depth;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;
- (id)initWithCGPath:(CGPathRef)arg1 height:(double)arg2 cgColor:(CGColorRef)arg3 drawingMode:(int)arg4 lineWidth:(double)arg5;
- (id)initWithCGPath:(CGPathRef)arg1 height:(double)arg2 cgColor:(CGColorRef)arg3;
- (id)initWithCGPath:(CGPathRef)arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(CGColorRef)arg5;
- (id)initWithCGPath:(CGPathRef)arg1 height:(double)arg2 paddingLeft:(double)arg3 paddingRight:(double)arg4 cgColor:(CGColorRef)arg5 drawingMode:(int)arg6 lineWidth:(double)arg7;

@end

