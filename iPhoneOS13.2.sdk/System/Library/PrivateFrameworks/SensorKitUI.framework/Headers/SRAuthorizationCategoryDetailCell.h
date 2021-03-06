//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, UIColor, UIFont, UILabel, UIStackView;

@interface SRAuthorizationCategoryDetailCell : UITableViewCell
{
    BOOL _showAppUsage;
    BOOL _OBKStyle;
    UILabel *_categorySubTitleLabel;
    UILabel *_categoryTitleLabel;
    UILabel *_appUsageTitleLabel;
    UILabel *_appUsageBodyLabel;
    UILabel *_collectedTitleLabel;
    UILabel *_notCollectedTitleLabel;
    NSArray *_collectedLabels;
    NSArray *_notCollectedLabels;
    long long _numberOfCollectedLabels;
    long long _numberOfNotCollectedLabels;
    UIStackView *_categoryStack;
    UIStackView *_appUsageStack;
    UIStackView *_stacks;
    UIFont *_titleFont;
    UIFont *_bodyFont;
    UIColor *_fontColor;
}

@property(nonatomic) BOOL OBKStyle; // @synthesize OBKStyle=_OBKStyle;
@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIStackView *stacks; // @synthesize stacks=_stacks;
@property(retain, nonatomic) UIStackView *appUsageStack; // @synthesize appUsageStack=_appUsageStack;
@property(retain, nonatomic) UIStackView *categoryStack; // @synthesize categoryStack=_categoryStack;
@property(nonatomic) long long numberOfNotCollectedLabels; // @synthesize numberOfNotCollectedLabels=_numberOfNotCollectedLabels;
@property(nonatomic) long long numberOfCollectedLabels; // @synthesize numberOfCollectedLabels=_numberOfCollectedLabels;
@property(nonatomic) BOOL showAppUsage; // @synthesize showAppUsage=_showAppUsage;
@property(retain, nonatomic) NSArray *notCollectedLabels; // @synthesize notCollectedLabels=_notCollectedLabels;
@property(retain, nonatomic) NSArray *collectedLabels; // @synthesize collectedLabels=_collectedLabels;
@property(readonly, nonatomic) UILabel *notCollectedTitleLabel; // @synthesize notCollectedTitleLabel=_notCollectedTitleLabel;
@property(readonly, nonatomic) UILabel *collectedTitleLabel; // @synthesize collectedTitleLabel=_collectedTitleLabel;
@property(readonly, nonatomic) UILabel *appUsageBodyLabel; // @synthesize appUsageBodyLabel=_appUsageBodyLabel;
@property(readonly, nonatomic) UILabel *appUsageTitleLabel; // @synthesize appUsageTitleLabel=_appUsageTitleLabel;
@property(readonly, nonatomic) UILabel *categoryTitleLabel; // @synthesize categoryTitleLabel=_categoryTitleLabel;
@property(readonly, nonatomic) UILabel *categorySubTitleLabel; // @synthesize categorySubTitleLabel=_categorySubTitleLabel;
- (void)addBulletStackViewForCollected:(BOOL)arg1 count:(long long)arg2;
- (id)stackViewForSubviews:(id)arg1 spacing:(double)arg2;
- (id)dynamicHeightLabel;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 titleFont:(id)arg3 bodyFont:(id)arg4 fontColor:(id)arg5 OBKStyle:(BOOL)arg6;

@end

