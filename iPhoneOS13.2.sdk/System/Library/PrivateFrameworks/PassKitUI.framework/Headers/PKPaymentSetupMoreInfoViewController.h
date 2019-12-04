//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSString, PKPaymentPass, PKPaymentSetupMoreInfoView;

@interface PKPaymentSetupMoreInfoViewController : UIViewController <UIScrollViewDelegate>
{
    _Bool _isFinalViewController;
    PKPaymentPass *_pass;
    NSArray *_moreInfoItems;
    long long _context;
    id /* block */ _dismissalHandler;
    PKPaymentSetupMoreInfoView *_moreInfoView;
}

@property(nonatomic) _Bool isFinalViewController; // @synthesize isFinalViewController=_isFinalViewController;
@property(readonly, retain, nonatomic) PKPaymentSetupMoreInfoView *moreInfoView; // @synthesize moreInfoView=_moreInfoView;
@property(copy, nonatomic) id /* block */ dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(readonly, nonatomic) long long context; // @synthesize context=_context;
@property(readonly, retain, nonatomic) NSArray *moreInfoItems; // @synthesize moreInfoItems=_moreInfoItems;
@property(readonly, retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (long long)preferredStatusBarStyle;
- (void)_handleDismissal;
- (void)_handlePush;
- (void)_nextTapped:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)_nextItems;
- (id)_currentItem;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (unsigned long long)edgesForExtendedLayout;
- (void)_configureNavigationItem;
- (id)initWithMoreInfoItems:(id)arg1 paymentPass:(id)arg2 context:(long long)arg3 dismissalHandler:(id /* block */)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
