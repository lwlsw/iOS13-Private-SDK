//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDMediaLayout.h>

@class TSDImageAdjustments, TSDImageInfo, TSDInfoGeometry, TSDLayoutGeometry, TSDMaskLayout;

__attribute__((visibility("hidden")))
@interface TSDImageLayout : TSDMediaLayout
{
    TSDLayoutGeometry *mImageGeometry;
    TSDMaskLayout *mMaskLayout;
    CGPathRef mPathToStroke;
    CGAffineTransform mLayoutToImageTransform;
    CGAffineTransform mLayoutToMaskTransform;
    BOOL mMaskIntersectsImage;
    CGSize mLastParentLimitedSize;
    NSUInteger mHasAlpha;
    TSDLayoutGeometry *mBaseImageLayoutGeometry;
    TSDInfoGeometry *mDynamicInfoGeometry;
    TSDInfoGeometry *mBaseInfoGeometry;
    long long mMaskEditMode;
    BOOL mScalingInMaskMode;
    BOOL mInInstantAlphaMode;
    BOOL mIsUpdatingImageAdjustments;
    TSDImageAdjustments *mDynamicImageAdjustments;
}

// - (void).cxx_destruct;
- (void)p_destroyDynamicCopies;
- (void)p_setDynamicInfoGeometry:(id)arg1;
- (void)p_createDynamicCopies;
- (BOOL)supportsRotation;
- (id)i_computeWrapPath;
- (CGRect)boundsInfluencingExteriorWrap;
- (void)dynamicImageAdjustmentsChangeDidEnd;
- (void)dynamicImageAdjustmentsUpdateToValue:(id)arg1;
- (void)dynamicImageAdjustmentsChangeDidBegin;
- (BOOL)isDynamicallyChangingImageAdjustments;
- (id)imageAdjustments;
@property(readonly, nonatomic) TSDMaskLayout *maskLayout;
@property(readonly, nonatomic) CGAffineTransform imageDataToVisualSizeTransform;
@property(readonly, nonatomic) CGAffineTransform layoutToMaskTransform;
@property(readonly, nonatomic) CGAffineTransform layoutToImageTransform;
- (CGSize)sizeOfFrameRectIncludingCoverage;
@property(readonly, nonatomic) const CGPathRef pathToStroke;
@property(readonly, nonatomic) BOOL hasMaskingPath;
@property(readonly, nonatomic) TSDLayoutGeometry *imageGeometryInRoot;
@property(readonly, nonatomic) TSDLayoutGeometry *originalImageGeometry;
@property(readonly, nonatomic) TSDLayoutGeometry *imageGeometry;
@property(readonly, nonatomic) TSDImageInfo *imageInfo;
- (CGRect)pathBoundsWithoutStroke;
- (id)smartPathSource;
- (void)p_calculateClampModelValuesWithAdditionalTransform:(CGAffineTransform)arg1 andPerformBlock:(CDUnknownBlockType)arg2;
- (void)transferLayoutGeometryToInfo:(id)arg1 withAdditionalTransform:(CGAffineTransform)arg2 assertIfInDocument:(BOOL)arg3;
- (BOOL)isInvisible;
- (BOOL)hasAlpha;
- (double)descentForInlineLayout;
- (void)offsetGeometryBy:(CGPoint)arg1;
- (CGRect)computeAlignmentFrameInRoot:(BOOL)arg1;
- (void)updateChildrenFromInfo;
- (double)scaleForInlineClampingUnrotatedSize:(CGSize)arg1 withTransform:(CGAffineTransform)arg2;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
@property(readonly, nonatomic) TSDInfoGeometry *currentInfoGeometry;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end

