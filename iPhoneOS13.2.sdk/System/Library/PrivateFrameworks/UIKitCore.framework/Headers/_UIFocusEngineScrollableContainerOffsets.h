//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol UIFocusItemScrollableContainer, UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusEngineScrollableContainerOffsets : NSObject
{
    id <UIFocusItemScrollableContainer> _scrollableContainer;
    id <UIScrollViewDelegate> _scrollDelegate;
    double _convergenceRate;
    id /* CDUnknownBlockType */ _completion;
    CGPoint _lastContentOffset;
    CGPoint _targetContentOffset;
    CGPoint _lastVelocity;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(nonatomic) CGPoint lastVelocity; // @synthesize lastVelocity=_lastVelocity;
@property(nonatomic) double convergenceRate; // @synthesize convergenceRate=_convergenceRate;
@property(nonatomic) CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(nonatomic) CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(retain, nonatomic) id <UIScrollViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(retain, nonatomic) id <UIFocusItemScrollableContainer> scrollableContainer; // @synthesize scrollableContainer=_scrollableContainer;
// - (void).cxx_destruct;

@end
