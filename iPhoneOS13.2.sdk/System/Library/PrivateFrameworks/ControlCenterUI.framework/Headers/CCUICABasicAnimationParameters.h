//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/CCUIAnimationParameters-Protocol.h>

@class NSString;
@protocol CCUIAnimationTimingFunctionDescription;

@interface CCUICABasicAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying>
{
    double _duration;
    id <CCUIAnimationTimingFunctionDescription> _timingFunction;
}

@property(readonly, copy, nonatomic) id <CCUIAnimationTimingFunctionDescription> timingFunction; // @synthesize timingFunction=_timingFunction;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
// - (void).cxx_destruct;
- (id)mutableCopyWithZone:(_NSZone )arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
@property(readonly, copy) NSString *description;
- (id)_initWithAnimationParameters:(id)arg1;
- (id)init;

@end

