//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIImageView, UILabel;

@interface HUBadgeAndDisclosureAccessoryView : UIView
{
    long long _badgeCount;
    UIView *_badgeContainerView;
    UIImageView *_badgeImageView;
    UILabel *_badgeLabel;
    UIImageView *_disclosureImageView;
}

+ (id)_disclosureImage;
@property(retain, nonatomic) UIImageView *disclosureImageView; // @synthesize disclosureImageView=_disclosureImageView;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(retain, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) UIView *badgeContainerView; // @synthesize badgeContainerView=_badgeContainerView;
@property(nonatomic) long long badgeCount; // @synthesize badgeCount=_badgeCount;
// - (void).cxx_destruct;
- (id)initWithFrame:(CGRect)arg1;

@end

