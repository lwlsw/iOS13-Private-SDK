//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TSCHMultiDataLayerAnimationInfo;

__attribute__((visibility("hidden")))
@interface TSCHMultiDataChartRepAnimationDictionaryEntry : NSObject
{
    TSCHMultiDataLayerAnimationInfo *mAnimationInfo;
    NSMutableArray *mAnimations;
}

+ (id)entry;
// - (void).cxx_destruct;
- (id)animation;
- (void)addAnimation:(id)arg1 animationInfo:(id)arg2;
- (id)init;

@end

