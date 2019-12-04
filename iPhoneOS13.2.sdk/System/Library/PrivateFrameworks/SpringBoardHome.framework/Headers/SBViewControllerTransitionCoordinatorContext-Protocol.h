//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardHome/SBViewControllerTransitionRestartedReporting-Protocol.h>
#import <SpringBoardHome/UIViewControllerTransitionCoordinatorContext-Protocol.h>

@class BSUIAnimationFactory;

@protocol SBViewControllerTransitionCoordinatorContext <UIViewControllerTransitionCoordinatorContext, SBViewControllerTransitionRestartedReporting>
- (_Bool)wasPreviousPhaseInteractive;
- (unsigned long long)transitionAnimationOptions;
- (BSUIAnimationFactory *)transitionAnimationFactory;
@end
