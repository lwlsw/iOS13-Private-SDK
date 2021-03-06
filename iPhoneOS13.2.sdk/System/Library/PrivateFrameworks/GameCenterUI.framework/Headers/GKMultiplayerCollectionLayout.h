//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary;

@interface GKMultiplayerCollectionLayout : UICollectionViewLayout
{
    BOOL _isPortrait;
    double _headerGap;
    double _footerGap;
    long long _numberOfColumnsInPortrait;
    NSDictionary *_cellLayoutInfo;
    CGSize _itemSize;
    CGSize _separatorSize;
    CGSize _headerSize;
    CGSize _footerSize;
    CGPoint _itemMargin;
    CGSize _landscapeItemSize;
    UIEdgeInsets _insets;
}

@property(nonatomic) CGSize landscapeItemSize; // @synthesize landscapeItemSize=_landscapeItemSize;
@property(retain, nonatomic) NSDictionary *cellLayoutInfo; // @synthesize cellLayoutInfo=_cellLayoutInfo;
@property(nonatomic) BOOL isPortrait; // @synthesize isPortrait=_isPortrait;
@property(nonatomic) long long numberOfColumnsInPortrait; // @synthesize numberOfColumnsInPortrait=_numberOfColumnsInPortrait;
@property(nonatomic) double footerGap; // @synthesize footerGap=_footerGap;
@property(nonatomic) double headerGap; // @synthesize headerGap=_headerGap;
@property(nonatomic) CGPoint itemMargin; // @synthesize itemMargin=_itemMargin;
@property(nonatomic) CGSize footerSize; // @synthesize footerSize=_footerSize;
@property(nonatomic) CGSize headerSize; // @synthesize headerSize=_headerSize;
@property(nonatomic) CGSize separatorSize; // @synthesize separatorSize=_separatorSize;
@property(nonatomic) CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) UIEdgeInsets insets; // @synthesize insets=_insets;
- (CGSize)collectionViewContentSize;
- (CGSize)totalCellSize;
- (long long)numberOfColumns;
- (BOOL)shouldUpdateVisibleCellLayoutAttributes;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (void)prepareLayout;
- (CGSize)currentItemSize;
- (void)dealloc;
- (id)init;

@end

