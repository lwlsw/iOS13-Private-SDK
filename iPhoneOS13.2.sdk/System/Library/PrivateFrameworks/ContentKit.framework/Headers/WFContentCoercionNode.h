//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet;

@interface WFContentCoercionNode : NSObject
{
    id _itemOrItemClass;
    WFContentCoercionNode *_parent;
}

+ (id)coercionNodeWithItemOrItemClass:(id)arg1 parent:(id)arg2;
+ (id)coercionNodeWithItemClass:(Class)arg1 parent:(id)arg2;
+ (id)coercionNodeWithItem:(id)arg1 parent:(id)arg2;
@property(readonly, nonatomic) WFContentCoercionNode *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) id itemOrItemClass; // @synthesize itemOrItemClass=_itemOrItemClass;
// - (void).cxx_destruct;
- (id)continueCoercionUsingPathEnumerator:(id)arg1 contentItems:(id)arg2 options:(id)arg3 error:(id )arg4;
- (id)runCoercionSynchronouslyWithOptions:(id)arg1 error:(id )arg2;
- (void)continueCoercionUsingPathEnumerator:(id)arg1 contentItems:(id)arg2 options:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)runCoercionWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSOrderedSet *coercionPath;
@property(readonly, nonatomic) NSOrderedSet *itemOrItemClassPath;
- (id)successorsWithOptions:(id)arg1 goalType:(id)arg2;
- (id)successorsWithOptions:(id)arg1;
- (id)description;
- (id)initWithItemOrItemClass:(id)arg1 parent:(id)arg2;

@end

