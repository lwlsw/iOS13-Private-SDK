//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSSet;

@interface DMFFetchLastLoginDateRequest : DMFTaskRequest
{
    NSSet *_appleIDs;
}

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(copy, nonatomic) NSSet *appleIDs; // @synthesize appleIDs=_appleIDs;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

