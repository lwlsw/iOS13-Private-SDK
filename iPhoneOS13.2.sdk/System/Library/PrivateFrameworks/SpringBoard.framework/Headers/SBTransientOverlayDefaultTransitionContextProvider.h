//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBTransientOverlayTransitionContextProviding-Protocol.h>

@class NSMutableArray;

@interface SBTransientOverlayDefaultTransitionContextProvider : NSObject <SBTransientOverlayTransitionContextProviding>
{
    BOOL _didPerformAlongsideTransitions;
    BOOL _isCompleted;
    NSMutableArray *_transitionBlocks;
    NSMutableArray *_transitionCompletionBlocks;
    BOOL _transitionCompletedSuccessfully;
    BOOL animated;
}

@property(nonatomic, getter=isAnimated) BOOL animated; // @synthesize animated;
// - (void).cxx_destruct;
- (void)transitionAlongsideUsingBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performAlongsideTransitions;
- (void)completeTransition:(BOOL)arg1;

@end

