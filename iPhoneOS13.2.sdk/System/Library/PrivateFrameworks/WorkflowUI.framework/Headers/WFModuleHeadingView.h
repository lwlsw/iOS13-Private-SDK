//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class WFAction;

@interface WFModuleHeadingView : UIView
{
    WFAction *_accessibilityAnnouncementAction;
}

@property(nonatomic) __weak WFAction *accessibilityAnnouncementAction; // @synthesize accessibilityAnnouncementAction=_accessibilityAnnouncementAction;
// - (void).cxx_destruct;
- (NSUInteger)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)accessibilityActivate;

@end

