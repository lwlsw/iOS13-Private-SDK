//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSLayoutConstraint, NTKCGalleryCollection, UICollectionView, UICollectionViewFlowLayout, UILabel, UIStackView, _NTKCAddNewFace;
@protocol NTKCGalleryCellDelegate;

@interface NTKCGalleryCell : UITableViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    BOOL _hasCalloutName;
    BOOL _hasCalloutImage;
    BOOL _allSnapshotsLoaded;
    NTKCGalleryCollection *_collection;
    id <NTKCGalleryCellDelegate> _delegate;
    long long _selectedIndex;
    UILabel *_title;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    NSLayoutConstraint *_titleBaselineConstraint;
    NSLayoutConstraint *_faceContainerTopConstraint;
    NSLayoutConstraint *_leadingInsetConstraint;
    NSLayoutConstraint *_cvHeightConstraint;
    UIStackView *_titleStack;
    UIStackView *_collectionViewFooterStack;
    UILabel *_footer;
    _NTKCAddNewFace *_addNewFace;
    CGSize _itemSize;
}

+ (double)rowHeightForCollection:(id)arg1;
+ (id)reuseIdentifier;
@property(nonatomic) BOOL allSnapshotsLoaded; // @synthesize allSnapshotsLoaded=_allSnapshotsLoaded;
@property(retain, nonatomic) _NTKCAddNewFace *addNewFace; // @synthesize addNewFace=_addNewFace;
@property(retain, nonatomic) UILabel *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) UIStackView *collectionViewFooterStack; // @synthesize collectionViewFooterStack=_collectionViewFooterStack;
@property(retain, nonatomic) UIStackView *titleStack; // @synthesize titleStack=_titleStack;
@property(retain, nonatomic) NSLayoutConstraint *cvHeightConstraint; // @synthesize cvHeightConstraint=_cvHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingInsetConstraint; // @synthesize leadingInsetConstraint=_leadingInsetConstraint;
@property(retain, nonatomic) NSLayoutConstraint *faceContainerTopConstraint; // @synthesize faceContainerTopConstraint=_faceContainerTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleBaselineConstraint; // @synthesize titleBaselineConstraint=_titleBaselineConstraint;
@property(nonatomic) BOOL hasCalloutImage; // @synthesize hasCalloutImage=_hasCalloutImage;
@property(nonatomic) BOOL hasCalloutName; // @synthesize hasCalloutName=_hasCalloutName;
@property(nonatomic) CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <NTKCGalleryCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NTKCGalleryCollection *collection; // @synthesize collection=_collection;
// - (void).cxx_destruct;
- (void)_fontSizeDidChange;
- (BOOL)shouldShowFooterTextInCollectionView;
- (BOOL)hasFooterText;
- (BOOL)_shouldShowAddNewFace;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)containerViewForFace:(id)arg1;
- (id)faceForLocation:(CGPoint)arg1;
- (void)clearSelectedFaces;
- (void)selectFace:(id)arg1;
- (void)updateFaceAtIndex:(NSUInteger)arg1;
- (CGPoint)_contentInsetPoint;
@property(nonatomic) CGPoint contentOffset;
- (void)showFooterTextIfNeeded;
- (void)calculateHeightForCollection;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)ensureCorrectTitleViewOrientation;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;

@end

