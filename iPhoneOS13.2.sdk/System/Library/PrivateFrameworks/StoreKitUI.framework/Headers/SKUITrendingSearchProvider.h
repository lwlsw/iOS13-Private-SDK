//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSOperation, NSOperationQueue, SKUIClientContext, SKUITrendingSearchPage;

__attribute__((visibility("hidden")))
@interface SKUITrendingSearchProvider : NSObject
{
    SKUIClientContext *_clientContext;
    NSOperationQueue *_operationQueue;
    SKUITrendingSearchPage *_cachedSearchPage;
    NSMutableArray *_pendingCompletionBlocks;
    NSOperation *_runningRequestOperation;
}

@property(retain, nonatomic) NSOperation *runningRequestOperation; // @synthesize runningRequestOperation=_runningRequestOperation;
@property(readonly, nonatomic) NSMutableArray *pendingCompletionBlocks; // @synthesize pendingCompletionBlocks=_pendingCompletionBlocks;
@property(retain, nonatomic) SKUITrendingSearchPage *cachedSearchPage; // @synthesize cachedSearchPage=_cachedSearchPage;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) __weak SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
// - (void).cxx_destruct;
- (void)clearCache;
- (void)trendingSearchPageWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestTrendingSearchPageWithURL:(id)arg1;
@property(readonly, nonatomic) NSOperationQueue *callbackQueue;
- (id)requestOperationWithPageURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;

@end

