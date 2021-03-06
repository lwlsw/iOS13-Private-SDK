//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseCollectionViewCell.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class SKUIImageView;

__attribute__((visibility("hidden")))
@interface SKUIImageCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIViewElementView>
{
    SKUIImageView *_highlightImageView;
    id _imageRequestCacheKey;
    BOOL _showsReflectionImage;
}

+ (CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
@property(nonatomic) BOOL showsReflectionImage; // @synthesize showsReflectionImage=_showsReflectionImage;
// - (void).cxx_destruct;
- (void)_reloadHighlightImageView;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (id)viewForElementIdentifier:(id)arg1;
- (BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)reloadWithCarouselItem:(id)arg1 size:(CGSize)arg2 context:(id)arg3;

@end

