//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class CNAvatarView, UILabel;

@interface PKTransactionHistoryPeerPaymentHeaderCell : PKDashboardCollectionViewCell
{
    CNAvatarView *_avatarView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    BOOL _isTemplateLayout;
}

// - (void).cxx_destruct;
- (CGSize)_layoutWithBounds:(CGRect)arg1;
- (void)configureWithPeerPaymentCounterpartHandle:(id)arg1 contact:(id)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

