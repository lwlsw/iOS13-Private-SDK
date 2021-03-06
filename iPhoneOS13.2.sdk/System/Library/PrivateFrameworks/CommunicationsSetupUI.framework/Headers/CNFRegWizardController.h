//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSetupController.h>

#import <CommunicationsSetupUI/CNFRegFirstRunDelegate-Protocol.h>

@class CNFRegController, _UIBackdropView;
@protocol CNFRegWizardControllerDelegate;

@interface CNFRegWizardController : PSSetupController <CNFRegFirstRunDelegate>
{
    CNFRegController *_regController;
    long long _serviceType;
    id <CNFRegWizardControllerDelegate> _firstRunDelegate;
    id _resignListener;
    id _resumeListener;
   struct {
        unsigned int automaticKeyboardWasDisabled:1;
        unsigned int shouldListenForSuspension:1;
        unsigned int canStartNested:1;
        unsigned int canShowSplashScreen:1;
        unsigned int canShowDisabledScreen:1;
        unsigned int hideLearnMoreButton:1;
        unsigned int showSplashOnSignin:1;
        unsigned int skipReloadOnNextViewWillAppear:1;
        unsigned int allowCancel:1;
        unsigned int allowSMS:1;
        unsigned int shouldTerminateInBackground:1;
    } _wizardFlags;
    _UIBackdropView *_backdropView;
}

+ (void)setSupportsAutoRotation:(BOOL)arg1;
+ (void)setGlobalAppearanceStyle:(long long)arg1;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;
@property(nonatomic) id <CNFRegWizardControllerDelegate> firstRunDelegate; // @synthesize firstRunDelegate=_firstRunDelegate;
// - (void).cxx_destruct;
@property(nonatomic) BOOL shouldTerminateInBackground; // @dynamic shouldTerminateInBackground;
@property(nonatomic) BOOL showSplashOnSignin;
@property(nonatomic) BOOL hideLearnMoreButton; // @dynamic hideLearnMoreButton;
@property(nonatomic) BOOL allowSMS;
@property(nonatomic) BOOL allowCancel;
@property(nonatomic) BOOL shouldListenForSuspension; // @dynamic shouldListenForSuspension;
- (void)setSkipReloadOnNextViewWillAppear:(BOOL)arg1;
- (BOOL)skipReloadOnNextViewWillAppear;
@property(nonatomic) BOOL canShowDisabledScreen; // @dynamic canShowDisabledScreen;
@property(nonatomic) BOOL canShowSplashScreen;
@property(nonatomic) BOOL canStartNested;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_doCancel;
- (void)firstRunController:(id)arg1 finishedWithState:(NSUInteger)arg2;
- (void)dismissFinished:(BOOL)arg1;
- (void)dismissWithState:(NSUInteger)arg1;
- (void)_applicationDidEnterBackground;
- (void)_applicationDidFinishLaunching;
- (void)_restrictionsChanged;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (void)_stopListeningForResignResume;
- (void)_startListeningForResignResume;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)popViewControllerWithTransition:(int)arg1;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)_updateNavigationBarHiddenForCurrentState;
- (void)_updateNavigationBarHiddenForPop;
- (void)_updateNavigationBarHiddenForPush;
- (void)_updateNavigationBarTitle;
- (void)setupController;
- (void)viewDidLoad;
- (BOOL)shouldShowFirstRunController;
- (id)controllersToShow;
- (id)controllersToShow:(BOOL)arg1;
- (id)controllerClassesToShow:(BOOL)arg1;
- (void)_checkRestrictions;
- (int)_firstRunState:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithServiceTypes:(long long)arg1;
- (id)initWithRegController:(id)arg1;

@end

