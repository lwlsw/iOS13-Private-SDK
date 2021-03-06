//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class TSTCell, TSTLayoutContentCachedKey, TSWPColumn, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSTCellStateForLayout : NSObject <NSCopying>
{
    BOOL _cellPropsRowHeight;
    BOOL _cellWraps;
    BOOL _needWPColumn;
    BOOL _shouldFastPathMeasureFitWidth;
    BOOL _forDrawing;
    BOOL _inDynamicLayout;
    int _verticalAlignment;
    int _layoutCacheFlags;
//    struct TSUCellCoord _modelCellID;
    TSTCell *_cell;
    id _cellContents;
    double _maxWidthForChildren;
    TSWPParagraphStyle *_textStyle;
    TSTLayoutContentCachedKey *_keyVal;
    TSWPColumn *_wpColumn;
    NSUInteger _pageNumber;
    NSUInteger _pageCount;
//    struct TSUCellRect _layoutMergeRange;
    CGSize _minSize;
    CGSize _maxSize;
    CGSize _sizeOfText;
    UIEdgeInsets _paddingInsets;
}

@property(nonatomic) NSUInteger pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) NSUInteger pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) TSWPColumn *wpColumn; // @synthesize wpColumn=_wpColumn;
@property(retain, nonatomic) TSTLayoutContentCachedKey *keyVal; // @synthesize keyVal=_keyVal;
@property(nonatomic) CGSize sizeOfText; // @synthesize sizeOfText=_sizeOfText;
@property(nonatomic) int layoutCacheFlags; // @synthesize layoutCacheFlags=_layoutCacheFlags;
@property(nonatomic) BOOL inDynamicLayout; // @synthesize inDynamicLayout=_inDynamicLayout;
@property(nonatomic) BOOL forDrawing; // @synthesize forDrawing=_forDrawing;
@property(nonatomic) BOOL shouldFastPathMeasureFitWidth; // @synthesize shouldFastPathMeasureFitWidth=_shouldFastPathMeasureFitWidth;
@property(nonatomic) BOOL needWPColumn; // @synthesize needWPColumn=_needWPColumn;
@property(nonatomic) BOOL cellWraps; // @synthesize cellWraps=_cellWraps;
@property(nonatomic) BOOL cellPropsRowHeight; // @synthesize cellPropsRowHeight=_cellPropsRowHeight;
@property(retain, nonatomic) TSWPParagraphStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) UIEdgeInsets paddingInsets; // @synthesize paddingInsets=_paddingInsets;
@property(nonatomic) double maxWidthForChildren; // @synthesize maxWidthForChildren=_maxWidthForChildren;
@property(nonatomic) CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(nonatomic) CGSize minSize; // @synthesize minSize=_minSize;
@property(retain, nonatomic) id cellContents; // @synthesize cellContents=_cellContents;
// property(nonatomic) struct TSUCellRect layoutMergeRange; // @synthesize layoutMergeRange=_layoutMergeRange;
@property(copy, nonatomic) TSTCell *cell; // @synthesize cell=_cell;
// property(nonatomic) struct TSUCellCoord modelCellID; // @synthesize modelCellID=_modelCellID;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasContent;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)init;

@end

