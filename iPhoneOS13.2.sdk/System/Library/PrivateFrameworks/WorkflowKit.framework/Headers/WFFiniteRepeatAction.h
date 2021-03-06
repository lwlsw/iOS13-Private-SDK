//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFRepeatAction.h>

@interface WFFiniteRepeatAction : WFRepeatAction
{
    NSUInteger _numberOfLoops;
}

- (NSUInteger)numberOfLoops;
- (void)runWithInput:(id)arg1 error:(id )arg2;
- (long long)repeatCountWithVariableSource:(id)arg1;
- (void)setRepeatCount:(long long)arg1 withVariableSource:(id)arg2;
- (id)repeatInputWithVariableSource:(id)arg1;
- (void)setRepeatInput:(id)arg1 withVariableSource:(id)arg2;
- (id)repeatCountVariableName;
- (id)repeatInputVariableName;
- (id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2;
- (void)runWithInput:(id)arg1 userInterface:(id)arg2 parameterInputProvider:(id)arg3 variableSource:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)resetEvaluationCriteriaWithVariableSource:(id)arg1;
- (BOOL)shouldRepeatWithVariableSource:(id)arg1;

@end

