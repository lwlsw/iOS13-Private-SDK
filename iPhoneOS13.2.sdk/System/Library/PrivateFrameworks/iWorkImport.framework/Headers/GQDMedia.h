//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDGraphic.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDAffineGeometry, GQDFilteredImage, GQDImageBinary, GQDPath;

__attribute__((visibility("hidden")))
@interface GQDMedia : GQDGraphic <GQDNameMappable>
{
    GQDFilteredImage *mFilteredImage;
    GQDAffineGeometry *mCropGeometry;
    GQDImageBinary *mOriginalImageBinary;
    GQDPath *mMaskingShapePath;
    CGPathRef mAlphaMaskBezier;
}

//  (const struct StateSpec )stateForReading;
- (CGPathRef)alphaMaskBezier;
- (id)maskingShapePath;
- (id)cropGeometry;
- (id)imageBinary;
- (void)dealloc;

@end

