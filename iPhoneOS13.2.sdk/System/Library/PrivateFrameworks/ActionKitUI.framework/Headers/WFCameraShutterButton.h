//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface WFCameraShutterButton : UIControl
{
    CAShapeLayer *_outlineLayer;
    CAShapeLayer *_buttonLayer;
}

@property(nonatomic) __weak CAShapeLayer *buttonLayer; // @synthesize buttonLayer=_buttonLayer;
@property(nonatomic) __weak CAShapeLayer *outlineLayer; // @synthesize outlineLayer=_outlineLayer;
// - (void).cxx_destruct;
- (id)accessibilityLabel;
- (NSUInteger)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)setHighlighted:(BOOL)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

