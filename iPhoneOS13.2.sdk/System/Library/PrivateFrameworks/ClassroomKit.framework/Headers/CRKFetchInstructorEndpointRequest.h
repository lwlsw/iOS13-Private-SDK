//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskRequest.h"

@class NSURL;

@interface CRKFetchInstructorEndpointRequest : CATTaskRequest
{
    NSURL *_classroomAppBundleURL;
}

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;
@property(retain, nonatomic) NSURL *classroomAppBundleURL; // @synthesize classroomAppBundleURL=_classroomAppBundleURL;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

