//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WDDocument;

__attribute__((visibility("hidden")))
@interface WDRevisionAuthorTable : NSObject
{
    NSMutableArray *mAuthors;
    WDDocument *mDocument;
}

// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)authorAddLookup:(id)arg1;
- (void)addAuthor:(id)arg1;
- (id)authorAt:(NSUInteger)arg1;
- (NSUInteger)authorCount;
- (id)authors;
- (id)initWithDocument:(id)arg1;

@end

