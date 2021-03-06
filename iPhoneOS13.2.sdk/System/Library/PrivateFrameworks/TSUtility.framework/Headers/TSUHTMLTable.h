//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TSUHTMLTable : NSObject
{
    NSMutableDictionary *_columnAttributes;
    NSMutableDictionary *_rowClasses;
    NSMutableDictionary *_cellAttributes;
    NSMutableArray *_columnHeaders;
    NSMutableArray *_rows;
    NSUInteger _rowClassStride;
}

+ (id)_attributesStringFromAttributes:(id)arg1;
+ (id)_keyForCell:(NSUInteger)arg1:(NSUInteger)arg2;
+ (id)htmlTable;
@property(nonatomic) NSUInteger rowClassStride; // @synthesize rowClassStride=_rowClassStride;
- (void)deleteColumnWithTitle:(id)arg1;
- (NSUInteger)indexOfColumnWithTitle:(id)arg1;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (void)setCellAttributes:(id)arg1 rowIndex:(NSUInteger)arg2 columnIndex:(NSUInteger)arg3;
- (void)setCellMarkup:(id)arg1 atRowIndex:(NSUInteger)arg2 columnIndex:(NSUInteger)arg3;
- (void)setClass:(id)arg1 ofColumnIndex:(NSUInteger)arg2;
- (void)setColumnHeaders:(id)arg1;
- (void)setRowClass:(id)arg1 atRowIndex:(NSUInteger)arg2;
- (void)setColumnClasses:(id)arg1;
- (void)addRowWithCellText:(id)arg1;
- (void)addRowWithCellMarkup:(id)arg1;
- (id)markup;
@property(readonly, nonatomic) NSUInteger lastRowIndex;
@property(readonly, nonatomic) NSUInteger count;
- (void)dealloc;
- (id)init;

@end

