//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SORequestQueue : NSObject
{
    NSMutableArray *_queue;
    id _processingItem;
    id /* CDUnknownBlockType */ _processItemBlock;
}

+ (id)debugDescription;
+ (id)requestQueueWithIdentifier:(id)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ processItemBlock; // @synthesize processItemBlock=_processItemBlock;
// - (void).cxx_destruct;
- (id)description;
- (void)_itemCompleted;
- (void)_processItem:(id)arg1;
- (void)removeAllRequestsWithBlock:(CDUnknownBlockType)arg1;
- (void)processNextRequest;
- (void)enqueueRequest:(id)arg1;
- (id)init;

@end

