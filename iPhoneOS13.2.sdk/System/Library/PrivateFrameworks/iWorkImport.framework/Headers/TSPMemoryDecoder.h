//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPDecoder-Protocol.h>

@protocol OS_dispatch_data, TSPMemoryDecoderDelegate;

__attribute__((visibility("hidden")))
@interface TSPMemoryDecoder : NSObject <TSPDecoder>
{
    id <TSPMemoryDecoderDelegate> _delegate;
    NSObject<OS_dispatch_data> *_metadataDispatchData;
    NSObject<OS_dispatch_data> *_rootObjectComponentDispatchData;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_data> *rootObjectComponentDispatchData; // @synthesize rootObjectComponentDispatchData=_rootObjectComponentDispatchData;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *metadataDispatchData; // @synthesize metadataDispatchData=_metadataDispatchData;
// - (void).cxx_destruct;
- (id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2;
- (id)newReadChannelForRootObjectComponent;
- (id)newReadChannelForMetadata;
- (id)initWithEncodedData:(id)arg1 delegate:(id)arg2;
- (id)initWithMetadataDispatchData:(id)arg1 rootObjectComponentDispatchData:(id)arg2 delegate:(id)arg3;
- (id)init;

@end

