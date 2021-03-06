//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLComputePipelineState.h>

#import <MTLSimDriver/MTLComputePipelineState-Protocol.h>
#import <MTLSimDriver/MTLSerializerComputePipelineState-Protocol.h>

@class MTLSimDevice;

__attribute__((visibility("hidden")))
@interface MTLSimComputePipelineState : _MTLComputePipelineState <MTLComputePipelineState, MTLSerializerComputePipelineState>
{
    MTLSimDevice *_device;
    unsigned int _pipelineRef;
    BOOL supportIndirectCommandBuffers;
    NSUInteger maxTotalThreadsPerThreadgroup;
    NSUInteger threadExecutionWidth;
    NSUInteger staticThreadgroupMemoryLength;
}

@property(nonatomic) BOOL supportIndirectCommandBuffers; // @synthesize supportIndirectCommandBuffers;
@property(nonatomic) NSUInteger staticThreadgroupMemoryLength; // @synthesize staticThreadgroupMemoryLength;
@property(nonatomic) NSUInteger threadExecutionWidth; // @synthesize threadExecutionWidth;
@property(nonatomic) NSUInteger maxTotalThreadsPerThreadgroup; // @synthesize maxTotalThreadsPerThreadgroup;
- (unsigned int)pipelineRef;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 pipelineRef:(unsigned int)arg2 descriptor:(id)arg3;

@end

