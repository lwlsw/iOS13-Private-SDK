//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKVectorOverlayData.h>

@class NSArray;

@interface VKVectorOverlayPolygonGroup : VKVectorOverlayData
{
    NSArray *_polygons;
    shared_ptr_e0acdecc _style;
    CGColorRef _fillColor;
    CGColorRef _strokeColor;
    double _lineWidth;
    long long _lineJoin;
    double _miterLimit;
    double _alpha;
//    struct unfair_lock _propertiesLock;
}

@property(readonly, nonatomic, getter=_style) shared_ptr_e0acdecc style; // @synthesize style=_style;
@property(readonly, nonatomic) NSArray *polygons; // @synthesize polygons=_polygons;
- (id).cxx_construct;
// - (void).cxx_destruct;
@property(nonatomic) double alpha;
@property(nonatomic) CGColorRef strokeColor;
@property(nonatomic) CGColorRef fillColor;
@property(nonatomic) double miterLimit;
@property(nonatomic) long long lineJoin;
@property(nonatomic) double lineWidth;
- (void)_updateStyleColor;
- (void)dealloc;
- (id)initWithPolygons:(id)arg1;

@end

