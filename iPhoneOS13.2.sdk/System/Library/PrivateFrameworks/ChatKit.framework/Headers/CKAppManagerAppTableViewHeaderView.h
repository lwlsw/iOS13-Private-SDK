//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UILabel;

__attribute__((visibility("hidden")))
@interface CKAppManagerAppTableViewHeaderView : UITableViewHeaderFooterView
{
    UILabel *_headerLabel;
}

+ (id)identifier;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
// - (void).cxx_destruct;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

