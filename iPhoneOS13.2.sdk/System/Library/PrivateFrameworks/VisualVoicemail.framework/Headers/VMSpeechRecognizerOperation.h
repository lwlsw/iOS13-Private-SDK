//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualVoicemail/VMOperation.h>

@protocol VMSpeechRecognizer;

@interface VMSpeechRecognizerOperation : VMOperation
{
    id <VMSpeechRecognizer> _speechRecognizer;
}

@property(readonly) id <VMSpeechRecognizer> speechRecognizer; // @synthesize speechRecognizer=_speechRecognizer;
// - (void).cxx_destruct;
- (id)locale;
- (id)initWithSpeechRecognizer:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)init;

@end

