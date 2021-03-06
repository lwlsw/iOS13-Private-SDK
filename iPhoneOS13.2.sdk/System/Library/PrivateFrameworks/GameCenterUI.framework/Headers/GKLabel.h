//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <GameCenterUI/GKTextStyleReplay-Protocol.h>

@class GKTextStyle;

@interface GKLabel : UILabel <GKTextStyleReplay>
{
    GKTextStyle *_baseStyle;
    GKTextStyle *_appliedStyle;
    BOOL _shouldEnforcePreferredWidth;
    BOOL _usingAttributedText;
    BOOL _shouldInhibitReplay;
    double _actualFontShrinkageFactor;
}

+ (void)initialize;
@property(nonatomic) double actualFontShrinkageFactor; // @synthesize actualFontShrinkageFactor=_actualFontShrinkageFactor;
@property(retain, nonatomic) GKTextStyle *appliedStyle; // @synthesize appliedStyle=_appliedStyle;
@property(nonatomic) BOOL shouldInhibitReplay; // @synthesize shouldInhibitReplay=_shouldInhibitReplay;
@property(readonly, nonatomic) BOOL usingAttributedText; // @synthesize usingAttributedText=_usingAttributedText;
@property(nonatomic) BOOL shouldEnforcePreferredWidth; // @synthesize shouldEnforcePreferredWidth=_shouldEnforcePreferredWidth;
// - (void).cxx_destruct;
- (void)setBounds:(CGRect)arg1;
- (void)updateConstraints;
- (CGSize)shrinkFontToFitSize:(CGSize)arg1;
- (void)shrinkFontToFitWidth;
- (void)applyTextStyle:(id)arg1;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
@property(retain, nonatomic) GKTextStyle *baseStyle;
- (void)replayAndApplyStyleWithSystemContentChange:(BOOL)arg1;
- (void)replayAndApplyStyleUnlessInhibited;

@end

