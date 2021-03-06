//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSIndexPath, NSString, VUILibraryListPopoverView;
@protocol VUILibraryPopoverDataSource, VUILibraryPopoverDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryPopoverViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    VUILibraryListPopoverView *_popoverView;
    BOOL _requiresRelayout;
    NSString *_popoverTitle;
    NSIndexPath *_selectedItemIndexPath;
    id <VUILibraryPopoverDataSource> _dataSource;
    id <VUILibraryPopoverDelegate> _delegate;
}

@property(nonatomic) __weak id <VUILibraryPopoverDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VUILibraryPopoverDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSIndexPath *selectedItemIndexPath; // @synthesize selectedItemIndexPath=_selectedItemIndexPath;
@property(readonly, copy, nonatomic) NSString *popoverTitle; // @synthesize popoverTitle=_popoverTitle;
// - (void).cxx_destruct;
- (void)_dismissPopover;
- (void)_configureNavigationBar;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)reloadData;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithPopoverTitle:(id)arg1;

@end

