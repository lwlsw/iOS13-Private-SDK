//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface NSString (SCROBrailleAdditions)
- (NSRange *)rangeOfWordAfterWordAtIndex:(long long)arg1;
- (NSRange *)rangeOfWordBeforeWordAtIndex:(long long)arg1;
- (NSRange *)rangeOfWordContainingIndex:(long long)arg1;
- (NSRange *)_rangeIsolatingIllegalCharacters:(NSRange *)arg1 forwards:(BOOL)arg2;
- (id)_legalWhiteSpaceSet;
- (id)_illegalCharacterSet;
@end

