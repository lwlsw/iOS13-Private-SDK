//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDAnchor.h>

__attribute__((visibility("hidden")))
@interface EDOneCellAnchor : EDAnchor
{
//    struct EDCellAnchorMarker mFrom;
    CGSize mSize;
    BOOL mIsRelative;
}

- (id).cxx_construct;
- (void)setRelative:(BOOL)arg1;
- (BOOL)isRelative;
- (void)setSize:(CGSize)arg1;
- (CGSize)size;
//  (void)setFrom:(struct EDCellAnchorMarker)arg1;
//  (struct EDCellAnchorMarker)from;

@end

