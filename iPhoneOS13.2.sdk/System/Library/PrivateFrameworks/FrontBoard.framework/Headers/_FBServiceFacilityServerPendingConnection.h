//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSServiceFacility;

@interface _FBServiceFacilityServerPendingConnection : NSObject
{
    FBSServiceFacility *_facility;
    id /* CDUnknownBlockType */ _completion;
}

+ (id)pendingConnectionToFacility:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(retain, nonatomic) FBSServiceFacility *facility; // @synthesize facility=_facility;
// - (void).cxx_destruct;
- (id)initWithFacility:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

