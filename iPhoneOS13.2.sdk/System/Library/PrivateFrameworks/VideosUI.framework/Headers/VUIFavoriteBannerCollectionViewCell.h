//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class VUIFavoriteBannerLayout, VUIFavoriteBannerView;

__attribute__((visibility("hidden")))
@interface VUIFavoriteBannerCollectionViewCell : VUIFocusableCollectionViewCell
{
    VUIFavoriteBannerView *_bannerView;
    VUIFavoriteBannerLayout *_bannerLayout;
    double _width;
}

+ (id)configureCellWithElement:(id)arg1 existingCell:(id)arg2;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) VUIFavoriteBannerLayout *bannerLayout; // @synthesize bannerLayout=_bannerLayout;
@property(retain, nonatomic) VUIFavoriteBannerView *bannerView; // @synthesize bannerView=_bannerView;
// - (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

