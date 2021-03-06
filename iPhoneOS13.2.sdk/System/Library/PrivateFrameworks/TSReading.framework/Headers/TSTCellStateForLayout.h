//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSTCell, TSTLayoutContentCachedKey, TSWPColumn;

@interface TSTCellStateForLayout : NSObject
{
    BOOL mCellPropsRowHeight;
    BOOL mCellWraps;
    BOOL mForDrawing;
    BOOL mInDynamicLayout;
//     CDStruct_0441cfb5 mModelCellID;
    unsigned int mVerticalAlignment;
    int mLayoutCacheFlags;
    TSTCell *mCell;
//     CDStruct_5f1f7aa9 mMergedRange;
    TSWPColumn *mWPColumn;
    id mCellContents;
    TSTLayoutContentCachedKey *mKeyVal;
    NSUInteger mPageNumber;
    NSUInteger mPageCount;
    CGSize mMinSize;
    CGSize mMaxSize;
    UIEdgeInsets mPaddingInsets;
}

@property(nonatomic) NSUInteger pageCount; // @synthesize pageCount=mPageCount;
@property(nonatomic) NSUInteger pageNumber; // @synthesize pageNumber=mPageNumber;
@property(nonatomic) int layoutCacheFlags; // @synthesize layoutCacheFlags=mLayoutCacheFlags;
@property(retain, nonatomic) TSTLayoutContentCachedKey *keyVal; // @synthesize keyVal=mKeyVal;
@property(retain, nonatomic) id cellContents; // @synthesize cellContents=mCellContents;
@property(nonatomic) unsigned int verticalAlignment; // @synthesize verticalAlignment=mVerticalAlignment;
@property(nonatomic) UIEdgeInsets paddingInsets; // @synthesize paddingInsets=mPaddingInsets;
@property(nonatomic) CGSize maxSize; // @synthesize maxSize=mMaxSize;
@property(nonatomic) CGSize minSize; // @synthesize minSize=mMinSize;
@property(retain, nonatomic) TSWPColumn *wpColumn; // @synthesize wpColumn=mWPColumn;
@property(nonatomic) BOOL inDynamicLayout; // @synthesize inDynamicLayout=mInDynamicLayout;
@property(nonatomic) BOOL forDrawing; // @synthesize forDrawing=mForDrawing;
@property(nonatomic) BOOL cellWraps; // @synthesize cellWraps=mCellWraps;
@property(nonatomic) BOOL cellPropsRowHeight; // @synthesize cellPropsRowHeight=mCellPropsRowHeight;
// @property(nonatomic) CDStruct_5f1f7aa9 mergedRange; // @synthesize mergedRange=mMergedRange;
@property(copy, nonatomic) TSTCell *cell; // @synthesize cell=mCell;
// @property(nonatomic) CDStruct_0441cfb5 modelCellID; // @synthesize modelCellID=mModelCellID;
@property(readonly, nonatomic) BOOL hasContent;
- (void)dealloc;
- (id)init;

@end

