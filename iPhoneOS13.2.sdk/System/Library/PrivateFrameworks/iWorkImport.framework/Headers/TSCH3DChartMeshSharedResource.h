//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartMeshSharedChildResource.h>

@class TSCH3DDataBuffer;

__attribute__((visibility("hidden")))
@interface TSCH3DChartMeshSharedResource : TSCH3DChartMeshSharedChildResource
{
    TSCH3DDataBuffer *mMesh;
}

@property(retain, nonatomic) TSCH3DDataBuffer *mesh; // @synthesize mesh=mMesh;
- (void)flushMemory;
- (id)get;
- (void)setChildRegenerated:(BOOL)arg1;
- (void)dealloc;

@end

