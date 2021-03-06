//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/BSXPCSecureCoding-Protocol.h>
#import <RunningBoardServices/RBSProcessMonitorConfiguring-Protocol.h>

@class NSArray, NSHashTable, NSString, RBSProcessStateDescriptor;

@interface RBSProcessMonitorConfiguration : NSObject <RBSProcessMonitorConfiguring, NSCopying, BSXPCSecureCoding>
{
    NSHashTable *_matchedHandles;
    NSString *_desc;
    int _clientPid;
    unsigned int _serviceClass;
    NSUInteger _identifier;
    NSArray *_predicates;
    RBSProcessStateDescriptor *_stateDescriptor;
    id /* CDUnknownBlockType */ _updateHandler;
}

+ (BOOL)supportsBSXPCSecureCoding;
+ (NSUInteger)_nextIdentifier;
@property(copy, nonatomic) id /* CDUnknownBlockType */ updateHandler; // @synthesize updateHandler=_updateHandler;
@property(nonatomic) unsigned int serviceClass; // @synthesize serviceClass=_serviceClass;
@property(copy, nonatomic) RBSProcessStateDescriptor *stateDescriptor; // @synthesize stateDescriptor=_stateDescriptor;
@property(copy, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
@property(readonly, nonatomic) int clientPid; // @synthesize clientPid=_clientPid;
@property(readonly, nonatomic) NSUInteger identifier; // @synthesize identifier=_identifier;
// - (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)fullDescription;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (void)_validate;
- (id)matchedProcesses;
- (BOOL)matchesProcess:(id)arg1;
- (id)_initWithIdentifier:(NSUInteger)arg1 andPid:(int)arg2;
- (id)init;

@end

