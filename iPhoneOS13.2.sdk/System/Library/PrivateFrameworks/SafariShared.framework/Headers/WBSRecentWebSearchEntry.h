//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WBSRecentWebSearchEntry : NSObject
{
    NSString *_searchString;
    NSDate *_date;
}

@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) NSString *searchString; // @synthesize searchString=_searchString;
// - (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSearchString:(id)arg1;
- (id)initWithSearchString:(id)arg1 date:(id)arg2;

@end

