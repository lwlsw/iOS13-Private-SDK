//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIKeyboardFeatureSpecialization.h>

@interface TIKeyboardHandwritingSpecialization : TIKeyboardFeatureSpecialization
{
}

- (BOOL)canHandleKeyHitTest;
- (id)nonstopPunctuationCharacters;
- (id)replacementForDoubleSpace;
- (id)wordSeparator;
- (BOOL)supportsLearning;
- (BOOL)shouldExtendPriorWord;
- (id)keyboardBehaviors;

@end

