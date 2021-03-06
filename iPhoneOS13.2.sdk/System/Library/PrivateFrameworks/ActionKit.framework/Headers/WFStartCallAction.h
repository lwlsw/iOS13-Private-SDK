//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFHandleSystemIntentAction.h>

@interface WFStartCallAction : WFHandleSystemIntentAction
{
}

- (BOOL)shouldOpenAppThroughSiriForIntent:(id)arg1 intentResponse:(id)arg2;
- (id)generatedIntentWithInput:(id)arg1 error:(id )arg2;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)errorFromHandleResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2;
- (BOOL)skipsProcessingHiddenParameters;
- (id)errorFromStartCallResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3;
- (id)airplaneModeError;
- (id)contactNotSupportedByAppErrorForContacts:(id)arg1;
- (id)callingServiceNotAvailableError;
- (id)appConfigurationRequiredError;
- (id)localizedKeyParameterDisplayName;
- (id)localizedCallServiceName;
- (id)appIdentifierForIdentifier:(id)arg1;
- (long long)preferredCallProvider;
- (long long)callCapability;
- (id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2;

@end

