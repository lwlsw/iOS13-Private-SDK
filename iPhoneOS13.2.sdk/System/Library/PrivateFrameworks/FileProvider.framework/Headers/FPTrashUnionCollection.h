//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/FPUnionCollection.h>

@class FPQueryCollection, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPTrashUnionCollection : FPUnionCollection
{
    id _providerDomainChangesToken;
    FPQueryCollection *_trashQueryCollection;
    NSObject<OS_dispatch_queue> *_queue;
}

// - (void).cxx_destruct;
- (id)scopedSearchQuery;
- (void)updateCollectionsForDomains:(id)arg1;
- (void)fetchTrashItemsFromProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)filterDomains:(id)arg1;
@property(readonly) FPQueryCollection *trashQueryCollection;
- (id)initWithQueryCollection:(id)arg1;
- (void)setDesiredNumberOfItems:(id)arg1;
- (void)setExcludedFileTypes:(id)arg1;
- (void)setAllowedFileTypes:(id)arg1;

@end

