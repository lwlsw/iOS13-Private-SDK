//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSOrderedSet, NSString, WFAction;
@protocol WFOutputTraversalContext, WFVariableObserver;

@protocol WFVariableProvider <NSObject>
@property(readonly, nonatomic) NSArray *workflowInputClasses;
@property(readonly, nonatomic) NSArray *availableOutputActions;
@property(readonly, nonatomic) NSArray *availableVariableNames;
- (void)removeVariableObserver:(id <WFVariableObserver>)arg1;
- (void)addVariableObserver:(id <WFVariableObserver>)arg1;
- (NSArray *)actionsProvidingVariableName:(NSString *)arg1;
- (WFAction *)actionProvidingVariableWithOutputUUID:(NSString *)arg1;
- (BOOL)isVariableWithOutputUUIDAvailable:(NSString *)arg1;
- (BOOL)hasAvailableActionOutputVariables;
- (NSOrderedSet *)possibleContentClassesForVariableNamed:(NSString *)arg1 context:(id <WFOutputTraversalContext>)arg2;
- (BOOL)isVariableWithNameAvailable:(NSString *)arg1;
- (BOOL)hasAvailableVariables;
@end

