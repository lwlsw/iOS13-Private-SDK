//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBApplicationProcess, FBProcessState;

@interface SBApplicationProcessState : NSObject
{
    FBApplicationProcess *_process;
    FBProcessState *_processState;
    BOOL _isBeingDebugged;
}

// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) BOOL isBeingDebugged;
@property(readonly, nonatomic) long long visibility;
@property(readonly, nonatomic) long long taskState;
@property(readonly, nonatomic, getter=isForeground) BOOL foreground;
@property(readonly, nonatomic, getter=isRunning) BOOL running;
@property(readonly, nonatomic) int pid;
- (id)_initWithProcess:(id)arg1 stateSnapshot:(id)arg2;

@end

