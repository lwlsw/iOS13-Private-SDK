//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoardServices/RBSProcessMonitorConfiguring-Protocol.h>

@class NSMutableDictionary, NSSet, RBSProcessMonitorConfiguration;
@protocol RBSServiceLocalProtocol;

@interface RBSProcessMonitor : NSObject <RBSProcessMonitorConfiguring>
{
//     struct os_unfair_lock_s _lock;
    id <RBSServiceLocalProtocol> _service;
    BOOL _valid;
    BOOL _configuring;
    RBSProcessMonitorConfiguration *_configuration;
    NSMutableDictionary *_stateByIdentity;
}

+ (id)monitorWithConfiguration:(CDUnknownBlockType)arg1;
+ (id)monitorWithPredicate:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
+ (id)monitor;
// - (void).cxx_destruct;
- (void)_handleProcessStateChange:(id)arg1;
- (void)_reconnect;
- (void)setUpdateHandler:(CDUnknownBlockType)arg1;
- (void)setStateDescriptor:(id)arg1;
- (void)setPredicates:(id)arg1;
@property(readonly, nonatomic) unsigned int serviceClass;
@property(readonly, nonatomic) RBSProcessMonitorConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)invalidate;
- (id)description;
- (void)updateConfiguration:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSSet *states; // @dynamic states;
- (id)stateForIdentity:(id)arg1;
- (id)predicates;
- (BOOL)isValid;
- (void)dealloc;
- (id)_initWithService:(id)arg1;
- (id)init;

@end

