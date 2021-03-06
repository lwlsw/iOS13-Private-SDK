//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSMutableArray;
@protocol TSDTileGeometryProviding;

@interface TSDTilingLayer : CALayer
{
    int mTilingMode;
    CGSize mTileSize;
    struct {
        unsigned int tiled:1;
        unsigned int hasCustomContents:1;
        unsigned int drawsInBackground:1;
        unsigned int forceTiling:1;
        unsigned int needsTileLayout:1;
        unsigned int needsTileDisplay:1;
        unsigned int needsSelfDisplay:1;
    } mFlags;
    CGRect mLastVisibleBounds;
    CGSize mLastBoundsSize;
    CALayer *mProviderContentLayer;
    NSMutableArray *mDirtyTiles;
    BOOL mHasEverHadTileLayout;
    id <TSDTileGeometryProviding> _geometryProvider;
}

+ (CGImageRef)p_newGeneratedCheckerboardImage;
+ (CGImageRef)p_newCheckerboardImage;
+ (CGSize)defaultTileSize;
@property(nonatomic) int tilingMode; // @synthesize tilingMode=mTilingMode;
@property(retain, nonatomic) id <TSDTileGeometryProviding> geometryProvider; // @synthesize geometryProvider=_geometryProvider;
- (id)p_nonTileAndContentLayers;
- (id)p_tileAndContentLayers;
- (id)p_tileLayers;
- (BOOL)p_updateTileSizeWithLayerSize:(CGSize)arg1;
- (void)i_setNeedsTileDisplayForTile:(id)arg1;
- (void)i_drawTileInBackground:(id)arg1 inRect:(CGRect)arg2;
- (void)i_drawRect:(CGRect)arg1 inContext:(CGContextRef )arg2 inBackground:(BOOL)arg3;
- (void)i_drawTile:(id)arg1 inContext:(CGContextRef )arg2;
- (BOOL)tilingSafeHasContents;
- (void)tilingSafeSetSublayers:(id)arg1;
@property(nonatomic) BOOL forceTiling;
@property(nonatomic) BOOL drawsInBackground;
- (void)drawLayer:(id)arg1 inContext:(CGContextRef )arg2;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;
- (void)layoutSublayers;
- (void)p_updateTileIndexes:(id)arg1 visibleBounds:(CGRect)arg2;
- (NSUInteger)p_tilesHigh;
- (NSUInteger)p_tilesWide;
- (void)setNeedsLayout;
- (void)setNeedsLayoutForTilingLayers;
- (void)setNeedsDisplayInRect:(CGRect)arg1;
- (void)display;
- (void)setTileContents:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)dealloc;
- (id)init;

@end

