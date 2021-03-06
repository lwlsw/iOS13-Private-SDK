//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIImage, UILabel, _CertInfoActionButton, _CertInfoGradientLabel;

@interface _CertInfoTrustSummaryHeaderCell : UITableViewCell
{
    UIImage *_certificateImage;
    UIImage *_notTrustedGradient;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    _CertInfoActionButton *_actionButton;
    _CertInfoGradientLabel *_trustedLabel;
    BOOL _trusted;
}

@property(nonatomic, getter=isTrusted) BOOL trusted; // @synthesize trusted=_trusted;
// - (void).cxx_destruct;
- (id)_trustedLabel;
- (id)_subtitleLabel;
- (id)_titleLabel;
- (void)_layoutSubviewsWithActionButtonSize:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setActionButtonTitle:(id)arg1 destructive:(BOOL)arg2 animated:(BOOL)arg3;
@property(readonly, nonatomic) double rowHeight;
- (void)setExpired:(BOOL)arg1;
@property(copy, nonatomic) NSString *trustSubtitle;
@property(copy, nonatomic) NSString *trustTitle;
@property(readonly, nonatomic) __weak _CertInfoActionButton *actionButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

