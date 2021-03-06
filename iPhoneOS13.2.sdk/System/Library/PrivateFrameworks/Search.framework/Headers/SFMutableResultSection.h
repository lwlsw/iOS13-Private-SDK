//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFResultSection.h>


@class NSArray, NSMutableOrderedSet, NSString;

@interface SFMutableResultSection : SFResultSection <NSCopying>
{
    BOOL _doNotFold;
    BOOL _pinToTop;
    BOOL _serialized;
    BOOL _isGlanceCategory;
    int _source;
    unsigned int _domain;
    NSArray *_hiddenExtResults;
    NSMutableOrderedSet *_resultSet;
    NSString *_sourceDomain;
    NSString *_resultSetIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL isGlanceCategory; // @synthesize isGlanceCategory=_isGlanceCategory;
@property(nonatomic) BOOL serialized; // @synthesize serialized=_serialized;
@property(nonatomic) unsigned int domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *resultSetIdentifier; // @synthesize resultSetIdentifier=_resultSetIdentifier;
@property(retain, nonatomic) NSString *sourceDomain; // @synthesize sourceDomain=_sourceDomain;
@property int source; // @synthesize source=_source;
@property BOOL pinToTop; // @synthesize pinToTop=_pinToTop;
@property BOOL doNotFold; // @synthesize doNotFold=_doNotFold;
@property(retain, nonatomic) NSMutableOrderedSet *resultSet; // @synthesize resultSet=_resultSet;
@property(retain, nonatomic) NSArray *hiddenExtResults; // @synthesize hiddenExtResults=_hiddenExtResults;
// - (void).cxx_destruct;
- (void)sortUsingComparator:(CDUnknownBlockType)arg1;
- (void)replaceResultsAtIndex:(NSUInteger)arg1 withResults:(id)arg2;
- (void)removeResultsInArray:(id)arg1;
- (void)removeResults:(id)arg1;
- (void)removeResultsInRange:(NSRange *)arg1;
- (void)removeResultsAtIndex:(NSUInteger)arg1;
- (id)resultsAtIndex:(NSUInteger)arg1;
- (NSUInteger)indexOfResult:(id)arg1;
- (NSUInteger)resultsCount;
- (void)addResults:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addResults:(id)arg1;
- (void)addResultsFromArray:(id)arg1;
- (void)clearResults;
- (id)results;
- (void)setResults:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResultSection:(id)arg1;
- (id)copy;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)addHiddenExtResult:(id)arg1;
- (id)description;
- (id)objectForFeedbackWithResultsArray:(id)arg1;
- (id)objectForFeedback;

@end

