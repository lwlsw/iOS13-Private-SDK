//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@class CLCircularRegion, NSDate;

@interface WFLocationTrigger : WFTrigger
{
    CLCircularRegion *_region;
    NSDate *_startTime;
    NSDate *_endTime;
}

+ (BOOL)supportsSecureCoding;
+ (id)timestampDateFormatter;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)hasValidConfiguration;
- (void)configureWithConfiguration:(id)arg1;

@end

