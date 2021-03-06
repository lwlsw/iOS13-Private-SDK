//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@protocol OS_xpc_object;

@interface BKSTouchDeliveryPolicy : NSObject <NSSecureCoding>
{
}

+ (id)policyByCombiningPolicies:(id)arg1;
+ (id)policyCancelingTouchesDeliveredToContextId:(unsigned int)arg1 withInitialTouchTimestamp:(double)arg2;
+ (id)policyRequiringSharingOfTouchesDeliveredToChildContextId:(unsigned int)arg1 withHostContextId:(unsigned int)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(_NSZone )arg1;
- (id)policyExcludingPolicy:(id)arg1;
- (id)policyIncludingPolicy:(id)arg1;
- (id)reducePolicyToObjectWithBlock:(CDUnknownBlockType)arg1;
- (id)policyByMappingContainedPoliciesWithBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSObject<OS_xpc_object> *assertionEndpoint;
- (id)matchSharingTouchesPolicy:(CDUnknownBlockType)arg1 orCancelTouchesPolicy:(CDUnknownBlockType)arg2 orCombinedPolicy:(CDUnknownBlockType)arg3;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

