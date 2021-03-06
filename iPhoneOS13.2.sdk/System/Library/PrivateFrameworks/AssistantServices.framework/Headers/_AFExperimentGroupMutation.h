//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFExperimentGroupMutating-Protocol.h>

@class AFExperimentGroup, NSDictionary, NSString;

@interface _AFExperimentGroupMutation : NSObject <AFExperimentGroupMutating>
{
    AFExperimentGroup *_baseModel;
    NSString *_identifier;
    NSUInteger _allocation;
    NSDictionary *_properties;
   struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIdentifier:1;
        unsigned int hasAllocation:1;
        unsigned int hasProperties:1;
    } _mutationFlags;
}

// - (void).cxx_destruct;
- (id)generate;
- (void)setProperties:(id)arg1;
- (void)setAllocation:(NSUInteger)arg1;
- (void)setIdentifier:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

@end

