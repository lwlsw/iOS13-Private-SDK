//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIItemTableViewCell.h>

@class SKUILockupItemCellLayout;

__attribute__((visibility("hidden")))
@interface SKUILockupItemTableViewCell : SKUIItemTableViewCell
{
    SKUILockupItemCellLayout *_layout;
}

@property(readonly, nonatomic) SKUILockupItemCellLayout *layout; // @synthesize layout=_layout;
// - (void).cxx_destruct;
- (void)configureForItem:(id)arg1 clientContext:(id)arg2 rowIndex:(long long)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

