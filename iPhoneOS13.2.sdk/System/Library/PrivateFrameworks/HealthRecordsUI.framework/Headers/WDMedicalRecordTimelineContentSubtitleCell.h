//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthRecordsUI/WDMedicalRecordGroupableCell.h>

@class NSLayoutConstraint, NSString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordTimelineContentSubtitleCell : WDMedicalRecordGroupableCell
{
    NSString *_titleString;
    NSString *_subtitleString;
    BOOL _showDisclosureIndicator;
    BOOL _useRegularFontForSubtitle;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_disclosureChevronView;
    NSLayoutConstraint *_titlePillConstraint;
    NSLayoutConstraint *_titleChevronConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *titleChevronConstraint; // @synthesize titleChevronConstraint=_titleChevronConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titlePillConstraint; // @synthesize titlePillConstraint=_titlePillConstraint;
@property(retain, nonatomic) UIView *disclosureChevronView; // @synthesize disclosureChevronView=_disclosureChevronView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) BOOL useRegularFontForSubtitle; // @synthesize useRegularFontForSubtitle=_useRegularFontForSubtitle;
@property(nonatomic) BOOL showDisclosureIndicator; // @synthesize showDisclosureIndicator=_showDisclosureIndicator;
// - (void).cxx_destruct;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)setupSubviews;

@end

