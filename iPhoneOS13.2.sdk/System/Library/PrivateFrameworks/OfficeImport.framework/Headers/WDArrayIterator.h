//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/WDIterator.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDArrayIterator : WDIterator
{
    NSArray *mArray;
    unsigned int mNextIndex;
}

// - (void).cxx_destruct;
- (id)next;
- (BOOL)hasNext;
- (id)initWithArray:(id)arg1;

@end

