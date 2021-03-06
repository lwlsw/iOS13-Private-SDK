//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <PassKitUI/PKExplanationViewDelegate-Protocol.h>

@class OBPrivacyLinkController, PKExplanationView, UIActivityIndicatorView, UIBarButtonItem;
@protocol PKExplanationViewControllerDelegate;

@interface PKExplanationViewController : UIViewController <PKExplanationViewDelegate>
{
    UIBarButtonItem *_spinningItem;
    UIBarButtonItem *_hiddenRightBarButtonItem;
    UIActivityIndicatorView *_activityIndicatorView;
    BOOL _showingSpinner;
    BOOL _wasBackHidden;
    BOOL _showCancelButton;
    BOOL _showDoneButton;
    id <PKExplanationViewControllerDelegate> _explanationViewControllerDelegate;
    long long _context;
    PKExplanationView *_explanationView;
    OBPrivacyLinkController *_privacyLinkController;
}

@property(retain, nonatomic) OBPrivacyLinkController *privacyLinkController; // @synthesize privacyLinkController=_privacyLinkController;
@property(readonly, nonatomic) PKExplanationView *explanationView; // @synthesize explanationView=_explanationView;
@property(nonatomic) BOOL showDoneButton; // @synthesize showDoneButton=_showDoneButton;
@property(nonatomic) BOOL showCancelButton; // @synthesize showCancelButton=_showCancelButton;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(nonatomic) __weak id <PKExplanationViewControllerDelegate> explanationViewControllerDelegate; // @synthesize explanationViewControllerDelegate=_explanationViewControllerDelegate;
// - (void).cxx_destruct;
- (void)_setNavigationBarEnabled:(BOOL)arg1;
- (void)showNavigationBarSpinner:(BOOL)arg1;
- (void)_dismissViewController;
- (void)_donePressed;
- (void)_cancelPressed;
- (void)viewWillLayoutSubviews;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithContext:(long long)arg1;
- (id)init;

@end

