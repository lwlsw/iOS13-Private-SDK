//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/CSCoverSheetParticipating-Protocol.h>

@protocol CSCoverSheetViewTransitionSource <CSCoverSheetParticipating>
// @property(readonly, nonatomic) CDStruct_7238a68f transitionContext;
@property(readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
- (void)cancelTransition;
@end

