//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIColor, UILabel;

@interface PKStackedLabelCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    BOOL _isRTL;
    NSString *_titleText;
    NSString *_detailText;
    UIColor *_titleTextColor;
    UIColor *_detailTextColor;
}

@property(retain, nonatomic) UIColor *detailTextColor; // @synthesize detailTextColor=_detailTextColor;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (UIEdgeInsets)_effectiveLayoutMargins;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)_applyLabelStyles;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

