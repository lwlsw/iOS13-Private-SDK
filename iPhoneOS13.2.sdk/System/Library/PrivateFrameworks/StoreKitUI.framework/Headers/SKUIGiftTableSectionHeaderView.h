//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIGiftTableSectionHeaderView : UIView
{
    UIEdgeInsets _contentInsets;
    UILabel *_label;
}

@property(nonatomic) UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *label;

@end

