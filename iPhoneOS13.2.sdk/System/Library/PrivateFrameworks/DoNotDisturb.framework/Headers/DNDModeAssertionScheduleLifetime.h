//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturb/DNDModeAssertionLifetime.h>

@class NSString;

@interface DNDModeAssertionScheduleLifetime : DNDModeAssertionLifetime
{
    NSString *_scheduleIdentifier;
    NSUInteger _behavior;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSUInteger behavior; // @synthesize behavior=_behavior;
@property(readonly, copy, nonatomic) NSString *scheduleIdentifier; // @synthesize scheduleIdentifier=_scheduleIdentifier;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSUInteger)lifetimeType;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithScheduleIdentifier:(id)arg1 behavior:(NSUInteger)arg2;

@end

