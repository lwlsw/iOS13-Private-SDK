//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCHChartInfo, TSDInfoGeometry;

__attribute__((visibility("hidden")))
@interface TSCHSageGeometryHelper : NSObject
{
    TSCHChartInfo *mChartInfo;
    TSDInfoGeometry *mImportedInfoGeometry;
}

+ (CGRect)sageChartAreaBoundsForExportWithChartInfo:(id)arg1 geometryRect:(CGRect)arg2 returningContainingViewportSize:(id )arg3;
+ (id)helperWithImportedChartInfo:(id)arg1 importedInfoGeometry:(id)arg2;
// - (void).cxx_destruct;
- (CGSize)naturalSize;
- (void)dealloc;
- (id)initWithImportedChartInfo:(id)arg1 importedInfoGeometry:(id)arg2;

@end

