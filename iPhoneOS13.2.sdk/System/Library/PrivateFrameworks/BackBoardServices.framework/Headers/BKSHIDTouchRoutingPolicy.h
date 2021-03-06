//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class BSMutableSettings, NSArray;

@interface BKSHIDTouchRoutingPolicy : NSObject <NSSecureCoding>
{
    BSMutableSettings *_settings;
}

+ (void)inspectChangesWithOldPolicy:(id)arg1 newPolicy:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) BSMutableSettings *settings; // @synthesize settings=_settings;
// - (void).cxx_destruct;
@property(copy, nonatomic) NSArray *contextIDsToExcludeFromHitTesting;
@property(copy, nonatomic) NSArray *contextIDsToAlwaysSendTouches;
@property(nonatomic, getter=shouldAvoidHitTesting) BOOL avoidHitTesting;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

