//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthService.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HDDeviceInformationService : HDHealthService
{
    BOOL _fetchLimitedCharacteristics;
    BOOL _deviceInformationHasBeenLoaded;
    NSMutableDictionary *_characteristics;
    NSMutableDictionary *_propertyValues;
    NSMutableSet *_propertiesLeftToFetch;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingDeviceInformationLoadedBlocks;
}

+ (id)implementedProperties;
+ (id)serviceUUID;
+ (long long)serviceType;
@property(retain, nonatomic) NSMutableArray *pendingDeviceInformationLoadedBlocks; // @synthesize pendingDeviceInformationLoadedBlocks=_pendingDeviceInformationLoadedBlocks;
@property(nonatomic) BOOL deviceInformationHasBeenLoaded; // @synthesize deviceInformationHasBeenLoaded=_deviceInformationHasBeenLoaded;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableSet *propertiesLeftToFetch; // @synthesize propertiesLeftToFetch=_propertiesLeftToFetch;
@property(retain, nonatomic) NSMutableDictionary *propertyValues; // @synthesize propertyValues=_propertyValues;
@property(retain, nonatomic) NSMutableDictionary *characteristics; // @synthesize characteristics=_characteristics;
@property(nonatomic) BOOL fetchLimitedCharacteristics; // @synthesize fetchLimitedCharacteristics=_fetchLimitedCharacteristics;
// - (void).cxx_destruct;
- (id)_propertyValueForCharacteristic:(id)arg1;
- (void)_queue_peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (void)_queue_peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)_queue_readProperty:(id)arg1;
- (void)readProperty:(id)arg1;
- (void)_startDeviceInformationLoadingTimeoutTimer;
- (void)_queue_setDeviceInformationHasBeenLoaded;
- (void)performWhenDeviceInformationHasBeenLoaded:(CDUnknownBlockType)arg1;
- (id)_propertyValueForPropertyName:(id)arg1;
@property(readonly) NSString *softwareRevision;
@property(readonly) NSString *firmwareRevision;
@property(readonly) NSString *hardwareRevision;
@property(readonly) NSString *serialNumber;
@property(readonly) NSString *modelNumber;
@property(readonly) NSString *manufacturerName;
- (id)initWithServiceManager:(id)arg1 peripheral:(id)arg2 advertisementData:(id)arg3 profile:(id)arg4;

@end

