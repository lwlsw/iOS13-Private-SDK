//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSAttributedString, NSMutableIndexSet, UIColor;
@protocol SGTappableTextViewDelegate;

@interface SGTappableTextView : UITextView
{
    UIColor *_activeRangeNormalColor;
    UIColor *_activeRangeHighlightedColor;
    NSAttributedString *_clientText;
    NSMutableIndexSet *_activeRanges;
    NSRange * _trackingRange;
    BOOL _trackingRangeHighlighted;
    BOOL _needsLabelUpdate;
    long long _currentStyle;
    id <SGTappableTextViewDelegate> _tappableDelegate;
}

@property(nonatomic) __weak id <SGTappableTextViewDelegate> tappableDelegate; // @synthesize tappableDelegate=_tappableDelegate;
// - (void).cxx_destruct;
- (void)_updateCurrentAppearance;
- (id)_textColor;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (NSRange *)_rangeAtPoint:(CGPoint)arg1;
- (NSUInteger)_characterIndexAtPoint:(CGPoint)arg1;
- (void)_updateLabelIfNeeded;
- (void)_setNeedUpdateLabel;
- (void)tintColorDidChange;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *activeRangeHighlightedColor;
@property(retain, nonatomic) UIColor *activeRangeNormalColor;
- (void)setAttributedText:(id)arg1;
- (id)text;
- (void)_updateAttributedTextColor;
- (void)setText:(id)arg1;
- (void)_highlightTrackingRange:(BOOL)arg1;
- (BOOL)isTracking;
- (NSRange *)trackingRange;
- (void)setTrackingRange:(NSRange *)arg1;
- (void)removeAllActiveRanges;
- (void)removeActiveRange:(NSRange *)arg1;
- (void)addActiveRange:(NSRange *)arg1;
@property(readonly, nonatomic) CGRect activeRangesRect;
@property(readonly, nonatomic) BOOL hasActiveRanges;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

