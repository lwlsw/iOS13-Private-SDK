//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class PKDashboardCreditAccountItem, UILabel;

@interface PKCreditBalanceCell : PKDashboardCollectionViewCell
{
    BOOL _isCompactUI;
    BOOL _useAccssibilityLayout;
    PKDashboardCreditAccountItem *_item;
    UILabel *_labelBalance;
    UILabel *_labelAmount;
    UILabel *_labelCreditAvailable;
}

@property(nonatomic) BOOL useAccssibilityLayout; // @synthesize useAccssibilityLayout=_useAccssibilityLayout;
@property(readonly, nonatomic) UILabel *labelCreditAvailable; // @synthesize labelCreditAvailable=_labelCreditAvailable;
@property(readonly, nonatomic) UILabel *labelAmount; // @synthesize labelAmount=_labelAmount;
@property(readonly, nonatomic) UILabel *labelBalance; // @synthesize labelBalance=_labelBalance;
@property(retain, nonatomic) PKDashboardCreditAccountItem *item; // @synthesize item=_item;
// - (void).cxx_destruct;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)_createSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

