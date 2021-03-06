//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class CKAppStripLayout, NSTimer, UICollectionView, UILongPressGestureRecognizer;
@protocol CKAppStripPredictiveTypeTransition, CKBrowserSwitcherFooterViewDataSource, CKBrowserSwitcherFooterViewDelegate;

@interface CKBrowserSwitcherFooterView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UIGestureRecognizerDelegate>
{
    CKAppStripLayout *_appStripLayout;
    UICollectionView *_collectionView;
    UIView *_predictiveTypeSnapshotView;
    UIView *_visibleView;
    id <CKAppStripPredictiveTypeTransition> _animator;
    UIEdgeInsets _minifiedContentInsets;
    BOOL _isMagnified;
    BOOL _isDoingMagnificationAnimation;
    BOOL _isMagnificationEnabled;
    BOOL _ignoreDataSourceChanges;
    NSTimer *_minificationTimer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UILongPressGestureRecognizer *_touchTracker;
    BOOL _hasTouches;
    BOOL _scrollsLastUsedAppIconIntoView;
    BOOL _hideShinyStatus;
    BOOL _toggleBordersOnInterfaceStyle;
    BOOL _minifiesOnSelection;
    BOOL _isMinifyingOnTranscriptScroll;
    id <CKBrowserSwitcherFooterViewDelegate> _delegate;
    id <CKBrowserSwitcherFooterViewDataSource> _dataSource;
    double _snapshotVerticalOffset;
    UIView *_grayLine;
}

@property(retain, nonatomic) UIView *grayLine; // @synthesize grayLine=_grayLine;
@property(nonatomic) double snapshotVerticalOffset; // @synthesize snapshotVerticalOffset=_snapshotVerticalOffset;
@property(nonatomic) BOOL isMinifyingOnTranscriptScroll; // @synthesize isMinifyingOnTranscriptScroll=_isMinifyingOnTranscriptScroll;
@property(nonatomic) BOOL minifiesOnSelection; // @synthesize minifiesOnSelection=_minifiesOnSelection;
@property(retain, nonatomic) CKAppStripLayout *appStripLayout; // @synthesize appStripLayout=_appStripLayout;
@property(nonatomic) BOOL toggleBordersOnInterfaceStyle; // @synthesize toggleBordersOnInterfaceStyle=_toggleBordersOnInterfaceStyle;
@property(nonatomic) BOOL hideShinyStatus; // @synthesize hideShinyStatus=_hideShinyStatus;
@property(nonatomic) BOOL scrollsLastUsedAppIconIntoView; // @synthesize scrollsLastUsedAppIconIntoView=_scrollsLastUsedAppIconIntoView;
@property(nonatomic) BOOL isMagnified; // @synthesize isMagnified=_isMagnified;
@property(nonatomic) __weak id <CKBrowserSwitcherFooterViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <CKBrowserSwitcherFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)collectionView;
- (void)_updateVisibilityState;
- (void)animateAppStripVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updatePredictiveTypeSnapshot:(id)arg1;
- (void)transcriptCollectionStartedScrolling:(id)arg1;
- (void)updateBrowserCell:(id)arg1;
- (void)reloadData;
- (void)installedAppsChanged:(id)arg1;
- (void)updateCollectionView:(id)arg1;
- (void)visibleAppsChanges:(id)arg1;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)adjustMagnificationAtPoint:(CGPoint)arg1 minifyImmediately:(BOOL)arg2;
- (CGPoint)targetContentOffsetForFocusPoint:(CGPoint)arg1 initialLayoutMode:(NSUInteger)arg2 finalLayoutMode:(NSUInteger)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)minifyImmediately:(BOOL)arg1;
- (void)touchTrackerTrackedTouches:(id)arg1;
- (void)appsLongPressed:(id)arg1;
- (double)contentHeight;
- (void)clearSelection;
- (void)resetScrollPosition;
- (void)selectPluginAtIndexPath:(id)arg1;
- (void)setInitiallySelectedPluginIfNeeded;
@property(nonatomic) BOOL showBorders;
- (void)_dynamicUserInterfaceTraitDidChange;
- (UIEdgeInsets)insetsForAppStrip;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)init;
- (id)initWithFrame:(CGRect)arg1 toggleBordersOnInterfaceStyle:(BOOL)arg2;
- (void)dealloc;

@end

