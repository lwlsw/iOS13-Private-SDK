//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _MapsSuggestionsFakeSourceScripterStep : NSObject
{
    NSArray *_entries;
    NSUInteger _type;
}

@property(nonatomic) NSUInteger type; // @synthesize type=_type;
@property(copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithEntries:(NSArray *)arg1 type:(NSUInteger)arg2;

@end

