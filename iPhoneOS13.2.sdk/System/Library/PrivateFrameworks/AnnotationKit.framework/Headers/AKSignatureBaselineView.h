//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface AKSignatureBaselineView : UIView
{
    double _baselinePercent;
    UIEdgeInsets _lastSafeAreaInsets;
}

@property(nonatomic) UIEdgeInsets lastSafeAreaInsets; // @synthesize lastSafeAreaInsets=_lastSafeAreaInsets;
@property(nonatomic) double baselinePercent; // @synthesize baselinePercent=_baselinePercent;
- (BOOL)_isRTL;
- (void)_drawBaselineInContext:(CGContextRef )arg1;
- (void)layoutSubviews;
- (void)drawRect:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (double)scaleFactor;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

