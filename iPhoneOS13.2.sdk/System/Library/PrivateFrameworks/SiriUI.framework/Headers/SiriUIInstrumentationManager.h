//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFAnalyticsTurnBasedInstrumentationContext, NSString;

@interface SiriUIInstrumentationManager : NSObject
{
    int _currentSiriUIState;
    AFAnalyticsTurnBasedInstrumentationContext *_currentInstrumentationTurnContext;
    NSString *_clientGeneratedDialogIdentifier;
}

+ (id)sharedManager;
@property(copy, nonatomic) NSString *clientGeneratedDialogIdentifier; // @synthesize clientGeneratedDialogIdentifier=_clientGeneratedDialogIdentifier;
@property int currentSiriUIState; // @synthesize currentSiriUIState=_currentSiriUIState;
@property(retain) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationTurnContext; // @synthesize currentInstrumentationTurnContext=_currentInstrumentationTurnContext;
// - (void).cxx_destruct;
- (void)emitPunchOutEventWithURL:(id)arg1 appID:(id)arg2;
- (void)emitDialogOutputEventWith:(id)arg1 canUseServerTTS:(BOOL)arg2 spokenDialogOutput:(id)arg3 displayedDialogOutput:(id)arg4;
- (void)emitUUFRPresentedEventWith:(id)arg1 snippetClass:(id)arg2 dialogIdentifier:(id)arg3 dialogPhase:(id)arg4;
- (void)emitTextToSpeechEndEvent:(id)arg1;
- (void)emitTextToSpeechBeginEvent:(id)arg1;
- (void)emitFinalSpeechTranscriptionEventWith:(id)arg1;
- (void)emitPartialSpeechTranscriptionEventWith:(id)arg1;
- (void)emitUIStateTransitionForSiriDismissal:(int)arg1;
- (void)emitUIStateTransitionEventWithFromState:(int)arg1 toState:(int)arg2 withPresentationType:(int)arg3;
- (void)storeClientGeneratedDUC:(id)arg1;
- (void)emitInstrumentation:(id)arg1;
- (void)storeCurrentInstrumentationTurnContext:(id)arg1;
- (id)init;

@end

