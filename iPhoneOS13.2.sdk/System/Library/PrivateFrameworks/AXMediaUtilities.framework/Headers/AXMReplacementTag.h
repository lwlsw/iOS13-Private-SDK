//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMTag.h>

@class NSString;

@interface AXMReplacementTag : AXMTag
{
    NSString *_overrideSpeakableText;
    NSRange * _overrideRange;
}

+ (id)replacementTagWithSpeakableText:(id)arg1 range:(NSRange *)arg2;
// - (void).cxx_destruct;
- (NSRange *)range;
- (id)originalText;
- (id)speakableText;

@end

