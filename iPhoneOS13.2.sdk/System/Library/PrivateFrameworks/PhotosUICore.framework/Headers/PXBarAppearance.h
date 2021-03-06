//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXMutableBarAppearance-Protocol.h>

@class PXBarAnimationOptions, UIViewController;
@protocol PXBarAppearanceImplementationDelegate;

@interface PXBarAppearance : PXObservable <PXMutableBarAppearance, PXChangeObserver>
{
   struct {
        BOOL respondsToWillUpdateBarAppearanceOnViewWillAppear;
        BOOL respondsToIsStatusBarVisible;
    } _implementationDelegateFlags;
    long long _transitionsCounter;
    BOOL _prefersStatusBarVisible;
    BOOL _prefersNavigationBarVisible;
    BOOL _prefersToolbarVisible;
    BOOL _prefersTabBarVisible;
    BOOL __hasViewAppeared;
    BOOL _enabled;
    id <PXBarAppearanceImplementationDelegate> __implementationDelegate;
    PXBarAnimationOptions *__animationOptions;
    long long __preferredStatusBarUpdateAnimation;
    UIViewController *_viewController;
    id <PXBarAppearanceImplementationDelegate> _implementationDelegate;
}

@property(nonatomic) __weak id <PXBarAppearanceImplementationDelegate> implementationDelegate; // @synthesize implementationDelegate=_implementationDelegate;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic, setter=_setPreferredStatusBarUpdateAnimation:) long long _preferredStatusBarUpdateAnimation; // @synthesize _preferredStatusBarUpdateAnimation=__preferredStatusBarUpdateAnimation;
@property(copy, nonatomic, setter=_setAnimationOptions:) PXBarAnimationOptions *_animationOptions; // @synthesize _animationOptions=__animationOptions;
@property(nonatomic, setter=_setHasViewAppeared:) BOOL _hasViewAppeared; // @synthesize _hasViewAppeared=__hasViewAppeared;
@property(readonly, nonatomic) BOOL prefersTabBarVisible; // @synthesize prefersTabBarVisible=_prefersTabBarVisible;
@property(readonly, nonatomic) BOOL prefersToolbarVisible; // @synthesize prefersToolbarVisible=_prefersToolbarVisible;
@property(readonly, nonatomic) BOOL prefersNavigationBarVisible; // @synthesize prefersNavigationBarVisible=_prefersNavigationBarVisible;
@property(readonly, nonatomic) BOOL prefersStatusBarVisible; // @synthesize prefersStatusBarVisible=_prefersStatusBarVisible;
@property(nonatomic, setter=_setImplementationDelegate:) __weak id <PXBarAppearanceImplementationDelegate> _implementationDelegate; // @synthesize _implementationDelegate=__implementationDelegate;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_performBarsTransition:(CDUnknownBlockType)arg1;
- (void)_setTabBarVisible:(BOOL)arg1 withAnimationOptions:(id)arg2;
- (void)_setToolbarVisible:(BOOL)arg1 withAnimationOptions:(id)arg2;
- (void)_setNavigationBarVisible:(BOOL)arg1 withAnimationOptions:(id)arg2;
- (void)_updateStatusBarVisibilityWithAnimationOptions:(id)arg1;
- (void)_updateWithAnimationOptions:(id)arg1 isStatusBarHidden:(BOOL)arg2;
- (void)_update;
- (void)_updateOnViewWillAppear:(BOOL)arg1;
- (void)_updateImplementationDelegate;
- (long long)adjustedPreferredStatusBarUpdateAnimation:(long long)arg1;
- (BOOL)adjustedPrefersStatusBarHidden:(BOOL)arg1;
- (void)viewControllerViewDidDisappear:(BOOL)arg1;
- (void)viewControllerViewWillAppear:(BOOL)arg1;
- (id)mutableChangeObject;
- (void)performChangesWithAnimationOptions:(id)arg1 changes:(CDUnknownBlockType)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)initWithViewController:(id)arg1;
- (id)init;

@end

