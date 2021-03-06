//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NAUILayoutConstraintSet, NSString, UILabel, UILayoutGuide;

@interface HUQuickControlCollectionViewCellContainerView : UIView
{
    UIView *_contentView;
    NSUInteger _titlePosition;
    UILayoutGuide *_preferredContentFrameLayoutGuide;
    UILabel *_titleLabel;
    NAUILayoutConstraintSet *_constraintSet;
    NAUILayoutConstraintSet *_preferredContentFrameConstraintSet;
    UIEdgeInsets _preferredContentLayoutFrameInset;
}

+ (double)preferredChromeHeightForTitlePosition:(NSUInteger)arg1;
+ (id)_titleFont;
+ (BOOL)requiresConstraintBasedLayout;
@property(readonly, nonatomic) NAUILayoutConstraintSet *preferredContentFrameConstraintSet; // @synthesize preferredContentFrameConstraintSet=_preferredContentFrameConstraintSet;
@property(readonly, nonatomic) NAUILayoutConstraintSet *constraintSet; // @synthesize constraintSet=_constraintSet;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILayoutGuide *preferredContentFrameLayoutGuide; // @synthesize preferredContentFrameLayoutGuide=_preferredContentFrameLayoutGuide;
@property(nonatomic) UIEdgeInsets preferredContentLayoutFrameInset; // @synthesize preferredContentLayoutFrameInset=_preferredContentLayoutFrameInset;
@property(nonatomic) NSUInteger titlePosition; // @synthesize titlePosition=_titlePosition;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
// - (void).cxx_destruct;
- (void)_configureConstraintSets;
- (void)updateConstraints;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 titlePosition:(NSUInteger)arg2;

@end

