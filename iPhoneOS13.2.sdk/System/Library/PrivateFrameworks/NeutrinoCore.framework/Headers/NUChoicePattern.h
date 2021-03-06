//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUPattern.h>

@class NSArray;

@interface NUChoicePattern : NUPattern
{
    NSArray *_choices;
}

@property(readonly) NSArray *choices; // @synthesize choices=_choices;
// - (void).cxx_destruct;
- (BOOL)match:(id)arg1 location:(NSUInteger )arg2 count:(NSUInteger )arg3;
- (BOOL)isEqualToChoicePattern:(id)arg1;
- (BOOL)isEqualToPattern:(id)arg1;
- (id)stringRepresentation;
- (id)optimizedPattern;
- (id)shortestMatch;
- (BOOL)isFixedOrder;
- (id)tokens;
- (id)initWithChoices:(id)arg1;
- (id)init;

@end

