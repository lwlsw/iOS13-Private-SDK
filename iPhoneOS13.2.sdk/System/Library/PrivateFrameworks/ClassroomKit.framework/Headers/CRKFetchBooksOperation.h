//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATOperation.h"

@class NSMutableArray;

@interface CRKFetchBooksOperation : CATOperation
{
    id /* CDUnknownBlockType */ mBookLibraryProxy;
    NSMutableArray *mBooks;
    BOOL mIncludeImages;
}

// - (void).cxx_destruct;
- (void)parsePDFMetadataOperationDidFail:(id)arg1;
- (void)parseBookMetadataOperationDidFail:(id)arg1;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithBookLibraryProxy:(CDUnknownBlockType)arg1 includeImages:(BOOL)arg2;
- (id)initWithBookLibraryProxy:(CDUnknownBlockType)arg1 request:(id)arg2 error:(id )arg3;
- (id)initWithBookLibraryProxy:(CDUnknownBlockType)arg1;

@end

