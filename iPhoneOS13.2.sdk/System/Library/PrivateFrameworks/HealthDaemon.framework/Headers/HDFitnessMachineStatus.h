//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDFitnessMachineStatus : HDHealthServiceCharacteristic
{
    NSUInteger _machineState;
}

+ (id)unitTest_fakeStatusUpdateForState:(NSUInteger)arg1;
+ (id)_buildWithBinaryValue:(id)arg1 error:(id )arg2;
+ (id)uuid;
@property(nonatomic) NSUInteger machineState; // @synthesize machineState=_machineState;
- (id)description;

@end

