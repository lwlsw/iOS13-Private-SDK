//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapFeatureLine.h>

@class NSString;

@interface GEOMapFeatureTransitLink : GEOMapFeatureLine
{
//     CDStruct_32d7d945 _transitLink;
    NSUInteger _lineIndex;
}

// - (CDStruct_6e3f967a )_tilePointsForSection:(NSUInteger)arg1 withCount:(out NSUInteger )arg2;
- (id)_containingTile;
@property(readonly, nonatomic) NSString *internalLineName;
- (void)dealloc;
// - (id)initWithTransitLink:(CDStruct_32d7d945 )arg1 lineIndex:(NSUInteger)arg2;
// @property(readonly, nonatomic) CDStruct_32d7d945 transitLink;
// @property(readonly, nonatomic) struct _GEOTileKey tileKey;

@end

