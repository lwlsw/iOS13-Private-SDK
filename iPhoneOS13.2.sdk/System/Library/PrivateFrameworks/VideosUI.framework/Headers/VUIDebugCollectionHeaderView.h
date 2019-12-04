//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class VUILabel, VUISeparatorView, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIDebugCollectionHeaderView : UICollectionReusableView
{
    VUITextLayout *_titleLayout;
    VUILabel *_titleLabel;
    VUISeparatorView *_separatorView;
}

@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VUITextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;
- (void)layoutSubviews;
- (void)configureHeaderViewWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
