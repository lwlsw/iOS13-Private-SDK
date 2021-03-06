//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKImpactEffectAnimationProvider-Protocol.h>

@class CAEmitterLayer;
@protocol CKSendAnimationManager, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface CKChatControllerDummyAnimator : NSObject <CAAnimationDelegate, CKImpactEffectAnimationProvider>
{
    id <CKSendAnimationManager> _animationDelegate;
    CAEmitterLayer *_dustEmitter;
    NSObject<OS_dispatch_group> *_throwAnimationGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *throwAnimationGroup; // @synthesize throwAnimationGroup=_throwAnimationGroup;
@property(retain, nonatomic) CAEmitterLayer *dustEmitter; // @synthesize dustEmitter=_dustEmitter;
@property(nonatomic) __weak id <CKSendAnimationManager> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
// - (void).cxx_destruct;
- (void)_beginGentleAnimationWithContext:(id)arg1;
- (void)_beginFocusAnimationWithContext:(id)arg1;
- (void)_beginLoudAnimationsWithContext:(id)arg1;
- (void)_beginImpactAnimationWithContext:(id)arg1;
- (void)_beginThrowAnimationWithContext:(id)arg1;
- (void)beginAnimationWithSendAnimationContext:(id)arg1;
- (void)stopAnimationWithSendAnimationContext:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;

@end

