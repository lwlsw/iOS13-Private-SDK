//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray;

@interface _EARSpeechRecognitionResult : NSObject <NSCopying>
{
    vector_2f7ba0dc _quasarTokens;
    vector_2f7ba0dc _quasarPreItnTokens;
}

@property(readonly, nonatomic) vector_2f7ba0dc quasarPreItnTokens; // @synthesize quasarPreItnTokens=_quasarPreItnTokens;
@property(readonly, nonatomic) vector_2f7ba0dc quasarTokens; // @synthesize quasarTokens=_quasarTokens;
- (id).cxx_construct;
// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *preITNTokens;
@property(readonly, copy, nonatomic) NSArray *tokens;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)_initWithTokens:(vector_2f7ba0dc)arg1 preITNTokens:(vector_2f7ba0dc)arg2;

@end

