//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUILibraryFetchControllerViewController.h>


@class NSIndexPath, UICollectionView, VUILibraryStackView;

__attribute__((visibility("hidden")))
@interface VUILibraryStackViewController : VUILibraryFetchControllerViewController <UICollectionViewDelegate>
{
    BOOL _requiresRelayout;
    NSIndexPath *_focusedIndexPath;
    VUILibraryStackView *_stackView;
    UICollectionView *_stackCollectionView;
}

@property(readonly, nonatomic) UICollectionView *stackCollectionView; // @synthesize stackCollectionView=_stackCollectionView;
@property(readonly, nonatomic) VUILibraryStackView *stackView; // @synthesize stackView=_stackView;
// - (void).cxx_destruct;
- (void)_updateNavigationBarPadding;
- (void)_invalidateLayouts;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)scrollToTop;

@end

