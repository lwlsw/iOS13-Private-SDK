//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSNumber, UIColor;

@interface UIView (FMRoundedRect)
- (CGPathRef)newPathForRoundedRect:(CGRect)arg1 radius:(double)arg2;
@property(retain, nonatomic) NSNumber *roundedRectBorderWidth;
@property(retain, nonatomic) UIColor *roundedRectBorderColor;
@property(retain, nonatomic) UIColor *roundedRectBackgroundColor;
- (id)addConstraintsToSetSize:(CGSize)arg1;
- (id)addConstraintsToFillSuperview;
- (id)generateImage;
@property(retain, nonatomic) UIColor *debugHighlight;
- (void)setRandomDebugHighlight;
- (void)centerVerticallyInSuperview;
- (void)centerHorizontallyInSuperview;
- (void)performOnAllSubviews:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSArray *allSubviews;
@end

