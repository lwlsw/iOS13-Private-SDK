//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


__attribute__((visibility("hidden")))
@interface NAFilterEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;
    id /* CDUnknownBlockType */ _filter;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
// - (void).cxx_destruct;
- (id)allObjects;
- (id)nextObject;
- (id)initWithEnumerator:(id)arg1 filter:(CDUnknownBlockType)arg2;

@end

