//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMNoteFilter, NSNumber;

@interface EDAMBusinessQuery : FATObject
{
    EDAMNoteFilter *_filter;
    NSNumber *_numExperts;
    NSNumber *_includeNotebooks;
    NSNumber *_includeNotesCounts;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSNumber *includeNotesCounts; // @synthesize includeNotesCounts=_includeNotesCounts;
@property(retain, nonatomic) NSNumber *includeNotebooks; // @synthesize includeNotebooks=_includeNotebooks;
@property(retain, nonatomic) NSNumber *numExperts; // @synthesize numExperts=_numExperts;
@property(retain, nonatomic) EDAMNoteFilter *filter; // @synthesize filter=_filter;
// - (void).cxx_destruct;

@end

