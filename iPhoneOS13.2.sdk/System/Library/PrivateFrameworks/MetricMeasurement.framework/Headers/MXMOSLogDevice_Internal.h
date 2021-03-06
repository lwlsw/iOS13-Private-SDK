//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricMeasurement/MXMProbeableDevice-Protocol.h>

@class NSString, OSLogDevice;

@interface MXMOSLogDevice_Internal : NSObject <MXMProbeableDevice>
{
    NSString *_name;
    NSString *_identifier;
    OSLogDevice *_rawDevice;
}

@property(retain, nonatomic) OSLogDevice *rawDevice; // @synthesize rawDevice=_rawDevice;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)initWithName:(id)arg1 identifier:(id)arg2;
- (id)initWithOSLogDevice:(id)arg1;

@end

