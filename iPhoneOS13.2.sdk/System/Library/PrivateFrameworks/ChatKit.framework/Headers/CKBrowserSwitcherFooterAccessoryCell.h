//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIView;

@interface CKBrowserSwitcherFooterAccessoryCell : UICollectionReusableView
{
    double _minHeight;
    double _maxHeight;
    UIView *_seperatorView;
}

+ (id)reuseIdentifier;
+ (id)supplementryViewKind;
@property(retain, nonatomic) UIView *seperatorView; // @synthesize seperatorView=_seperatorView;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) double minHeight; // @synthesize minHeight=_minHeight;
// - (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

