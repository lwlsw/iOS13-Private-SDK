//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetAppsUtilities/NADiffOperation-Protocol.h>

@class NSNumber, NSString;
@protocol NADiffableItemGroup;

@interface NAGroupDiffOperation : NSObject <NADiffOperation>
{
    NSUInteger _type;
    id <NADiffableItemGroup> _group;
    NSNumber *_fromIndex;
    NSNumber *_toIndex;
}

+ (id)moveOperationWithGroup:(id)arg1 fromIndex:(NSUInteger)arg2 toIndex:(NSUInteger)arg3;
+ (id)deleteOperationWithGroup:(id)arg1 atIndex:(NSUInteger)arg2;
+ (id)insertOperationWithGroup:(id)arg1 atIndex:(NSUInteger)arg2;
@property(readonly, copy, nonatomic) NSNumber *toIndex; // @synthesize toIndex=_toIndex;
@property(readonly, copy, nonatomic) NSNumber *fromIndex; // @synthesize fromIndex=_fromIndex;
@property(readonly, nonatomic) id <NADiffableItemGroup> group; // @synthesize group=_group;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)_operationDescriptionWithVerboseType:(BOOL)arg1;
@property(readonly, copy, nonatomic) NSString *operationDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithOperationType:(NSUInteger)arg1 group:(id)arg2 fromIndex:(id)arg3 toIndex:(id)arg4;

@end

