//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MTVisualStylingProvider;

@interface SBUIActionKeylineView : UIView
{
    MTVisualStylingProvider *_visualStylingProvider;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
// - (void).cxx_destruct;
- (void)_updateCornerMask;
- (void)_updateVisualStylingIfNecessary;
- (void)_invalidateVisualStyling;
- (CGSize)intrinsicContentSize;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (double)heightInPixels;
- (id)init;

@end

