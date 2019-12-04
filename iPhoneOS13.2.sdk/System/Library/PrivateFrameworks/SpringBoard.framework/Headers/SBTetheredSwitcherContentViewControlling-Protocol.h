//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class SBFluidSwitcherContentView, SBTetheredRemovalSwitcherModifierEvent, UIPanGestureRecognizer;
@protocol SBTetheredSwitcherContentViewControlling;

@protocol SBTetheredSwitcherContentViewControlling 
@property(readonly, nonatomic) id <SBTetheredSwitcherContentViewControlling> tetheredViewController;
- (double)distanceToLeadingEdgeOfLeadingCardFromTrailingEdgeOfScreen;
- (unsigned long long)numberOfAppLayouts;
- (struct CGSize)contentSize;
- (_Bool)isScrolling;
- (void)prepareToReopenClosedWindowsWithCompletion:(void (^)(_Bool, _Bool))arg1;
- (void)returnScrollViewPanGestureRecognizer:(UIPanGestureRecognizer *)arg1;
- (UIPanGestureRecognizer *)borrowScrollViewPanGestureRecognizer;
- (_Bool)hasItemContainerAtLocationInContentView:(struct CGPoint)arg1;
- (void)dispatchAndHandleTetheredRemovalEvent:(SBTetheredRemovalSwitcherModifierEvent *)arg1;
- (void)tetheredViewController:(id <SBTetheredSwitcherContentViewControlling>)arg1 didPerformTransitionWithMode:(long long)arg2;
- (void)setTetheredContentView:(SBFluidSwitcherContentView *)arg1;
- (void)setTetheredScrollViewContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2 completion:(void (^)(_Bool))arg3;
- (void)endTetheringWithViewController:(id <SBTetheredSwitcherContentViewControlling>)arg1;
- (void)beginTetheringWithViewController:(id <SBTetheredSwitcherContentViewControlling>)arg1 asTetheree:(_Bool)arg2;
@end
