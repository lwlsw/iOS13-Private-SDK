//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSAttributedString, NSString, UILayoutGuide;

@interface _TVContentRatingTextBadgeView : UIView
{
    NSAttributedString *_contentRatingAttributedText;
    UILayoutGuide *_contentGuide;
}

+ (UIEdgeInsets)_paddingEdgeInsets;
+ (void)_drawBadgeWithAttributedRatingText:(id)arg1 inContext:(CGContextRef )arg2 rect:(CGRect)arg3 color:(id)arg4;
+ (CGSize)_badgeSizeForAttributedRatingText:(id)arg1;
+ (id)_attributedRatingTextForText:(id)arg1 color:(id)arg2;
+ (id)_badgeImageWithAttributedRatingText:(id)arg1 andColor:(id)arg2;
@property(retain, nonatomic) UILayoutGuide *contentGuide; // @synthesize contentGuide=_contentGuide;
@property(copy, nonatomic) NSAttributedString *contentRatingAttributedText; // @synthesize contentRatingAttributedText=_contentRatingAttributedText;
// - (void).cxx_destruct;
- (CGSize)_intrinsicContentSize;
- (void)_updateContentRatingAttributedText:(id)arg1;
- (void)tintColorDidChange;
- (id)lastBaselineAnchor;
- (id)firstBaselineAnchor;
- (void)drawRect:(CGRect)arg1;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
@property(copy, nonatomic) NSString *contentRatingText;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithBaselineOffsetFromBottom:(double)arg1;

@end

