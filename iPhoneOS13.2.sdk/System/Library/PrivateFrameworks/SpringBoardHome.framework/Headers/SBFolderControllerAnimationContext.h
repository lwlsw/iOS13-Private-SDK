//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIScreen, UIView, UIWindow;

@interface SBFolderControllerAnimationContext : NSObject
{
    UIScreen *_screen;
    UIWindow *_animationWindow;
    UIView *_fallbackIconContainer;
}

+ (id)contextWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3;
@property(readonly, nonatomic) UIView *fallbackIconContainer; // @synthesize fallbackIconContainer=_fallbackIconContainer;
@property(readonly, nonatomic) UIWindow *animationWindow; // @synthesize animationWindow=_animationWindow;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
// - (void).cxx_destruct;
- (id)initWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3;

@end

