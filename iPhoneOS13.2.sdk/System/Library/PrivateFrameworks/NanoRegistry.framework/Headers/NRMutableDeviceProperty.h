//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NRMutableStateBase.h>

@class NRPBMutableDeviceProperty;
@protocol NSObject><NSCopying;

@interface NRMutableDeviceProperty : NRMutableStateBase
{
    id <NSObject><NSCopying> _value;
    NRPBMutableDeviceProperty *_protobuf;
}

+ (id)diffFrom:(id)arg1 to:(id)arg2;
+ (id)enclosedClassTypes;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NRPBMutableDeviceProperty *protobuf; // @synthesize protobuf=_protobuf;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)init;
@property(readonly, retain, nonatomic) id <NSObject><NSCopying> value; // @synthesize value=_value;

@end

