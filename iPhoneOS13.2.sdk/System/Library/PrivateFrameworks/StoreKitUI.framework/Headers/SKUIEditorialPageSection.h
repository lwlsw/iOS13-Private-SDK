//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUIColorScheme, SKUIEditorialLayout, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIEditorialPageSection : SKUIStorePageSection
{
    SKUIColorScheme *_colorScheme;
    SKUIEditorialLayout *_editorialLayout;
    BOOL _hasValidColorScheme;
    BOOL _isExpanded;
    SKUIViewElementLayoutContext *_layoutContext;
}

// - (void).cxx_destruct;
- (id)_editorialLayout;
- (id)_colorScheme;
- (void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAppearInContext:(id)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (long long)numberOfCells;
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (CGSize)cellSizeForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (long long)applyUpdateType:(long long)arg1;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)initWithPageComponent:(id)arg1;

@end

