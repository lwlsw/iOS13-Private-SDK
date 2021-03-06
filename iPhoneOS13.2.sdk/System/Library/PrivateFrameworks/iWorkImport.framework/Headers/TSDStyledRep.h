//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDRep.h>

#import <iWorkImport/CALayerDelegate-Protocol.h>

@class NSString, TSDReflection, TSDShadow, TSDStyledInfo, TSDStyledLayout;

__attribute__((visibility("hidden")))
@interface TSDStyledRep : TSDRep <CALayerDelegate>
{
    struct {
        unsigned int shadowInvalid:1;
    } mFlags;
}

- (id)textureForDescription:(id)arg1;
- (CGImageRef)newFrameMaskForViewScale:(double)arg1 frameRect:(CGRect )arg2;
- (void)calculateTextureClipBounds:(CGRect )arg1 andOffset:(CGPoint )arg2 withTransform:(CGAffineTransform )arg3 andRectOnCanvas:(CGRect )arg4 textureDescription:(id)arg5 isUsingImageTexture:(BOOL)arg6;
- (void)setTextureAttributes:(id)arg1 textureBounds:(CGRect)arg2;
- (CGRect)strokeBoundsWithOptions:(NSUInteger)arg1 fallbackBounds:(CGRect)arg2;
- (void)drawInContextWithoutEffectsOrChildrenForAlphaOnly:(CGContextRef )arg1;
- (void)drawInContextWithoutEffectsForAlphaOnly:(CGContextRef )arg1;
- (void)drawInContextWithoutEffectsOrChildren:(CGContextRef )arg1;
- (void)drawInContextWithoutEffects:(CGContextRef )arg1;
- (void)drawInContextWithoutEffects:(CGContextRef )arg1 withContent:(BOOL)arg2 strokeDrawOptions:(NSUInteger)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 keepingChildrenPassingTest:(CDUnknownBlockType)arg7;
- (void)drawInContext:(CGContextRef )arg1;
- (void)drawReflectionInContext:(CGContextRef )arg1 drawChildren:(BOOL)arg2;
- (void)drawReflectionInContext:(CGContextRef )arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 shouldClipGradient:(BOOL)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)drawShadowInContext:(CGContextRef )arg1 withChildren:(BOOL)arg2 withDrawableOpacity:(BOOL)arg3;
- (void)drawReflectionIntoReflectionFrameInContext:(CGContextRef )arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 drawChildren:(BOOL)arg4;
- (void)p_drawReflectionIntoReflectionFrameInContext:(CGContextRef )arg1 withTransparencyLayer:(BOOL)arg2 applyingOpacity:(BOOL)arg3 shouldClipGradient:(BOOL)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)drawGradientWithAlphaOverReflection:(CGContextRef )arg1 applyingOpacity:(BOOL)arg2 reflectionSize:(CGSize)arg3;
- (CGImageRef)p_newReflectionImageWithSize:(CGSize)arg1 applyOpacity:(BOOL)arg2 viewScale:(double)arg3 withBlock:(CDUnknownBlockType)arg4;
- (CGImageRef)newShadowImageWithSize:(CGSize)arg1 unflipped:(BOOL)arg2 withChildren:(BOOL)arg3;
- (CGImageRef)newShadowImageWithSize:(CGSize)arg1 shadow:(id)arg2 drawSelector:(SEL)arg3 unflipped:(BOOL)arg4;
- (BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1;
- (CGRect)p_reflectionRenderableFrameInRoot;
@property(readonly, nonatomic) BOOL isInvisible;
@property(readonly, nonatomic) BOOL shouldShowShadow;
@property(readonly, nonatomic) BOOL shouldShowReflection;
@property(readonly, nonatomic) TSDShadow *shadow;
@property(readonly, nonatomic) TSDReflection *reflection;
- (CGRect)p_rectWithEffectsAppliedToRect:(CGRect)arg1 additionalTransform:(CGAffineTransform)arg2 includeShadow:(BOOL)arg3 includeRef lection:(BOOL)arg4;
- (CGRect)rectWithEffectsAppliedToRect:(CGRect)arg1;
@property(readonly, nonatomic) double opacity;
- (void)p_drawReflectionInContext:(CGContextRef )arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (CGRect)p_clipRectInRootForTransform:(CGAffineTransform)arg1 includeShadow:(BOOL)arg2 includeRef lection:(BOOL)arg3;
- (CGRect)clipRect;
- (CGRect)clipRectWithoutEffects;
@property(readonly, nonatomic) TSDStyledLayout *styledLayout;
@property(readonly, nonatomic) TSDStyledInfo *styledInfo;
@property(readonly, copy) NSString *description;
- (void)dealloc;

@end

