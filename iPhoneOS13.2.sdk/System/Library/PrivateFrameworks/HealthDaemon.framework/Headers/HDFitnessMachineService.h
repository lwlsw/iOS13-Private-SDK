//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthService.h>

@interface HDFitnessMachineService : HDHealthService
{
    NSUInteger _machineType;
}

+ (NSUInteger)typeFromAdvertisementData:(id)arg1;
+ (id)_allCharacteristicClasses;
+ (id)_characteristicsMap;
+ (id)implementedProperties;
+ (id)serviceUUID;
+ (long long)serviceType;
@property(readonly, nonatomic) NSUInteger machineType; // @synthesize machineType=_machineType;
- (BOOL)processAdvertisementData:(id)arg1;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (id)servicesInProfile;
- (void)readProperty:(id)arg1;

@end

