//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface NFObjectReuseManager : NSObject
{
    id /* CDUnknownBlockType */ _reuseFactory;
    NSMutableDictionary *_inuseObjects;
    NSMutableDictionary *_reuseableObjects;
}

@property(copy, nonatomic) NSMutableDictionary *reuseableObjects; // @synthesize reuseableObjects=_reuseableObjects;
@property(copy, nonatomic) NSMutableDictionary *inuseObjects; // @synthesize inuseObjects=_inuseObjects;
@property(copy, nonatomic) id /* CDUnknownBlockType */ reuseFactory; // @synthesize reuseFactory=_reuseFactory;
// - (void).cxx_destruct;
- (id)inUseObjectForIdentifier:(id)arg1;
- (BOOL)isInUse:(id)arg1;
- (void)purgeObjectForIdentifier:(id)arg1;
- (void)prepareObjectForReuse:(id)arg1;
- (id)dequeueObjectForIdentifier:(id)arg1;
- (id)initWithObjectConstructor:(CDUnknownBlockType)arg1;

@end

