//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSComparisonPredicate (Conversion)
- (id)FCCKPQueryFiltersWithTranslator:(id)arg1 error:(id )arg2;
- (id)_parseBasicOperatorFiltersWithTranslator:(id)arg1 withError:(id )arg2;
- (id)_parseFullTextSearchFiltersWithTranslator:(id)arg1 withError:(id )arg2;
- (id)_parseFullTextSearchUsingContainsTranslator:(id)arg1 withError:(id )arg2;
- (NSUInteger)_comparisonOptionForString:(id)arg1;
- (id)_parseBetweenFiltersWithTranslator:(id)arg1 withError:(id )arg2;
- (id)_parseBeginsWithFiltersWithTranslator:(id)arg1 withError:(id )arg2;
- (id)_parseListContainsAllFiltersWithTranslator:(id)arg1 withError:(id )arg2;
- (id)_parseListContainsAnyFiltersWithTranslator:(id)arg1 withError:(id )arg2;
- (id)_parseInFiltersWithTranslator:(id)arg1 withError:(id )arg2;
- (id)_parseListContainsFiltersWithTranslator:(id)arg1 withError:(id )arg2;
@end

