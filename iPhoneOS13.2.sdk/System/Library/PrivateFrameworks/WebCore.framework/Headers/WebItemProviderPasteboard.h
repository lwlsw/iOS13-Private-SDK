//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AbstractPasteboard-Protocol.h>

@class NSArray;

@interface WebItemProviderPasteboard : NSObject <AbstractPasteboard>
{
//     struct RetainPtr<NSArray> _itemProviders;
//     struct RetainPtr<NSArray> _supportedTypeIdentifiers;
//     struct RetainPtr<WebItemProviderRegistrationInfoList> _stagedRegistrationInfoList;
//     struct Vector<WTF::RetainPtr<WebItemProviderLoadResult>, 0, WTF::CrashOnOverflow, 16> _loadResults;
    long long _numberOfItems;
    long long _changeCount;
    long long _pendingOperationCount;
}

+ (id)sharedInstance;
@property(nonatomic) long long pendingOperationCount; // @synthesize pendingOperationCount=_pendingOperationCount;
@property(nonatomic) long long changeCount; // @synthesize changeCount=_changeCount;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)takeRegistrationList;
- (void)stageRegistrationList:(id)arg1;
- (void)enumerateItemProvidersWithBlock:(CDUnknownBlockType)arg1;
- (void)decrementPendingOperationCount;
- (void)incrementPendingOperationCount;
@property(readonly, nonatomic) BOOL hasPendingOperation;
- (id)itemProviderAtIndex:(NSUInteger)arg1;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(CDUnknownBlockType)arg1 synchronousTimeout:(double)arg2;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(CDUnknownBlockType)arg1;
- (id)typeIdentifiersToLoad:(id)arg1;
@property(readonly, nonatomic) long long numberOfFiles;
@property(readonly, nonatomic) NSArray *allDroppedFileURLs;
- (id)fileUploadURLsAtIndex:(NSUInteger)arg1 fileTypes:(id )arg2;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (id)_preLoadedDataConformingToType:(id)arg1 forItemProviderAtIndex:(NSUInteger)arg2;
@property(copy, nonatomic) NSArray *itemProviders;
- (id)pasteboardTypes;
- (void)updateSupportedTypeIdentifiers:(id)arg1;
- (id)init;

@end

