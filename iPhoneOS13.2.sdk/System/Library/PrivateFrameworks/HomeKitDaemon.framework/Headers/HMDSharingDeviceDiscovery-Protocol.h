//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class SFDevice;

@protocol HMDSharingDeviceDiscovery <NSObject>
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceChangedHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceLostHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ deviceFoundHandler;
@property(nonatomic) NSUInteger discoveryFlags;
- (void)repairDevice:(SFDevice *)arg1 flags:(unsigned int)arg2 completion:(void (^)(NSError *))arg3;
- (void)stop;
- (void)start;
@end

