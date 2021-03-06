//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSModalHomeAffordanceControlling-Protocol.h>

@class SBHomeGestureArbiter, SBHomeGestureParticipant, UIScreenEdgePanGestureRecognizer;

@interface SBDashBoardModalHomeAffordanceController : NSObject <CSModalHomeAffordanceControlling>
{
    SBHomeGestureArbiter *_homeGestureArbiter;
    SBHomeGestureParticipant *_participant;
    UIScreenEdgePanGestureRecognizer *_homeGestureRecognizer;
}

@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *homeGestureRecognizer; // @synthesize homeGestureRecognizer=_homeGestureRecognizer;
// - (void).cxx_destruct;
- (void)unregisterHomeGestureParticipant;
- (void)_addGrabberView:(id)arg1;
- (void)registerHomeGestureParticipant:(id)arg1;
- (id)init;

@end

