//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/SVButton.h>

@class NSLayoutConstraint, NSString, SVAutoLayoutLabel;

@interface SVAccessoryItemButton : SVButton
{
    NSString *_title;
    NSString *_subtitle;
    SVAutoLayoutLabel *_titleLabel;
    SVAutoLayoutLabel *_subtitleLabel;
    NSLayoutConstraint *_titleLabelTopConstraint;
    NSLayoutConstraint *_subtitleLabelBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelBottomConstraint; // @synthesize subtitleLabelBottomConstraint=_subtitleLabelBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopConstraint; // @synthesize titleLabelTopConstraint=_titleLabelTopConstraint;
@property(readonly, nonatomic) SVAutoLayoutLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) SVAutoLayoutLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;
- (void)determineNumberOfLines;
- (void)updateFonts;
- (void)preferredContentSizeCategoryDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (id)accessibilityLabel;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSubtitle:(id)arg1 animated:(BOOL)arg2;
- (void)setTitle:(id)arg1 animated:(BOOL)arg2;
- (void)updateConstraints;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

