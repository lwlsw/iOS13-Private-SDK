//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


__attribute__((visibility("hidden")))
@interface _UIViewAnimationDelegate : NSObject <CAAnimationDelegate>
{
    id /* CDUnknownBlockType */ _completionBlock;
}

// - (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

