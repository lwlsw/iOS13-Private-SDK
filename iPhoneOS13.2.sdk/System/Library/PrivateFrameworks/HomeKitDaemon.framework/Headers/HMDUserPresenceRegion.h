//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HMDUserPresenceRegion : NSObject
{
    NSUInteger _value;
}

+ (id)regionWithCoder:(id)arg1;
+ (id)regionWithDict:(id)arg1;
+ (id)regionWithMessage:(id)arg1;
+ (id)regionWithNumber:(id)arg1;
+ (id)regionWithValue:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger value; // @synthesize value=_value;
- (id)description;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;
- (void)addToCoder:(id)arg1;
- (id)initWithNumber:(id)arg1;

@end

