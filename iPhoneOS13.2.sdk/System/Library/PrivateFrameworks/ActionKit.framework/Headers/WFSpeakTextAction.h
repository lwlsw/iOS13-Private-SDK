//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

#import <ActionKit/AVSpeechSynthesizerDelegate-Protocol.h>

@class AVSpeechSynthesizer;

@interface WFSpeakTextAction : WFAction <AVSpeechSynthesizerDelegate>
{
    AVSpeechSynthesizer *_synthesizer;
}

@property(retain, nonatomic) AVSpeechSynthesizer *synthesizer; // @synthesize synthesizer=_synthesizer;
// - (void).cxx_destruct;
- (id)languagePickerParameter;
- (id)voicePickerParameter;
- (void)cleanupSpeechSynthesizer;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange *)arg2 utterance:(id)arg3;
- (void)speakTextUsingSynthesizer:(id)arg1 voice:(id)arg2 rate:(float)arg3 pitch:(float)arg4 waitUntilFinished:(BOOL)arg5;
- (void)speakTextUsingVoiceOver:(id)arg1 languageCode:(id)arg2 pitch:(float)arg3 waitUntilFinished:(BOOL)arg4;
- (void)initializeParameters;
- (void)cancel;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

